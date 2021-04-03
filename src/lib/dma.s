; g_dma_tag_2( dma_tag* tag)
;
; transfers data according to info pointed to by [tag] using
; DMA channel 2
;
.proc g_dma_tag_2
.define tag ARG_1
        PROC_PROLOGUE
        ldy #$00
        lda (tag),y
        sta $4320   ; set dma mode
        iny
        lda (tag),y
        sta $4321   ; set dest register
        iny
        lda (tag),y
        sta $4322   ; set source addr (low)
        iny
        lda (tag),y
        sta $4323   ; set source addr (high)
        iny
        lda (tag),y
        sta $4324   ; set source bank
        iny
        lda (tag),y
        sta $4325   ; set transfer length (low)
        iny
        lda (tag),y
        sta $4326   ; set transfer length (high)
        lda #$1<<2
        sta $420b   ; start transfer
        PROC_EPILOGUE
.endproc

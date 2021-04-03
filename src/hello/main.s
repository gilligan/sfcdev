; Displays green screen
;
; ca65 green.s
; ld65 -C lorom128.cfg -o green.smc green.o

.define ROM_NAME "GREEN"
.include "../../include/lorom128k.inc"
.include "../../include/std.inc"

reset:
    init_snes

    ;
    ; configure screen setup
    ;
    ldx #BG1_CHR_ADDR($0000)
    stx BG12NBA
    ldx #BG3_CHR_ADDR($3000)
    stx BG34NBA

    ldx BG_MAP_ADDR($1000)
    stx BG1SC
    ldx BG_MAP_ADDR($1800)
    stx BG2SC
    ldx BG_MAP_ADDR($2000)
    stx BG3SC

    ;
    ; transfer data
    ;
    ldx #$0000
    stx VMADDL
    ldx #.LOWORD(font1_dma)
    jsr g_dma_transfer

    lda #$00
    sta CGADD
    ldx #.LOWORD(cgram_dma)
    jsr g_dma_transfer

    ldy #$0000
    ldx #$1100
    stx VMADDL
:   lda greeting,y
    beq :+
    sta VMDATAL
    stz VMDATAH
    iny
    bra :-
:

    ;
    ; enable display
    ;
    lda #$01
    sta BGMODE
    lda #$07
    sta TM
    lda #$0f
    sta INIDISP
    lda #$0F
    sta $2100

forever:
    jmp forever

;
; SUBROUTINES  -----------------------------------------------------------------
;

.proc g_dma_transfer
    stx $00
    tyx
    ldy #$00
    lda ($00),y  ; dma mode
    iny
    sta $4300
    lda ($00),y ; dest register
    iny
    sta $4301
    lda ($00),y ; set src (low)
    iny
    sta $4302
    lda ($00),y ; set src (high)
    iny
    sta $4303
    lda ($00),y ; set src (bank)
    iny
    sta $4304
    lda ($00),y ; set transfer length (low)
    iny
    sta $4305
    lda ($00),y ; set transfer length (high)
    iny
    sta $4306
    lda #$1
    sta $420b
    rts
.endproc


;
; DATA ------------------------------------------------------------------------
;

font1_dma: build_dma_tag 1, $18, font, ^font, font_end-font
cgram_dma: build_dma_tag 0, $22, colors, ^colors, colors_end-colors

greeting:
    .asciiz "HELLO WORLD"
greeting_end:

font:
    .incbin "font4bpp.bin"
font_end:

colors:
    .byte $00,$00
    .byte $ff,$7f
    .byte $00,$00
    .byte $ff,$7f
colors_end:

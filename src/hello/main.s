;
; display "HELLO WORLD"
;
.define ROM_NAME "HELLO"
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
    call g_dma_tag_2, font1_dma

    lda #$00
    sta CGADD
    call g_dma_tag_2, cgram_dma

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

.include "../lib/dma.s"

;
; DATA ------------------------------------------------------------------------
;

font1_dma: build_dma_tag 1, $18, font, ^font, font_end-font
cgram_dma: build_dma_tag 0, $22, colors, ^colors, colors_end-colors
greeting: .asciiz "HELLO WORLD"

font:
    .incbin "font4bpp.bin"
font_end:

colors:
    .byte $00,$00
    .byte $ff,$7f
    .byte $00,$00
    .byte $ff,$7f
colors_end:

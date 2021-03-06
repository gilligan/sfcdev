.ifndef __SNES_INC__
__SNES_INC__ = 1

; PPU
INIDISP = $2100
OBSEL   = $2101
OAMADDL = $2102
OAMADDH = $2103
OAMDATA = $2104
BGMODE  = $2105
MOSAIC  = $2106
BG1SC   = $2107
BG2SC   = $2108
BG3SC   = $2109
BG4SC   = $210A
BG12NBA = $210B
BG34NBA = $210C
BG1HOFS = $210D
BG1VOFS = $210E
BG2HOFS = $210F
BG2VOFS = $2110
BG3HOFS = $2111
BG3VOFS = $2112
BG4HOFS = $2113
BG4VOFS = $2114
VMAIN   = $2115
VMADDL  = $2116
VMADDH  = $2117
VMDATAL = $2118
VMDATAH = $2119
M7SEL   = $211A
M7A     = $211B
M7B     = $211C
M7C     = $211D
M7D     = $211E
M7X     = $211F
M7Y     = $2120
CGADD   = $2121
CGDATA  = $2122
W12SEL  = $2123
WBGLOG  = $212A
TM      = $212C
TS      = $212D
CGWSEL  = $2130
CGADSUB = $2131
COLDATA = $2132
SETINI  = $2133
MPYL    = $2134
MPYM    = $2135
MPYH    = $2136
SLHV    = $2137
OAMDATAREAD = $2138
VMDATALREAD = $2139
VMDATAHREAD = $213A
CGDATAREAD  = $213B
OPHCT   = $213C
OPVCT   = $213D
STAT78  = $213F

; APU
APUIO0  = $2140
APUIO1  = $2141
APUIO2  = $2142
APUIO3  = $2143

; WRAM
WMDATA  = $2180
WMADDL  = $2181
WMADDM  = $2182
WMADDH  = $2183

; Joypads (NES-style I/O)
JOYSER0 = $4016
JOYSER1 = $4017

; Misc
NMITIMEN= $4200
WRIO    = $4201
WRMPYA  = $4202
WRMPYB  = $4203
WRDIVL  = $4204
WRDIVH  = $4205
WRDIVB  = $4206
HTIMEL  = $4207
HTIMEH  = $4208
VTIMEL  = $4209
VTIMEH  = $420A
MDMAEN  = $420B
MEMSEL  = $420D
RDNMI   = $4210
TIMEUP  = $4211
HVBJOY  = $4212
RDDIVL  = $4214
RDDIVH  = $4215
RDMPYL  = $4216
RDMPYH  = $4217
JOY1L   = $4218
JOY1H   = $4219
JOY2L   = $421A
JOY2H   = $421B
RDIO    = $4213

; DMA
DMA_CHAN0= $4300
DMA_CHAN1= $4310
DMA_CHAN2= $4320
DMA_CHAN3= $4330
DMA_CHAN4= $4340
DMA_CHAN5= $4350
DMA_CHAN6= $4360
DMA_CHAN7= $4370

DMAP0       := 4300h    ; DMA Control Register          1B/W
BBAD0       := 4301h    ; DMA Destination Register      1B/W
A1T0        := 4302h    ; DMA Source Address            2B/W
A1T0L       := 4302h    ;
A1T0H       := 4303h    ;
A1B0        := 4304h    ; Source Bank Address           1B/W
DAS0        := 4305h    ; DMA Transfer size/HDMA Address    2B/W
DAS0L       := 4305h    ;
DAS0H       := 4306h    ;
NLTR0       := 430Ah    ; Number Of Lines For HDMA      1B/W
DMAP1       := 4310h    ; DMA 1
BBAD1       := 4311h    ;
A1T1        := 4312h    ;
A1T1L       := 4312h    ;
A1T1H       := 4313h    ;
A1B1        := 4314h    ;
DAS1        := 4315h    ;
DAS1L       := 4315h    ;
DAS1H       := 4316h    ;
NLTR1       := 431Ah    ;
DMAP2       := 4320h    ; DMA 2
BBAD2       := 4321h    ;
A1T2        := 4322h    ;
A1T2L       := 4322h    ;
A1T2H       := 4323h    ;
A1B2        := 4324h    ;
DAS2        := 4325h    ;
DAS2L       := 4325h    ;
DAS2H       := 4326h    ;
NLTR2       := 432Ah    ;
DMAP3       := 4330h    ; DMA 3
BBAD3       := 4331h    ;
A1T3        := 4332h    ;
A1T3L       := 4332h    ;
A1T3H       := 4333h    ;
A1B3        := 4334h    ;
DAS3        := 4335h    ;
DAS3L       := 4335h    ;
DAS3H       := 4336h    ;
NLTR3       := 433Ah    ;
DMAP4       := 4340h    ; DMA 4
BBAD4       := 4341h    ;
A1T4        := 4342h    ;
A1T4L       := 4342h    ;
A1T4H       := 4343h    ;
A1B4        := 4344h    ;
DAS4        := 4345h    ;
DAS4L       := 4345h    ;
DAS4H       := 4346h    ;
NLTR4       := 434Ah    ;
DMAP5       := 4350h    ; DMA 5
BBAD5       := 4351h    ;
A1T5        := 4352h    ;
A1T5L       := 4352h    ;
A1T5H       := 4353h    ;
A1B5        := 4354h    ;
DAS5        := 4355h    ;
DAS5L       := 4355h    ;
DAS5H       := 4356h    ;
NLTR5       := 435Ah    ;
DMAP6       := 4360h    ; DMA 6
BBAD6       := 4361h    ;
A1T6        := 4362h    ;
A1T6L       := 4362h    ;
A1T6H       := 4363h    ;
A1B6        := 4364h    ;
DAS6        := 4365h    ;
DAS6L       := 4365h    ;
DAS6H       := 4366h    ;
NLTR6       := 436Ah    ;
DMAP7       := 4370h    ; DMA 7
BBAD7       := 4371h    ;
A1T7        := 4372h    ;
A1T7L       := 4372h    ;
A1T7H       := 4373h    ;
A1B7        := 4374h    ;
DAS7        := 4375h    ;
DAS7L       := 4375h    ;
DAS7H       := 4376h    ;
NLTR7       := 437Ah    ;

.endif


.macro init_snes
.p816
.smart

    sei                 ; disable interrupts
    clc                 ; switch to native mode
    xce                 ;
    rep #38h            ; mem/A/X/Y = 16bit
                        ; decimal mode off

    ldx #1FFFh          ; setup stack pointer
    txs                 ;
    lda #0000h          ; direct page = 0000h
    tcd                 ;
    sep #20h            ; 8bit A/mem


    lda #8Fh            ; enter forced blank
    sta 2100h           ;

    ldx #2101h          ; regs $2101-$210C
:   stz 00h,x           ; set Sprite,Character,Tile sizes to lowest,
    inx                 ; and set addresses to $0000
    cpx #210Dh          ;
    bne :-              ;

:   stz 00h,x           ; regs $210D-$2114
    stz 00h,x           ; Set all BG scroll values to $0000
    inx                 ;
    cpx #2115h          ;
    bne :-              ;

    stz BG1VOFS         ; so that first char line
    stz BG1VOFS         ; is visible.
    stz BG2VOFS         ;
    stz BG2VOFS         ;
    stz BG3VOFS         ;
    stz BG3VOFS         ;
    stz BG4VOFS         ;
    stz BG4VOFS                   ;


    lda #80h            ; Initialize VRAM transfer mode to word-access, increment by 1
    sta 2115h           ;

    stz 2116h           ; VRAM address = $0000
    stz 2117h           ;

    stz 211Ah           ; clear Mode7 setting

    ldx #211Bh          ; regs $211B-$2120

:   stz 00h,x           ; clear out the Mode7 matrix values
    stz 00h,x           ;
    inx                 ;
    cpx #2121h          ;
    bne :-              ;

    ldx #2123h          ; regs $2123-$2133
:   stz 00h,x           ; turn off windows, main screens, sub screens, color addition,
    inx                 ; fixed color = $00, no super-impose (external synchronization),
    cpx #2134h          ; no interlaced mode, normal resolution
    bne :-              ;

    stz 213Eh           ; might not be necesary, but selects PPU master/slave mode
    stz 4200h           ; disable timers, NMI,and auto-joyread
    lda #0FFh
    sta 4201h           ; programmable I/O write port,
                        ; initalize to allow reading at in-port

    stz 420Bh           ; turn off all general DMA channels
    stz 420Ch           ; turn off all H-MA channels

    lda 4210h           ; NMI status, reading resets

;----------------------------------------------------------------------
; clear VRAM
;----------------------------------------------------------------------

    lda #80h            ; set vram port to word access
    sta 2115h           ;
    ldx #1809h          ; clear vram with dma
    stx 4300h           ; dma mode: fixed source, WORD to $2118/9
    ldx #0000h          ;
    stx 2116h           ; VRAM port address to $0000
    stx 0000h           ; Set $00:0000 to $0000 (assumes scratchpad ram)
    stx 4302h           ; Set source address to $xx:0000
    lda #00h
    sta 4304h           ; Set source bank to $00
    ldx #0
    stx 4305h           ; Set transfer size to 64k bytes
    lda #01h
    sta 420Bh           ; Initiate transfer
    stz 2119h           ; clear the last byte of the VRAM

;----------------------------------------------------------------------
; clear palette
;----------------------------------------------------------------------
    stz 2121h
    ldx #0100h

:   stz $2122
    stz $2122
    dex
    bne :-
;----------------------------------------------------------------------

;------------------------------------------------------------------------------------------
; init OAM
;------------------------------------------------------------------------------------------

    stz 2102h           ; sprites initialized to be off the screen,
    stz 2103h           ; palette 0, character 0
    ldx #0080h
    lda #0F0h

:   sta 2104h           ; X = 240
    sta 2104h           ; Y = 240
    stz 2104h           ; character = $00
    stz 2104h           ; set priority=0, no flips
    dex
    bne :-

    ldx #0020h
:   stz 2104h           ; size bit=0, x MSB = 0
    dex
    bne :-

;------------------------------------------------------------------------------------------
; erase WRAM
;------------------------------------------------------------------------------------------

    stz 2181h           ; WRAM address = 0
    stz 2182h           ;
    stz 2183h           ;

    ldx #8008h          ; Set DMA mode to fixed source, BYTE to $2180
    stx 4300h           ; source = wram_fill_byte
    ldx #wram_fill_byte ; transfer size = full 64k
    stx 4302h
    lda #^wram_fill_byte
    sta 4304h
    ldx #0000h
    stx 4305h
    lda #01h
    sta 420Bh           ; start transfer (lower 64k)
    nop
    nop
    sta 420Bh           ; transfer again (higher 64k)

    rep #$38                        ;
    sep #$20                        ; 8bit accu / 16bit index
    jmp :+

wram_fill_byte:
.byte   $00

:
.endmacro


; build_dma_tag: create a tag for a DMA transfer
;
; - control: control register (byte)
; - dest: destination register (byte)
; - src_ofs: source address (word)
; - src_bank: source bank (byte)
; - len: length (word)
.macro build_dma_tag control,dest,src_ofs,src_bank,len
        .byte control
        .byte dest
        .word src_ofs
        .byte src_bank
        .word len
.endmacro

; BG12NBA
.define BG1_CHR_ADDR(addr) (addr>>12)
.define BG2_CHR_ADDR(addr) (addr>>8)
.define BG1_BG2_CHR_ADDR(bg1_addr,bg2_addr) (#bg1_addr>>12|#bg2_addr>>8)
.define BG1_CHR_SHIFT 12
.define BG2_CHR_SHIFT 8

; BG34NBA
.define BG3_CHR_ADDR(addr) (addr>>12)
.define BG4_CHR_ADDR(addr) (addr>>8)

; BG1SC,BG2SC,BG3SC,BG4SC
.define BG_MAP_ADDR(addr) #(addr>>8)
.define BG_MAP_SHIFT 8
.define BG_SIZE_32X32 0
.define BG_SIZE_64X32 1
.define BG_SIZE_32X64 2
.define BG_SIZE_64X64 3

.define SET_VRAM_ADDR(__addr) set_vram_addr __addr
.define SET_OAM_ADDR(__addr) set_oam_addr __addr


;
; PROC_PROLOGUE: save reg state on proc entry
;
.macro PROC_PROLOGUE
        pha
        phx
        phy
        php
        phd
        tsc
        tcd
.endmacro

;
; PROC_EPILOGUE: restore reg state on proc exit
;
.macro PROC_EPILOGUE
        tdc
        tcs
        pld
        plp
        ply
        plx
        pla
        rts
.endmacro


;
; indices to arguments on stack
;
.define ARG_1 12-1
.define ARG_2 14-1
.define ARG_3 16-1
.define ARG_4 18-1
.define ARG_5 20-1
.define ARG_6 22-1
.define ARG_7 23-1
.define ARG_8 25-1

.macro push_argument arg
        .if (.match (.left (1,{arg}),x))
                phx
        .elseif (.match (.left (1,{arg}),y))
                phy
        .elseif (.match (.left (1,{arg}),'('))
                pei arg
        .else
                pea arg
        .endif
.endmacro

.macro process_arguments arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8
        .ifnblank arg8
                push_argument arg8
        .endif
        .ifnblank arg7
                push_argument arg7
        .endif
        .ifnblank arg6
                push_argument arg6
        .endif
        .ifnblank arg5
                push_argument arg5
        .endif
        .ifnblank arg4
                push_argument arg4
        .endif
        .ifnblank arg3
                push_argument arg3
        .endif
        .ifnblank arg2
                push_argument arg2
        .endif
        .ifnblank arg1
                push_argument arg1
        .endif
.endmacro

.macro call fptr, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8
        process_arguments arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8
        jsr fptr
        rep #$38
        .a16
        tsc                               ;
        clc                               ; 
        adc # ( ( .paramcount -1 ) * 2 )  ;
        tcs                               ; remove args from stack
        sep #$20
        .a8
.endmacro


.macro IMPORT file, id
.ident (id):
.incbin file
.ident (.concat (id, "_end")):
.endmacro

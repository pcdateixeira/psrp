; Vehicle sprites - 4x4 tiles. 1 line = 32 bytes = 1 tile.

;--------------------------------------------------------------------------------------------------------
; Land rover
;--------------------------------------------------------------------------------------------------------
; Up
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$00,$00,$00,$02,$01,$01,$01,$02,$01,$01,$01
.db $03,$00,$00,$00,$0c,$00,$00,$03,$1c,$08,$08,$07,$3b,$10,$10,$0c,$3c,$13,$10,$08,$fb,$07,$00,$17,$7f,$84,$80,$94,$7c,$80,$80,$87
.db $c0,$00,$00,$00,$30,$00,$00,$c0,$38,$10,$10,$e0,$dc,$08,$08,$30,$3c,$c8,$08,$10,$dd,$e0,$00,$e8,$fe,$21,$01,$29,$3e,$01,$01,$e1
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$00,$00,$00,$40,$80,$80,$80,$40,$80,$80,$80
.db $03,$01,$01,$01,$03,$01,$01,$01,$03,$00,$01,$01,$03,$00,$01,$01,$01,$00,$00,$00,$01,$00,$00,$00,$03,$00,$00,$00,$05,$02,$02,$02
.db $fc,$a0,$a0,$8f,$fd,$a0,$a0,$8e,$fc,$20,$a0,$97,$fc,$20,$a0,$97,$ff,$00,$00,$00,$fc,$40,$40,$87,$fc,$00,$00,$2f,$ff,$00,$00,$a8
.db $3f,$05,$05,$f1,$bf,$05,$05,$71,$3f,$04,$05,$e9,$3f,$04,$05,$e9,$ff,$00,$00,$00,$3f,$02,$02,$e1,$3f,$00,$00,$f4,$ff,$00,$00,$15
.db $c0,$80,$80,$80,$c0,$80,$80,$80,$c0,$00,$80,$80,$c0,$00,$80,$80,$80,$00,$00,$00,$80,$00,$00,$00,$c0,$00,$00,$00,$a0,$40,$40,$40
.db $05,$02,$02,$02,$07,$02,$02,$02,$07,$02,$02,$02,$07,$00,$02,$02,$07,$00,$02,$02,$03,$00,$00,$00,$05,$02,$02,$02,$04,$03,$03,$03
.db $fc,$40,$40,$97,$fc,$40,$40,$97,$fc,$40,$40,$97,$fc,$40,$40,$97,$ff,$40,$40,$94,$fe,$00,$01,$81,$ff,$31,$00,$b1,$ec,$0b,$10,$1b
.db $3f,$02,$02,$e9,$3f,$02,$02,$e9,$3f,$02,$02,$e9,$3f,$02,$02,$e9,$ff,$02,$02,$29,$7f,$00,$80,$81,$ff,$8c,$00,$8d,$37,$d0,$08,$d8
.db $a0,$40,$40,$40,$e0,$40,$40,$40,$e0,$40,$40,$40,$e0,$00,$40,$40,$e0,$00,$40,$40,$c0,$00,$00,$00,$a0,$40,$40,$40,$20,$c0,$c0,$c0
.db $04,$03,$03,$03,$07,$03,$03,$03,$07,$02,$02,$02,$07,$02,$02,$02,$07,$00,$02,$02,$07,$00,$02,$02,$07,$00,$02,$02,$03,$00,$00,$00
.db $ad,$63,$10,$73,$f8,$04,$03,$07,$2d,$e3,$10,$73,$ff,$00,$00,$04,$2f,$e0,$10,$73,$2b,$e0,$10,$70,$28,$e0,$10,$70,$f0,$00,$00,$00
.db $b3,$c6,$08,$ce,$1f,$20,$c0,$e0,$b2,$ce,$01,$c7,$ff,$00,$00,$20,$f2,$0e,$01,$c7,$d2,$0e,$01,$07,$12,$0e,$01,$07,$0f,$00,$00,$00
.db $20,$c0,$c0,$c0,$e0,$c0,$c0,$c0,$e0,$40,$40,$40,$e0,$40,$40,$40,$e0,$00,$40,$40,$e0,$00,$40,$40,$e0,$00,$40,$40,$c0,$00,$00,$00
; Right
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$7f,$00,$00,$00,$fe,$0f,$7f,$7f,$fe,$03,$03,$03
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$df,$00,$00,$00,$3e,$c7,$df,$df,$7f,$80,$80,$80
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$00,$00,$00,$4f,$80,$80,$80,$ff,$03,$0f,$0f
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$c0,$00,$00,$00,$20,$c0,$c0,$c0
.db $8b,$74,$00,$00,$8a,$75,$00,$75,$ff,$75,$00,$75,$8a,$00,$75,$75,$7f,$00,$00,$00,$1d,$02,$00,$0a,$38,$05,$02,$17,$3d,$05,$02,$17
.db $ff,$00,$00,$7f,$ff,$1f,$1f,$00,$ff,$40,$00,$40,$7f,$40,$80,$df,$ff,$80,$00,$80,$ff,$00,$00,$1f,$70,$80,$00,$8f,$50,$c0,$20,$ef
.db $ff,$03,$0f,$af,$ff,$20,$20,$00,$ff,$0f,$0f,$c0,$ff,$00,$00,$0c,$ff,$00,$00,$c3,$ff,$00,$00,$6f,$90,$00,$00,$6f,$92,$00,$00,$6d
.db $20,$c0,$c0,$c0,$e0,$00,$00,$00,$f8,$00,$00,$00,$fc,$18,$18,$60,$fe,$04,$04,$18,$d6,$60,$00,$ec,$69,$30,$00,$a6,$69,$30,$00,$a6
.db $3d,$05,$02,$17,$38,$05,$02,$17,$1d,$02,$00,$0a,$7f,$00,$00,$00,$8a,$74,$01,$01,$8a,$75,$00,$75,$ff,$75,$00,$75,$8b,$00,$74,$74
.db $50,$c0,$20,$ef,$70,$80,$00,$8f,$ff,$00,$00,$1f,$ff,$80,$00,$80,$7f,$40,$80,$df,$ff,$40,$00,$40,$ff,$1f,$1f,$00,$ff,$00,$00,$7f
.db $92,$00,$00,$6d,$90,$00,$00,$6f,$ff,$00,$00,$6f,$ff,$00,$00,$c3,$ff,$00,$00,$0c,$ff,$0f,$0f,$c0,$ff,$20,$20,$00,$ff,$03,$0f,$af
.db $69,$30,$00,$a6,$69,$30,$00,$a6,$d6,$60,$00,$ec,$fe,$04,$04,$18,$fc,$18,$18,$60,$f8,$00,$00,$00,$c0,$00,$00,$00,$20,$c0,$c0,$c0
.db $fe,$03,$03,$03,$fe,$0f,$7f,$7f,$7f,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $7f,$80,$80,$80,$3e,$c7,$df,$df,$df,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $ff,$03,$0f,$0f,$4f,$80,$80,$80,$80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $20,$c0,$c0,$c0,$c0,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
; Down
.db $03,$00,$00,$00,$07,$00,$02,$02,$07,$00,$02,$02,$07,$00,$02,$02,$07,$02,$02,$02,$07,$02,$02,$02,$07,$03,$03,$03,$04,$03,$03,$03
.db $f0,$00,$00,$00,$48,$70,$80,$e0,$4b,$70,$80,$e0,$4f,$70,$80,$e3,$ff,$00,$00,$04,$4d,$73,$80,$e3,$f8,$04,$03,$07,$cd,$63,$10,$73
.db $0f,$00,$00,$00,$14,$07,$08,$0e,$d4,$07,$08,$0e,$f4,$07,$08,$ce,$ff,$00,$00,$20,$b4,$c7,$08,$ce,$1f,$20,$c0,$e0,$b5,$c6,$08,$ce
.db $c0,$00,$00,$00,$e0,$00,$40,$40,$e0,$00,$40,$40,$e0,$00,$40,$40,$e0,$40,$40,$40,$e0,$40,$40,$40,$e0,$c0,$c0,$c0,$20,$c0,$c0,$c0
.db $04,$03,$03,$03,$05,$02,$02,$02,$03,$00,$00,$00,$07,$00,$02,$02,$07,$00,$02,$02,$07,$02,$02,$02,$07,$02,$02,$02,$05,$02,$02,$02
.db $ec,$0b,$10,$1b,$ff,$31,$00,$b1,$fe,$00,$01,$81,$ff,$40,$40,$94,$fc,$40,$40,$97,$fc,$40,$40,$97,$fc,$40,$40,$97,$fc,$40,$40,$97
.db $37,$d0,$08,$d8,$ff,$8c,$00,$8d,$7f,$00,$80,$81,$ff,$02,$02,$29,$3f,$02,$02,$e9,$3f,$02,$02,$e9,$3f,$02,$02,$e9,$3f,$02,$02,$e9
.db $20,$c0,$c0,$c0,$a0,$40,$40,$40,$c0,$00,$00,$00,$e0,$00,$40,$40,$e0,$00,$40,$40,$e0,$40,$40,$40,$e0,$40,$40,$40,$a0,$40,$40,$40
.db $05,$02,$02,$02,$03,$00,$00,$00,$01,$00,$00,$00,$01,$00,$00,$00,$03,$00,$01,$01,$03,$00,$01,$01,$03,$01,$01,$01,$03,$01,$01,$01
.db $ff,$00,$00,$a8,$fc,$00,$00,$2f,$fc,$40,$40,$87,$ff,$00,$00,$00,$fc,$20,$a0,$97,$fc,$20,$a0,$97,$fd,$a0,$a0,$8e,$fc,$a0,$a0,$8f
.db $ff,$00,$00,$15,$3f,$00,$00,$f4,$3f,$02,$02,$e1,$ff,$00,$00,$00,$3f,$04,$05,$e9,$3f,$04,$05,$e9,$bf,$05,$05,$71,$3f,$05,$05,$f1
.db $a0,$40,$40,$40,$c0,$00,$00,$00,$80,$00,$00,$00,$80,$00,$00,$00,$c0,$00,$80,$80,$c0,$00,$80,$80,$c0,$80,$80,$80,$c0,$80,$80,$80
.db $02,$01,$01,$01,$02,$01,$01,$01,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $7c,$80,$80,$87,$7f,$84,$80,$94,$bb,$07,$00,$17,$3c,$13,$10,$08,$3b,$10,$10,$0c,$1c,$08,$08,$07,$0c,$00,$00,$03,$03,$00,$00,$00
.db $3e,$01,$01,$e1,$fe,$21,$01,$29,$df,$e0,$00,$e8,$3c,$c8,$08,$10,$dc,$08,$08,$30,$38,$10,$10,$e0,$30,$00,$00,$c0,$c0,$00,$00,$00
.db $40,$80,$80,$80,$40,$80,$80,$80,$80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
; Left
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$03,$00,$00,$00,$04,$03,$03,$03
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$00,$00,$00,$f2,$01,$01,$01,$ff,$c0,$f0,$f0
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$fb,$00,$00,$00,$7c,$e3,$fb,$fb,$fe,$01,$01,$01
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$fe,$00,$00,$00,$7f,$f0,$fe,$fe,$7f,$c0,$c0,$c0
.db $04,$03,$03,$03,$03,$00,$00,$00,$1f,$00,$00,$00,$3f,$18,$18,$06,$7f,$20,$20,$18,$6b,$06,$00,$37,$96,$0c,$00,$65,$96,$0c,$00,$65
.db $ff,$c0,$f0,$f5,$ff,$04,$04,$00,$ff,$f0,$f0,$03,$ff,$00,$00,$30,$ff,$00,$00,$c3,$ff,$00,$00,$f6,$09,$00,$00,$f6,$49,$00,$00,$b6
.db $ff,$00,$00,$fe,$ff,$f8,$f8,$00,$ff,$02,$00,$02,$fe,$02,$01,$fb,$ff,$01,$00,$01,$ff,$00,$00,$f8,$0e,$01,$00,$f1,$0a,$03,$04,$f7
.db $d1,$00,$2e,$2e,$ff,$ae,$00,$ae,$51,$ae,$00,$ae,$51,$2e,$80,$80,$fe,$00,$00,$00,$b8,$40,$00,$50,$1c,$a0,$40,$e8,$bc,$a0,$40,$e8
.db $96,$0c,$00,$65,$96,$0c,$00,$65,$6b,$06,$00,$37,$7f,$20,$20,$18,$3f,$18,$18,$06,$1f,$00,$00,$00,$07,$00,$00,$00,$04,$03,$03,$03
.db $49,$00,$00,$b6,$09,$00,$00,$f6,$ff,$00,$00,$f6,$ff,$00,$00,$c3,$ff,$00,$00,$30,$ff,$f0,$f0,$03,$ff,$04,$04,$00,$ff,$c0,$f0,$f5
.db $0a,$03,$04,$f7,$0e,$01,$00,$f1,$ff,$00,$00,$f8,$ff,$01,$00,$01,$fe,$02,$01,$fb,$ff,$02,$00,$02,$ff,$f8,$f8,$00,$ff,$00,$00,$fe
.db $bc,$a0,$40,$e8,$1c,$a0,$40,$e8,$b8,$40,$00,$50,$fe,$00,$00,$00,$51,$00,$ae,$ae,$ff,$ae,$00,$ae,$51,$ae,$00,$ae,$d1,$2e,$00,$00
.db $04,$03,$03,$03,$03,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $ff,$c0,$f0,$f0,$f2,$01,$01,$01,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $fe,$01,$01,$01,$7c,$e3,$fb,$fb,$fb,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $7f,$c0,$c0,$c0,$7f,$f0,$fe,$fe,$fe,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00

;--------------------------------------------------------------------------------------------------------
; Hovercraft
;--------------------------------------------------------------------------------------------------------
; Up
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$01,$00,$00,$03,$01,$00,$00,$03
.db $07,$00,$00,$00,$0f,$01,$06,$00,$19,$00,$06,$00,$16,$06,$09,$60,$73,$02,$0d,$c0,$fd,$44,$4b,$80,$dd,$84,$ab,$00,$f7,$a4,$88,$00
.db $e0,$00,$00,$00,$f0,$80,$60,$00,$98,$00,$60,$00,$68,$60,$90,$06,$ce,$40,$b0,$03,$bf,$22,$d2,$01,$bb,$21,$d5,$00,$ef,$25,$11,$00
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$80,$00,$00,$c0,$80,$00,$00,$c0
.db $01,$00,$00,$03,$03,$01,$01,$06,$03,$01,$01,$06,$03,$01,$01,$06,$03,$01,$01,$06,$03,$01,$01,$06,$03,$01,$01,$06,$1f,$01,$01,$02
.db $ed,$a1,$92,$03,$ea,$23,$14,$07,$f8,$03,$44,$07,$dc,$17,$60,$06,$fc,$17,$60,$06,$ff,$00,$60,$00,$fb,$08,$66,$00,$df,$00,$60,$00
.db $b7,$85,$49,$c0,$57,$c4,$28,$e0,$1f,$c0,$22,$e0,$3b,$e8,$06,$60,$3f,$e8,$06,$60,$ff,$00,$06,$00,$df,$10,$66,$00,$fb,$00,$06,$00
.db $80,$00,$00,$c0,$c0,$80,$80,$60,$c0,$80,$80,$60,$c0,$80,$80,$60,$c0,$80,$80,$60,$c0,$80,$80,$60,$c0,$80,$80,$60,$f8,$80,$80,$40
.db $2f,$04,$04,$18,$3f,$00,$01,$00,$2a,$10,$0d,$00,$2a,$10,$0d,$00,$2a,$10,$0d,$00,$2b,$11,$0c,$00,$3f,$1c,$00,$00,$1d,$00,$00,$03
.db $b2,$11,$ce,$00,$32,$11,$ce,$00,$32,$11,$ce,$00,$32,$11,$ce,$00,$19,$08,$e7,$00,$d9,$c8,$27,$00,$fd,$64,$03,$00,$ef,$a1,$98,$00
.db $4d,$88,$73,$00,$4c,$88,$73,$00,$4c,$88,$73,$00,$4c,$88,$73,$00,$98,$10,$e7,$00,$9b,$13,$e4,$00,$bf,$26,$c0,$00,$f7,$85,$19,$00
.db $f4,$20,$20,$18,$fc,$00,$80,$00,$54,$08,$b0,$00,$54,$08,$b0,$00,$54,$08,$b0,$00,$d4,$88,$30,$00,$fc,$38,$00,$00,$b8,$00,$00,$c0
.db $01,$00,$00,$03,$01,$00,$00,$03,$01,$00,$00,$03,$00,$00,$00,$01,$00,$00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $f9,$80,$80,$06,$e9,$a0,$98,$06,$ef,$a0,$98,$01,$ff,$50,$44,$81,$f9,$48,$47,$80,$7e,$2c,$21,$c0,$3f,$13,$10,$60,$0b,$00,$00,$1c
.db $ff,$61,$61,$00,$f7,$65,$79,$00,$f7,$05,$19,$80,$ff,$0a,$22,$81,$9f,$12,$e2,$01,$7e,$34,$84,$03,$fc,$c0,$00,$0e,$d0,$00,$00,$38
.db $80,$00,$00,$c0,$80,$00,$00,$c0,$00,$00,$00,$80,$00,$00,$00,$80,$00,$00,$00,$80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
; Right
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$07,$07,$00,$00,$1f
.db $00,$00,$00,$00,$00,$00,$00,$00,$7f,$00,$00,$00,$c2,$7c,$00,$01,$ff,$40,$3c,$01,$c3,$41,$3d,$00,$7f,$00,$00,$80,$e3,$20,$1e,$80
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$00,$00,$00,$80,$00,$00,$00,$80,$00,$00,$7e,$fe,$00,$00,$ff,$ff,$fe,$fe,$01
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$c0,$c0,$00,$00,$e0
.db $1f,$07,$07,$38,$3f,$18,$18,$60,$7f,$26,$20,$40,$79,$48,$46,$80,$ff,$30,$06,$80,$6c,$20,$18,$83,$ec,$40,$10,$03,$df,$40,$30,$0c
.db $e1,$a0,$9f,$00,$e0,$60,$1f,$00,$cf,$c0,$30,$00,$7f,$0f,$80,$00,$f0,$30,$8f,$00,$c0,$40,$3f,$00,$8f,$00,$7f,$00,$f0,$8f,$70,$00
.db $ff,$01,$01,$00,$ff,$00,$fc,$00,$77,$03,$f8,$00,$fc,$18,$03,$00,$ff,$40,$00,$00,$b9,$18,$46,$1e,$e2,$1e,$41,$1f,$e1,$1f,$00,$07
.db $e0,$c0,$c0,$30,$f0,$20,$20,$18,$b0,$80,$40,$08,$fc,$00,$00,$00,$66,$00,$f8,$00,$eb,$e8,$16,$00,$9b,$18,$66,$00,$f7,$02,$78,$00
.db $df,$40,$30,$0c,$ef,$43,$13,$00,$6f,$23,$1b,$80,$ff,$30,$06,$80,$79,$08,$06,$c0,$7f,$26,$20,$40,$3f,$18,$18,$60,$1f,$07,$07,$38
.db $f0,$8f,$70,$00,$8f,$00,$7f,$00,$c0,$40,$3f,$00,$f0,$30,$8f,$00,$7f,$0f,$80,$00,$cf,$c0,$30,$00,$e0,$60,$1f,$00,$e1,$a0,$9f,$00
.db $e1,$1f,$00,$07,$e2,$1e,$41,$1f,$b9,$18,$46,$1e,$ff,$40,$00,$00,$fc,$18,$03,$00,$77,$03,$f8,$00,$ff,$00,$fc,$00,$ff,$01,$01,$00
.db $f7,$02,$78,$00,$9b,$18,$66,$00,$eb,$e8,$16,$00,$66,$00,$f8,$00,$fc,$00,$00,$00,$b0,$80,$40,$08,$f0,$20,$20,$18,$e0,$c0,$c0,$30
.db $03,$00,$00,$1f,$00,$00,$00,$03,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $e3,$20,$1e,$80,$7f,$00,$00,$80,$c3,$41,$3d,$00,$ff,$40,$3c,$01,$c2,$7c,$00,$01,$7f,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $ff,$fe,$fe,$01,$fe,$00,$00,$ff,$80,$00,$00,$7e,$80,$00,$00,$00,$80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $c0,$00,$00,$e0,$00,$00,$00,$c0,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
; Down
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$00,$00,$00,$01,$00,$00,$00,$01,$01,$00,$00,$03,$01,$00,$00,$03
.db $0b,$00,$00,$1c,$3f,$03,$00,$70,$7e,$2c,$21,$c0,$f9,$48,$47,$80,$ff,$50,$44,$81,$ef,$a0,$98,$01,$ef,$a6,$9e,$00,$ff,$86,$86,$00
.db $d0,$00,$00,$38,$fc,$c8,$08,$06,$7e,$34,$84,$03,$9f,$12,$e2,$01,$ff,$0a,$22,$81,$f7,$05,$19,$80,$97,$05,$19,$60,$9f,$01,$01,$60
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$00,$00,$00,$80,$80,$00,$00,$c0,$80,$00,$00,$c0,$80,$00,$00,$c0
.db $1d,$00,$00,$03,$3f,$1c,$00,$00,$2b,$11,$0c,$00,$2a,$10,$0d,$00,$2a,$10,$0d,$00,$2a,$10,$0d,$00,$3f,$00,$01,$00,$2f,$04,$04,$18
.db $ef,$a1,$98,$00,$fd,$64,$03,$00,$d9,$c8,$27,$00,$19,$08,$e7,$00,$32,$11,$ce,$00,$32,$11,$ce,$00,$32,$11,$ce,$00,$b2,$11,$ce,$00
.db $f7,$85,$19,$00,$bf,$26,$c0,$00,$9b,$13,$e4,$00,$98,$10,$e7,$00,$4c,$88,$73,$00,$4c,$88,$73,$00,$4c,$88,$73,$00,$4d,$88,$73,$00
.db $b8,$00,$00,$c0,$fc,$38,$00,$00,$d4,$88,$30,$00,$54,$08,$b0,$00,$54,$08,$b0,$00,$54,$08,$b0,$00,$fc,$00,$80,$00,$f4,$20,$20,$18
.db $1f,$01,$01,$02,$03,$01,$01,$06,$03,$01,$01,$06,$03,$01,$01,$06,$03,$01,$01,$06,$03,$01,$01,$06,$03,$01,$01,$06,$01,$00,$00,$03
.db $df,$00,$60,$00,$fb,$08,$66,$00,$ff,$00,$60,$00,$fc,$17,$60,$06,$dc,$17,$60,$06,$f8,$03,$44,$07,$ea,$23,$14,$07,$ed,$a1,$92,$03
.db $fb,$00,$06,$00,$df,$10,$66,$00,$ff,$00,$06,$00,$3f,$e8,$06,$60,$3b,$e8,$06,$60,$1f,$c0,$22,$e0,$57,$c4,$28,$e0,$b7,$85,$49,$c0
.db $f8,$80,$80,$40,$c0,$80,$80,$60,$c0,$80,$80,$60,$c0,$80,$80,$60,$c0,$80,$80,$60,$c0,$80,$80,$60,$c0,$80,$80,$60,$80,$00,$00,$c0
.db $01,$00,$00,$03,$01,$00,$00,$03,$00,$00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $f7,$a4,$88,$00,$dd,$84,$ab,$00,$fd,$44,$4b,$80,$73,$02,$0d,$c0,$16,$06,$09,$60,$19,$00,$06,$00,$0f,$01,$06,$00,$07,$00,$00,$00
.db $ef,$25,$11,$00,$bb,$21,$d5,$00,$bf,$22,$d2,$01,$ce,$40,$b0,$03,$68,$60,$90,$06,$98,$00,$60,$00,$f0,$80,$60,$00,$e0,$00,$00,$00
.db $80,$00,$00,$c0,$80,$00,$00,$c0,$00,$00,$00,$80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
; Left
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$03,$03,$00,$00,$07
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$00,$00,$00,$01,$00,$00,$00,$01,$00,$00,$7e,$7f,$00,$00,$ff,$ff,$7f,$7f,$80
.db $00,$00,$00,$00,$00,$00,$00,$00,$fe,$00,$00,$00,$43,$3e,$00,$80,$ff,$02,$3c,$80,$c3,$82,$bc,$00,$fe,$00,$00,$01,$c7,$04,$78,$01
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$c0,$c0,$00,$00,$f8
.db $07,$03,$03,$0c,$0f,$04,$04,$18,$0d,$01,$02,$10,$3f,$00,$00,$00,$66,$00,$1f,$00,$d7,$17,$68,$00,$d9,$18,$66,$00,$ef,$40,$1e,$00
.db $ff,$80,$80,$00,$ff,$00,$3f,$00,$ee,$c0,$1f,$00,$3f,$18,$c0,$00,$ff,$02,$00,$00,$9d,$18,$62,$78,$47,$78,$82,$f8,$87,$f8,$00,$e0
.db $87,$05,$f9,$00,$07,$06,$f8,$00,$f3,$03,$0c,$00,$fe,$f0,$01,$00,$0f,$0c,$f1,$00,$03,$02,$fc,$00,$f1,$00,$fe,$00,$0f,$f1,$0e,$00
.db $f8,$e0,$e0,$1c,$fc,$18,$18,$06,$fe,$64,$04,$02,$9e,$10,$60,$03,$ff,$0c,$60,$01,$f6,$c4,$d8,$01,$f7,$c2,$c8,$00,$fb,$02,$0c,$30
.db $ef,$40,$1e,$00,$d9,$18,$66,$00,$d7,$17,$68,$00,$66,$00,$1f,$00,$3f,$00,$00,$00,$0d,$01,$02,$10,$0f,$04,$04,$18,$07,$03,$03,$0c
.db $87,$f8,$00,$e0,$47,$78,$82,$f8,$9d,$18,$62,$78,$ff,$02,$00,$00,$3f,$18,$c0,$00,$ee,$c0,$1f,$00,$ff,$00,$3f,$00,$ff,$80,$80,$00
.db $0f,$f1,$0e,$00,$f1,$00,$fe,$00,$03,$02,$fc,$00,$0f,$0c,$f1,$00,$fe,$f0,$01,$00,$f3,$03,$0c,$00,$07,$06,$f8,$00,$87,$05,$f9,$00
.db $fb,$02,$0c,$30,$37,$02,$08,$c0,$36,$04,$18,$c1,$ff,$0c,$60,$01,$9e,$12,$62,$01,$fe,$64,$04,$02,$fc,$18,$18,$06,$f8,$e0,$e0,$1c
.db $03,$00,$00,$07,$00,$00,$00,$03,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $ff,$7f,$7f,$80,$7f,$00,$00,$ff,$01,$00,$00,$7e,$01,$00,$00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $c7,$04,$78,$01,$fe,$00,$00,$01,$c3,$82,$bc,$00,$ff,$02,$3c,$80,$43,$3e,$00,$80,$fe,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $e0,$00,$00,$f8,$00,$00,$00,$e0,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00

;--------------------------------------------------------------------------------------------------------
; Ice Digger
;--------------------------------------------------------------------------------------------------------
; Up
.db $06,$05,$05,$05,$06,$07,$07,$07,$06,$07,$07,$07,$07,$00,$00,$00,$06,$07,$07,$07,$07,$00,$00,$00,$06,$07,$07,$07,$07,$00,$00,$00
.db $e0,$00,$40,$40,$60,$80,$e0,$e0,$60,$80,$e0,$e0,$e3,$00,$00,$00,$6c,$80,$e3,$e0,$f3,$00,$0f,$00,$7c,$83,$e7,$e0,$ed,$02,$12,$00
.db $06,$05,$05,$05,$06,$07,$07,$07,$06,$07,$07,$07,$c7,$00,$00,$00,$36,$07,$c7,$07,$cf,$00,$f0,$00,$3e,$c7,$e7,$07,$b7,$40,$48,$00
.db $e0,$00,$40,$40,$60,$80,$e0,$e0,$60,$80,$e0,$e0,$e0,$00,$00,$00,$60,$80,$e0,$e0,$e0,$00,$00,$00,$60,$80,$e0,$e0,$e0,$00,$00,$00
.db $0a,$01,$07,$00,$0f,$00,$00,$00,$0a,$01,$07,$00,$0a,$01,$07,$00,$0a,$01,$07,$00,$1b,$00,$07,$00,$1d,$00,$0b,$08,$15,$08,$0b,$08
.db $5e,$80,$e8,$01,$f4,$09,$08,$02,$54,$89,$e8,$02,$5e,$80,$e0,$03,$57,$88,$e8,$03,$d3,$0c,$ec,$00,$b6,$0b,$d8,$02,$bd,$02,$c0,$02
.db $7a,$01,$17,$80,$2f,$90,$10,$40,$2a,$91,$17,$40,$7a,$01,$07,$c0,$ea,$11,$17,$c0,$cb,$30,$37,$00,$6d,$d0,$1b,$40,$bd,$40,$03,$40
.db $50,$80,$e0,$00,$f0,$00,$00,$00,$50,$80,$e0,$00,$50,$80,$e0,$00,$50,$80,$e0,$00,$d8,$00,$e0,$00,$b8,$00,$d0,$10,$a8,$10,$d0,$10
.db $12,$0c,$0d,$0c,$1f,$0e,$0e,$0e,$1f,$0e,$0e,$0e,$1f,$00,$0e,$0e,$1f,$00,$0e,$0e,$11,$0e,$0e,$0e,$11,$0e,$0e,$0e,$1f,$0e,$0e,$0e
.db $5e,$0d,$a0,$2d,$f7,$09,$00,$09,$f3,$2c,$80,$20,$76,$8a,$81,$0b,$5e,$8a,$a1,$2b,$7f,$81,$80,$01,$4c,$a0,$93,$33,$3a,$c3,$c4,$07
.db $7a,$b0,$05,$b4,$ef,$90,$00,$90,$cf,$34,$01,$04,$6e,$51,$81,$d0,$7a,$51,$85,$d4,$fe,$81,$01,$80,$32,$05,$c9,$cc,$5c,$c3,$23,$e0
.db $48,$30,$b0,$30,$f8,$70,$70,$70,$f8,$70,$70,$70,$f8,$00,$70,$70,$f8,$00,$70,$70,$88,$70,$70,$70,$88,$70,$70,$70,$f8,$70,$70,$70
.db $1f,$0e,$0e,$0e,$1f,$00,$0e,$0e,$1f,$00,$0e,$0e,$11,$0e,$0e,$0e,$11,$0e,$0e,$0e,$1f,$0e,$0e,$0e,$1f,$0e,$0e,$0e,$0e,$00,$00,$00
.db $1b,$e0,$c4,$04,$22,$c3,$dc,$1f,$bb,$42,$c4,$06,$cf,$0e,$b0,$3e,$53,$1d,$a0,$39,$51,$1c,$a2,$3a,$be,$00,$00,$00,$00,$00,$00,$00
.db $d8,$07,$23,$20,$44,$c3,$3b,$f8,$dd,$42,$23,$60,$f3,$70,$0d,$7c,$ca,$b8,$05,$9c,$8a,$38,$45,$5c,$7d,$00,$00,$00,$00,$00,$00,$00
.db $f8,$70,$70,$70,$f8,$00,$70,$70,$f8,$00,$70,$70,$88,$70,$70,$70,$88,$70,$70,$70,$f8,$70,$70,$70,$f8,$70,$70,$70,$70,$00,$00,$00
; Right
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$7f,$00,$00,$00,$e7,$79,$7f,$7f,$e7,$79,$7f,$7f,$e7,$79,$7f,$7f,$7f,$00,$00,$00
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$ff,$00,$00,$00,$9e,$e7,$ff,$ff,$9e,$e7,$ff,$ff,$9f,$e6,$fe,$fe,$fe,$00,$01,$00
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$e0,$00,$00,$00,$7f,$80,$c0,$c0,$c2,$00,$3d,$00,$3f,$00,$fd,$00,$e2,$1d,$fd,$00
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$ff,$57,$57,$57,$ff,$56,$56,$56,$a8,$57,$57,$57
.db $4c,$03,$3f,$00,$38,$07,$07,$00,$46,$01,$38,$38,$75,$30,$0a,$3a,$4d,$38,$02,$3a,$48,$38,$07,$0f,$5f,$0e,$20,$2e,$3d,$12,$00,$12
.db $06,$f8,$fd,$00,$7f,$80,$80,$00,$ae,$44,$11,$55,$bf,$00,$40,$40,$f1,$1f,$00,$1b,$7b,$05,$80,$81,$bf,$98,$40,$d8,$26,$a3,$58,$fb
.db $e2,$1d,$fd,$00,$3f,$00,$fd,$00,$c2,$00,$3d,$00,$ff,$00,$40,$00,$89,$76,$77,$00,$df,$20,$20,$00,$79,$c0,$00,$de,$b0,$46,$00,$19
.db $a9,$56,$56,$56,$ff,$00,$57,$57,$ff,$00,$56,$56,$60,$00,$80,$00,$d0,$00,$20,$00,$d0,$00,$60,$00,$28,$c0,$f0,$00,$a8,$40,$70,$00
.db $3d,$12,$00,$12,$5f,$0e,$20,$2e,$48,$38,$07,$0f,$4d,$38,$02,$3a,$75,$30,$0a,$3a,$46,$01,$38,$38,$38,$07,$07,$00,$4c,$03,$3f,$00
.db $26,$a3,$58,$fb,$bf,$98,$40,$d8,$7b,$05,$80,$81,$f1,$1f,$00,$1b,$bf,$00,$40,$40,$ae,$44,$11,$55,$7f,$80,$80,$00,$06,$f8,$fd,$00
.db $b0,$46,$00,$19,$79,$c0,$00,$de,$df,$20,$20,$00,$89,$76,$77,$00,$ff,$00,$40,$00,$c2,$00,$3d,$00,$3f,$00,$fd,$00,$e2,$1d,$fd,$00
.db $a8,$40,$70,$00,$28,$c0,$f0,$00,$d0,$00,$60,$00,$d0,$00,$20,$00,$60,$00,$80,$00,$ff,$57,$57,$57,$ff,$56,$56,$56,$a8,$57,$57,$57
.db $7f,$00,$00,$00,$e7,$79,$7f,$7f,$e7,$79,$7f,$7f,$e7,$79,$7f,$7f,$7f,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $fe,$00,$01,$00,$9f,$e6,$fe,$fe,$9e,$e7,$ff,$ff,$9e,$e7,$ff,$ff,$ff,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $e2,$1d,$fd,$00,$3f,$00,$fd,$00,$c2,$00,$3d,$00,$7f,$80,$c0,$c0,$e0,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $a9,$56,$56,$56,$ff,$00,$57,$57,$ff,$00,$56,$56,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
; Down
.db $0e,$00,$00,$00,$1f,$0e,$0e,$0e,$1f,$0e,$0e,$0e,$11,$0e,$0e,$0e,$11,$0e,$0e,$0e,$1f,$00,$0e,$0e,$1f,$00,$0e,$0e,$1f,$0e,$0e,$0e
.db $00,$00,$00,$00,$be,$00,$00,$00,$51,$1c,$a2,$3a,$53,$1d,$a0,$39,$cf,$0e,$b0,$3e,$bb,$42,$c4,$06,$22,$c3,$dc,$1f,$1b,$e0,$c4,$04
.db $00,$00,$00,$00,$7d,$00,$00,$00,$8a,$38,$45,$5c,$ca,$b8,$05,$9c,$f3,$70,$0d,$7c,$dd,$42,$23,$60,$44,$c3,$3b,$f8,$d8,$07,$23,$20
.db $70,$00,$00,$00,$f8,$70,$70,$70,$f8,$70,$70,$70,$88,$70,$70,$70,$88,$70,$70,$70,$f8,$00,$70,$70,$f8,$00,$70,$70,$f8,$70,$70,$70
.db $1f,$0e,$0e,$0e,$11,$0e,$0e,$0e,$11,$0e,$0e,$0e,$1f,$00,$0e,$0e,$1f,$00,$0e,$0e,$1f,$0e,$0e,$0e,$1f,$0e,$0e,$0e,$12,$0c,$0d,$0c
.db $3a,$c3,$c4,$07,$4c,$a0,$93,$33,$7f,$81,$80,$01,$5e,$8a,$a1,$2b,$76,$8a,$81,$0b,$f3,$2c,$80,$20,$f7,$09,$00,$09,$5e,$0d,$a0,$2d
.db $5c,$c3,$23,$e0,$32,$05,$c9,$cc,$fe,$81,$01,$80,$7a,$51,$85,$d4,$6e,$51,$81,$d0,$cf,$34,$01,$04,$ef,$90,$00,$90,$7a,$b0,$05,$b4
.db $f8,$70,$70,$70,$88,$70,$70,$70,$88,$70,$70,$70,$f8,$00,$70,$70,$f8,$00,$70,$70,$f8,$70,$70,$70,$f8,$70,$70,$70,$48,$30,$b0,$30
.db $15,$08,$0b,$08,$1d,$00,$0b,$08,$1b,$00,$07,$00,$0a,$01,$07,$00,$0a,$01,$07,$00,$0a,$01,$07,$00,$0f,$00,$00,$00,$0a,$01,$07,$00
.db $bd,$02,$c0,$02,$b6,$0b,$d8,$02,$d3,$0c,$ec,$00,$57,$88,$e8,$03,$5e,$80,$e0,$03,$54,$89,$e8,$02,$f4,$09,$08,$02,$5e,$80,$e8,$01
.db $bd,$40,$03,$40,$6d,$d0,$1b,$40,$cb,$30,$37,$00,$ea,$11,$17,$c0,$7a,$01,$07,$c0,$2a,$91,$17,$40,$2f,$90,$10,$40,$7a,$01,$17,$80
.db $a8,$10,$d0,$10,$b8,$00,$d0,$10,$d8,$00,$e0,$00,$50,$80,$e0,$00,$50,$80,$e0,$00,$50,$80,$e0,$00,$f0,$00,$00,$00,$50,$80,$e0,$00
.db $07,$00,$00,$00,$06,$01,$07,$07,$07,$00,$00,$00,$06,$01,$07,$07,$07,$00,$00,$00,$06,$01,$07,$07,$06,$01,$07,$07,$07,$00,$02,$02
.db $ed,$02,$12,$00,$7c,$e3,$e7,$e0,$f3,$00,$0f,$00,$6c,$e0,$e3,$e0,$e3,$00,$00,$00,$60,$e0,$e0,$e0,$60,$e0,$e0,$e0,$60,$a0,$a0,$a0
.db $b7,$40,$48,$00,$3e,$c1,$e7,$07,$cf,$00,$f0,$00,$36,$01,$c7,$07,$c7,$00,$00,$00,$06,$01,$07,$07,$06,$01,$07,$07,$07,$00,$02,$02
.db $e0,$00,$00,$00,$60,$e0,$e0,$e0,$e0,$00,$00,$00,$60,$e0,$e0,$e0,$e0,$00,$00,$00,$60,$e0,$e0,$e0,$60,$e0,$e0,$e0,$60,$a0,$a0,$a0
; Left
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$ff,$00,$6a,$6a,$ff,$00,$ea,$ea,$95,$6a,$6a,$6a
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$07,$00,$00,$00,$fe,$01,$03,$03,$43,$00,$bc,$00,$fc,$00,$bf,$00,$47,$b8,$bf,$00
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$ff,$00,$00,$00,$79,$e7,$ff,$ff,$79,$e7,$ff,$ff,$f9,$67,$7f,$7f,$7f,$00,$80,$00
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$fe,$00,$00,$00,$e7,$9e,$fe,$fe,$e7,$9e,$fe,$fe,$e7,$9e,$fe,$fe,$fe,$00,$00,$00
.db $15,$ea,$ea,$ea,$ff,$6a,$6a,$6a,$ff,$ea,$ea,$ea,$06,$00,$01,$00,$0b,$00,$04,$00,$0b,$00,$06,$00,$14,$03,$0f,$00,$15,$02,$0e,$00
.db $47,$b8,$bf,$00,$fc,$00,$bf,$00,$43,$00,$bc,$00,$ff,$00,$02,$00,$91,$6e,$ee,$00,$fb,$04,$04,$00,$9e,$03,$00,$7b,$0d,$62,$00,$98
.db $60,$1f,$bf,$00,$fe,$01,$01,$00,$75,$22,$88,$aa,$fd,$00,$02,$02,$8f,$f8,$00,$d8,$de,$a0,$01,$81,$fd,$19,$02,$1b,$64,$c5,$1a,$df
.db $32,$c0,$fc,$00,$1c,$e0,$e0,$00,$62,$80,$1c,$1c,$ae,$0c,$50,$5c,$b2,$1c,$40,$5c,$12,$1c,$e0,$f0,$fa,$70,$04,$74,$bc,$48,$00,$48
.db $15,$02,$0e,$00,$14,$03,$0f,$00,$0b,$00,$06,$00,$0b,$00,$04,$00,$06,$00,$01,$00,$ff,$00,$6a,$6a,$ff,$00,$ea,$ea,$95,$6a,$6a,$6a
.db $0d,$62,$00,$98,$9e,$03,$00,$7b,$fb,$04,$04,$00,$91,$6e,$ee,$00,$ff,$00,$02,$00,$43,$00,$bc,$00,$fc,$00,$bf,$00,$47,$b8,$bf,$00
.db $64,$c5,$1a,$df,$fd,$19,$02,$1b,$de,$a0,$01,$81,$8f,$f8,$00,$d8,$fd,$00,$02,$02,$75,$22,$88,$aa,$fe,$01,$01,$00,$60,$1f,$bf,$00
.db $bc,$48,$00,$48,$fa,$70,$04,$74,$12,$1c,$e0,$f0,$b2,$1c,$40,$5c,$ae,$0c,$50,$5c,$62,$80,$1c,$1c,$1c,$e0,$e0,$00,$32,$c0,$fc,$00
.db $15,$ea,$ea,$ea,$ff,$6a,$6a,$6a,$ff,$ea,$ea,$ea,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $47,$b8,$bf,$00,$fc,$00,$bf,$00,$43,$00,$bc,$00,$fe,$01,$03,$03,$07,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $7f,$00,$80,$00,$f9,$67,$7f,$7f,$79,$e7,$ff,$ff,$79,$e7,$ff,$ff,$ff,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $fe,$00,$00,$00,$e7,$9e,$fe,$fe,$e7,$9e,$fe,$fe,$e7,$9e,$fe,$fe,$fe,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00

;--------------------------------------------------------------------------------------------------------
; Spaceship
;--------------------------------------------------------------------------------------------------------
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $03,$00,$00,$00,$06,$02,$01,$00,$05,$00,$03,$00,$0c,$05,$02,$01,$0c,$04,$02,$01,$0f,$06,$02,$01,$1d,$05,$03,$00,$1d,$04,$03,$00
.db $c0,$00,$00,$00,$60,$40,$80,$00,$a0,$00,$c0,$00,$b0,$20,$c0,$00,$30,$20,$40,$80,$f0,$60,$40,$80,$b8,$a0,$c0,$00,$b8,$20,$c0,$00
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $1d,$09,$02,$00,$1f,$08,$04,$00,$18,$0b,$04,$03,$1a,$09,$06,$01,$3a,$19,$06,$01,$3a,$19,$06,$01,$3a,$19,$06,$01,$7a,$19,$06,$01
.db $b8,$90,$40,$00,$f8,$10,$20,$00,$58,$90,$60,$80,$b8,$30,$c0,$00,$9c,$18,$e0,$00,$bc,$38,$c0,$00,$9c,$18,$e0,$00,$be,$38,$c0,$00
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $00,$00,$00,$00,$01,$00,$00,$00,$01,$00,$00,$00,$01,$00,$00,$00,$01,$00,$00,$00,$03,$01,$00,$00,$03,$01,$00,$00,$06,$02,$01,$00
.db $fa,$19,$46,$01,$fa,$99,$46,$01,$fa,$99,$46,$01,$ba,$99,$46,$01,$fa,$99,$46,$01,$ba,$19,$46,$01,$ba,$19,$46,$01,$be,$19,$42,$01
.db $9d,$18,$e2,$00,$bd,$39,$c2,$00,$9d,$19,$e2,$00,$bd,$39,$c2,$00,$9d,$19,$e2,$00,$bd,$38,$c2,$00,$9d,$18,$e2,$00,$bd,$18,$c2,$00
.db $00,$00,$00,$00,$00,$00,$00,$00,$80,$00,$00,$00,$80,$00,$00,$00,$80,$00,$00,$00,$c0,$80,$00,$00,$c0,$80,$00,$00,$60,$40,$80,$00
.db $1c,$04,$03,$00,$79,$18,$07,$00,$c3,$40,$3f,$00,$de,$40,$3f,$00,$c0,$40,$3f,$00,$ff,$7e,$00,$00,$fe,$00,$00,$00,$00,$00,$00,$00
.db $bf,$18,$40,$00,$bf,$14,$40,$00,$9f,$04,$61,$00,$df,$44,$21,$00,$ff,$04,$09,$00,$df,$40,$2b,$60,$7f,$00,$09,$00,$1d,$00,$02,$02
.db $fd,$18,$02,$00,$fd,$28,$02,$00,$7b,$22,$84,$00,$7b,$22,$84,$00,$7f,$20,$90,$00,$bb,$02,$d4,$06,$7e,$00,$90,$00,$b8,$00,$40,$40
.db $38,$20,$c0,$00,$9e,$18,$e0,$00,$c3,$02,$fc,$00,$7b,$02,$fc,$00,$03,$02,$fc,$00,$ff,$7e,$00,$00,$7f,$00,$00,$00,$00,$00,$00,$00

;--------------------------------------------------------------------------------------------------------
; The Luveno
;--------------------------------------------------------------------------------------------------------
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $01,$00,$00,$00,$03,$00,$00,$01,$03,$00,$00,$01,$07,$00,$00,$03,$06,$00,$00,$03,$04,$01,$00,$02,$0c,$01,$00,$06,$0c,$00,$00,$07
.db $00,$00,$00,$00,$80,$00,$00,$00,$80,$00,$00,$00,$c0,$00,$00,$80,$c0,$00,$00,$80,$40,$00,$00,$80,$60,$00,$00,$c0,$60,$00,$00,$c0
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $0c,$01,$00,$06,$1c,$00,$04,$03,$2c,$10,$04,$03,$48,$36,$00,$01,$74,$07,$08,$0c,$1c,$0f,$00,$0c,$1b,$0f,$00,$0b,$18,$0f,$00,$08
.db $60,$00,$00,$c0,$70,$00,$40,$80,$68,$10,$40,$80,$24,$d8,$00,$00,$5c,$c0,$20,$60,$70,$e0,$00,$60,$b0,$e0,$00,$a0,$30,$e0,$00,$20
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$00,$00,$00,$01,$00,$00,$00
.db $28,$1f,$00,$08,$34,$17,$08,$1c,$43,$13,$2c,$2f,$7d,$30,$02,$32,$b5,$64,$0a,$2e,$b5,$64,$0a,$2e,$39,$ef,$00,$29,$32,$ee,$01,$23
.db $28,$f0,$00,$20,$58,$d0,$20,$70,$84,$90,$68,$e8,$7c,$18,$80,$98,$5a,$4c,$a0,$e8,$5a,$4c,$a0,$e8,$39,$ee,$00,$28,$99,$ee,$00,$88
.db $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
.db $03,$01,$00,$01,$05,$03,$00,$01,$09,$07,$00,$01,$31,$0f,$00,$01,$c1,$3f,$00,$01,$81,$7f,$00,$01,$7e,$3e,$01,$39,$3f,$00,$00,$00
.db $3a,$ee,$01,$2b,$3b,$ee,$00,$2a,$3f,$e8,$00,$28,$3b,$ea,$04,$20,$71,$84,$0a,$0a,$fb,$6e,$00,$0a,$db,$4a,$24,$6a,$ee,$0a,$00,$00
.db $b9,$ef,$00,$a9,$b9,$ef,$00,$a9,$f9,$2f,$00,$29,$b9,$af,$40,$09,$1d,$43,$a0,$a1,$bf,$ed,$00,$a1,$b6,$a4,$49,$ad,$ef,$a0,$00,$00
.db $80,$00,$00,$00,$40,$80,$00,$00,$20,$c0,$00,$00,$18,$e0,$00,$00,$06,$f8,$00,$00,$02,$fc,$00,$00,$fe,$f8,$00,$38,$f8,$00,$00,$00

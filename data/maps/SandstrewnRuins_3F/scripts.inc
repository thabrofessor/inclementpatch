SandstrewnRuins_3F_MapScripts::
	.byte 0

SandstrewnRuins_3F_EventScript_SABRINA_5:: @ 81EC1B3
	trainerbattle_single TRAINER_SABRINA_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end
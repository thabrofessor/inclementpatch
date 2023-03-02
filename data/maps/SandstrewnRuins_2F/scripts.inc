SandstrewnRuins_2F_MapScripts::
	.byte 0

SandstrewnRuins_2F_EventScript_AGATHA_5:: @ 81EC1B3
	trainerbattle_single TRAINER_AGATHA_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end
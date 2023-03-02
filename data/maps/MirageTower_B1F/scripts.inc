MirageTower_B1F_MapScripts::
	.byte 0

MirageTower_B1F_EventScript_N_5:: @ 81EC1B3
	trainerbattle_single TRAINER_N_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end
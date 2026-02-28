Grimwood102_MapScripts::
	.byte 0

Grimwood102_EventScript_SILVER_1:: @ 81EC1B3
	trainerbattle_single TRAINER_SILVER_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end
		

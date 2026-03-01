B_MapScripts::
	.byte 0

B_EventScript_Rick:: @ 81EC1B3
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

B2_EventScript_CAMPER_1:: @ 81EC1B3
	trainerbattle_single TRAINER_CAMPER_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

B_EventScript_RANGER3_1:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER3_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end


B_MapScripts::
	.byte 0

B_EventScript_Rick:: @ 81EC1B3
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

B2_EventScript_CAMPER_1:: @ 81EC1B3
	trainerbattle_single TRAINER_CAMPER_1, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

B_EventScript_RANGER3_1:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER3_1, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end


Grimwood102_MapScripts::
	.byte 0

Grimwood102_EventScript_SILVER_1:: @ 81EC1B3
	trainerbattle_single TRAINER_SILVER_1, IncTrainer_Anti_EarlyIntro, IncTrainer_Anti_EarlyDefeat
	msgbox IncTrainer_Anti_EarlyPost, MSGBOX_AUTOCLOSE
	end
		
Grimwood102_EventScript_COOLT12_1:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT12_1, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

Grimwood102_EventScript_ROCKET_101:: @ 81EC1B3
	trainerbattle_single TRAINER_ROCKET_1, IncTrainer_Villain_EarlyIntro, IncTrainer_Villain_EarlyDefeat
	msgbox IncTrainer_Villain_EarlyPost, MSGBOX_AUTOCLOSE
	end
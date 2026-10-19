MirageTower_B1F_MapScripts::
	.byte 0

MirageTower_B1F_EventScript_N_5:: @ 81EC1B3
	trainerbattle_single TRAINER_N_5, IncTrainer_Idealist_MiddleIntro, IncTrainer_Idealist_MiddleDefeat
	msgbox IncTrainer_Idealist_MiddlePost, MSGBOX_AUTOCLOSE
	end
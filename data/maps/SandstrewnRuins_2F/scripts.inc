SandstrewnRuins_2F_MapScripts::
	.byte 0

SandstrewnRuins_2F_EventScript_AGATHA_5:: @ 81EC1B3
	trainerbattle_single TRAINER_AGATHA_5, IncTrainer_Agatha_MiddleIntro, IncTrainer_Agatha_MiddleDefeat
	msgbox IncTrainer_Agatha_MiddlePost, MSGBOX_AUTOCLOSE
	end
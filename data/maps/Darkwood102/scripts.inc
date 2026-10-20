Darkwood102_MapScripts::
	.byte 0

Darkwood102_EventScript_COOLT4_1:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT4_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Darkwood102_EventScript_Bugcatcher_1:: @ 81EC1B3
	trainerbattle_single TRAINER_BUGCATCHER_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Darkwood102_EventScript_Allen:: @ 81EC1E1
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end
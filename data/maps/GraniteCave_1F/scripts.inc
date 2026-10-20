GraniteCave_1F_MapScripts:: @ 822DA5D
	.byte 0

GraniteCave_1F_EventScript_Hiker:: @ 822DA5E
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM05, GraniteCave_1F_EventScript_ReceivedFlash
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
	giveitem ITEM_HM05_FLASH
	setflag FLAG_RECEIVED_HM05
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_EventScript_ReceivedFlash:: @ 822DA8A
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_Text_GetsDarkAheadHereYouGo: @ 822DA94
	.string "Hey, you.\n"
	.string "It gets a little dark ahead.\l"
	.string "It'll be tough trying to explore.\p"
	.string "That guy who came by earlier…\n"
	.string "Steven, I think it was.\p"
	.string "He knew how to use Flash, so he ought\n"
	.string "to be all right, but…\p"
	.string "Well, for us Hikers, helping out those\n"
	.string "that we meet is our motto.\p"
	.string "Here you go, I'll pass this on to you.$"

GraniteCave_1F_Text_ExplainFlash: @ 822DBB7
	.string "Teach that hidden move Flash to\n"
	.string "a Pokémon and use it.\p"
	.string "It lights up even the inky darkness\n"
	.string "of caves.\p"
	.string "But, to use it, you need the Gym Badge\n"
	.string "from Dewford's Pokémon Gym.$"

GraniteCave_1F_EventScript_BASIL_2:: @ 81EC1B3
	trainerbattle_single TRAINER_BASIL_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_RANGER5_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER5_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_BROCK_2:: @ 81EC1B3
	trainerbattle_single TRAINER_BROCK_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_COOLT7_2:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT7_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_ROXAN_2:: @ 81EC1B3
	trainerbattle_single TRAINER_ROXAN_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_GEM_2:: @ 81EC1B3
	trainerbattle_single TRAINER_GEM_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_GLACIA_2A:: @ 81EC1B3
	trainerbattle_single TRAINER_GLACIA_2A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_PALMER_2:: @ 81EC1B3
	trainerbattle_single TRAINER_PALMER_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_JASMINE_2:: @ 81EC1B3
	trainerbattle_single TRAINER_JASMINE_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_RUNE_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RUNE_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_HIKER_2:: @ 81EC1B3
	trainerbattle_single TRAINER_HIKER_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_SAILOR_2:: @ 81EC1B3
	trainerbattle_single TRAINER_SAILOR_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_COLECTOR_2:: @ 81EC1B3
	trainerbattle_single TRAINER_COLECTOR_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_POKEFANF_2:: @ 81EC1B3
	trainerbattle_single TRAINER_POKEFANF_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_1F_EventScript_SandMound::
	lockall
	faceplayer
	special RockSmashWildEncounter
	delay 0x60
	removeobject 17
	releaseall
	end
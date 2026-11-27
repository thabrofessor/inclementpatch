MagmaHideout_1F_MapScripts:: @ 8239880
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_1F_OnTransition
	.byte 0

MagmaHideout_1F_OnTransition: @ 8239886
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
	end

MagmaHideout_1F_EventScript_Grunt1:: @ 823988C
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Intro, MagmaHideout_1F_Text_Grunt1Defeat
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_1F_EventScript_Grunt2:: @ 82398A3
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Intro, MagmaHideout_1F_Text_Grunt2Defeat
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_1F_Text_Grunt1Intro: @ 82398BA
	.string "When Team Magma has roll call, we get\n"
	.string "important guarding assignments in\l"
	.string "the order that we line up.\p"
	.string "That's why I'm stuck off in this corner.\n"
	.string "I'm always late to roll call!$"

MagmaHideout_1F_Text_Grunt1Defeat: @ 8239964
	.string "I'm always late for training sessions,\n"
	.string "too!\p"
	.string "I hate to say it, but I'm wimpy…$"

MagmaHideout_1F_Text_Grunt1PostBattle: @ 82399B1
	.string "Okay, I'll try to put a little more\n"
	.string "effort into things from now on…\p"
	.string "Some of the Pokémon brought in for\n"
	.string "our drills have been acting strangely.\p"
	.string "They barely react to their Trainers,\n"
	.string "and their eyes look so empty…\p"
	.string "The others say I'm imagining things.\n"
	.string "I hope they're right.$"

MagmaHideout_1F_Text_Grunt2Intro: @ 82399F5
	.string "Our leader told us to dig into\n"
	.string "Mt. Chimney, so we dug and dug.\p"
	.string "And in the course of digging, we came\n"
	.string "across something that blew our minds!\p"
	.string "What did we find?\p"
	.string "Fuhahaha!\n"
	.string "I'll tell you if you beat me!$"

MagmaHideout_1F_Text_Grunt2Defeat: @ 8239ABA
	.string "Arrgh!\n"
	.string "Taken down!$"

MagmaHideout_1F_Text_Grunt2PostBattle: @ 8239ACD
	.string "I won't tell you after all.\n"
	.string "You'll find out when you get there!\p"
	.string "We've got new gear and\nsupplies\n"
	.string "coming in from outside the\nTeam.\p"
	.string "The Boss says we should\nfocus on the\n"
	.string "mission and leave the\narrangements\l"
	.string "to the people above us.\p"
	.string "Come to think of it, I saw a visitor\n"
	.string "leave the Boss's office one night.\p"
	.string "No uniform, no Team badge. Even the\n"
	.string "Admins went quiet while he was there.\p"
	.string "I figured he was another supplier,\n"
	.string "but he didn't look much like a\l"
	.string "businessman.\p"
	.string "It'd be better if you saved surprises\n"
	.string "to the end, don't you think?$"


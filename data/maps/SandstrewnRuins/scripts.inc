.set LOCALID_ODD_KEYSTONE, 20

SandstrewnRuins_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SandstrewnRuins_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, SandstrewnRuins_OnTransition
	.byte 0

SandstrewnRuins_OnTransition:
	setflag FLAG_LANDMARK_SANDSTREWN_RUINS
	end

SandstrewnRuins_OnLoad::
	goto_if_set FLAG_CHOSE_ROOT_FOSSIL, SandstrewnRuins_BlockMirageTower
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, SandstrewnRuins_BlockMirageTower
	setflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	end

SandstrewnRuins_BlockMirageTower:: @ Block the entrances to room one
	setmetatile 11, 119, METATILE_MirageTower_Ledge, 1
	setmetatile 12, 119, METATILE_MirageTower_Ledge, 1
	setmetatile 13, 119, METATILE_MirageTower_Ledge, 1
	setmetatile 12, 118, METATILE_MirageTower_Floor, 0
	setmetatile 3, 105, METATILE_MirageTower_Ledge, 1
	setmetatile 4, 105, METATILE_MirageTower_Ledge, 1
	setmetatile 5, 105, METATILE_MirageTower_Ledge, 1
	setmetatile 4, 104, METATILE_MirageTower_Floor, 0
	end

Sandstrewn_Ruins_EventScript_OddKeystone::
	lock
	playfanfare MUS_OBTAIN_ITEM
	msgbox Sandstrewn_Ruins_Text_OddKeystone, MSGBOX_DEFAULT
	waitmessage
	waitfanfare
	additem ITEM_ODD_KEYSTONE, 1
	removeobject LOCALID_ODD_KEYSTONE
	release
	end

Sandstrewn_Ruins_Text_OddKeystone:
	.string "{PLAYER} found one Odd Keystone!\p"
	.string "There's a faint message scratched into\n"
	.string "the back of it…\p"
	.string "“Rou… 108”\n"
	.string "“Bring Poké… … 108”\l"
	.string "“Aband… …ip.”\l"
	.string "“Storage … …sh can.”\p"
	.string "{PLAYER} put away the Odd Keystone\n"
	.string "in the Key Items Pocket.$"

Sandstrewn_Ruins_EventScript_SIDNEY_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_SIDNEY_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_GLACIA_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_GLACIA_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_MAXIE_5:: @ 81EC1B3
	trainerbattle_single TRAINER_MAXIE_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_MAGMA_113:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_113, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_MAGMA_114:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_114, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_MAGMA_115:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_115, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_JUAN_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_JUAN_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_WINONA_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_WINONA_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_GHETSIS_5:: @ 81EC1B3
	trainerbattle_single TRAINER_GHETSIS_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_PLASMA_113:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_113, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_PLASMA_114:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_114, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_PLASMA_115:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_115, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_TUCKER_5:: @ 81EC1B3
	trainerbattle_single TRAINER_TUCKER_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_WILL_5:: @ 81EC1B3
	trainerbattle_single TRAINER_WILL_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_ARCHIE_5:: @ 81EC1B3
	trainerbattle_single TRAINER_ARCHIE_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_AQUA_113:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_113, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_AQUA_114:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_114, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_AQUA_115:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_115, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_SHELLY_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_SHELLY_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_MATT_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_MATT_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_THIEF_5:: @ 81EC1B3
	trainerbattle_single TRAINER_THIEF_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_LYSANDRE_5:: @ 81EC1B3
	trainerbattle_single TRAINER_LYSANDRE_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_BURGLAR_5:: @ 81EC1B3
	trainerbattle_single TRAINER_BURGLAR_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_LUSAMINE_5:: @ 81EC1B3
	trainerbattle_single TRAINER_LUSAMINE_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_TABITHA_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_TABITHA_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Sandstrewn_Ruins_EventScript_COURTNEY_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_COURTNEY_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end
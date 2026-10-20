MirageTower_3F_MapScripts:: @ 823AD2C
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, MirageTower_3F_SetHoleWarp
	.byte 0

MirageTower_3F_SetHoleWarp: @ 823AD3C
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_MIRAGE_TOWER_2F, 255, 0, 0
	end

MirageTower_3F_EventScript_STEVEN_5:: @ 81EC1B3
	trainerbattle_single TRAINER_STEVEN_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

MirageTower_3F_EventScript_DRAKE_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_DRAKE_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

MirageTower_3F_EventScript_FLANNERY_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_FLANNERY_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

MirageTower_3F_EventScript_BLAIN_5:: @ 81EC1B3
	trainerbattle_single TRAINER_BLAIN_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end
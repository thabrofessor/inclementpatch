MirageTower_2F_MapScripts:: @ 823AD11
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, MirageTower_2F_SetHoleWarp
	.byte 0

MirageTower_2F_SetHoleWarp: @ 823AD21
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_MIRAGE_TOWER_1F, 255, 0, 0
	end

MirageTower_2F_EventScript_KAREN_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_KAREN_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

MirageTower_2F_EventScript_LORELIE_5:: @ 81EC1B3
	trainerbattle_single TRAINER_LORELIE_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end


MirageTower_2F_EventScript_JASMINE_5:: @ 81EC1B3
	trainerbattle_single TRAINER_JASMINE_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end


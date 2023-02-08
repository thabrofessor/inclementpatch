GraniteCave_B1F_MapScripts:: @ 822DC5E
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
	.byte 0

GraniteCave_B1F_SetHoleWarp: @ 822DC6E
	setflashradius 4
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_GRANITE_CAVE_B2F, 255, 0, 0
	end

GraniteCave_B1F_EventScript_RANGER6_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER6_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B1F_EventScript_CHUCK_2:: @ 81EC1B3
	trainerbattle_single TRAINER_CHUCK_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B1F_EventScript_COOLT14_2:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT14_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B1F_EventScript_DRAY_2:: @ 81EC1B3
	trainerbattle_single TRAINER_DRAY_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B1F_EventScript_TABITHA_2A:: @ 81EC1B3
	trainerbattle_single TRAINER_TABITHA_2A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B1F_EventScript_ARCH_2:: @ 81EC1B3
	trainerbattle_single TRAINER_ARCH_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B1F_EventScript_PRYCE_2:: @ 81EC1B3
	trainerbattle_single TRAINER_PRYCE_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B1F_EventScript_POKEFANM_2:: @ 81EC1B3
	trainerbattle_single TRAINER_POKEFANM_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B1F_EventScript_GENTALMAN2_2:: @ 81EC1B3
	trainerbattle_single TRAINER_GENTALMAN2_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B1F_EventScript_BATTLEGIRL_2:: @ 81EC1B3
	trainerbattle_single TRAINER_BATTLEGIRL_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B1F_EventScript_COOLTRAINERM_2:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLTRAINERM_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B1F_EventScript_GENTLMAN_2:: @ 81EC1B3
	trainerbattle_single TRAINER_GENTALMAN_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B1F_EventScript_NINJABOY_2:: @ 81EC1B3
	trainerbattle_single TRAINER_NINJABOY_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end
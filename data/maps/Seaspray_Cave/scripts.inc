Seaspray_Cave_MapScripts:: 
	map_script MAP_SCRIPT_ON_TRANSITION, Seaspray_Cave_OnTransition
	.byte 0

Seaspray_Cave_OnTransition::
	setflag FLAG_LANDMARK_SEASPRAY_CAVE
	end

Seaspray_Cave_EventScript_SandMound::
	lockall
	faceplayer
	special RockSmashWildEncounter
	delay 0x60
	removeobject 9
	releaseall
	end

Seaspray_Cave_EventScript_STEVEN_1:: @ 81EC1B3
	trainerbattle_single TRAINER_STEVEN_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end
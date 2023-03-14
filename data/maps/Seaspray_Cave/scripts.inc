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
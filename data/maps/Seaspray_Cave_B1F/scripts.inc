Seaspray_Cave_B1F_MapScripts::
	.byte 0

Seaspray_Cave_B1F_EventScript_SandMound::
	lockall
	faceplayer
	special RockSmashWildEncounter
	delay 0x60
	removeobject 5
	releaseall
	end
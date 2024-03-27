BrinysTunnel_MapScripts::
	.byte 0

Briny_Cave_EventScript_SandMound::
	lockall
	faceplayer
	special RockSmashWildEncounter
	delay 0x60
	removeobject 20
	releaseall
	end
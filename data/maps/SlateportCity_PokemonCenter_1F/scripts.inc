.set LOCALID_NURSE, 1

SlateportCity_PokemonCenter_1F_MapScripts:: @ 820DABF
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SlateportCity_PokemonCenter_1F_OnTransition: @ 820DACA
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

SlateportCity_PokemonCenter_1F_EventScript_Nurse:: @ 820DAD3
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_Sailor:: @ 820DAE1
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_EventScript_Woman:: @ 820DAEA
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon: @ 820DAF3
	.string "Want a tip for battling?\p"
	.string "I'd say it's raising different kinds\n"
	.string "of Pokémon in a balanced manner.\p"
	.string "It's no good to make just one\n"
	.string "Pokémon strong.\p"
	.string "If it has a type disadvantage,\n"
	.string "it might not stand a chance.$"

SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend: @ 820DBBC
	.string "I trade Pokémon with my friends.\p"
	.string "If a traded Pokémon is holding an\n"
	.string "item, it makes me twice as happy!$"


OldaleTown_EventScript_BURGLAR_2:: @ 81EC1B3
	trainerbattle_single TRAINER_BURGLAR_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

OldaleTown_EventScript_JOY_2:: @ 81EC1B3
	trainerbattle_single TRAINER_JOY_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end
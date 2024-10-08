Route114_MapScripts:: @ 81F252F
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
	.byte 0

Route114_OnTransition: @ 81F253F
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	call_if_eq AbnormalWeather_EventScript_HideMapNamePopup
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH
	call_if_eq AbnormalWeather_StartGroudonWeather
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH
	call_if_eq AbnormalWeather_StartGroudonWeather
	end

Route114_OnLoad: @ 81F2561
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute114North
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute114South
	end

Route114_OnFrame: @ 81F2578
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0

Route114_EventScript_Man:: @ 81F2582
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
	random NUM_ROUTE_114_MAN_BERRIES
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_ReceivedBerry:: @ 81F25C7
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_RoarGentleman:: @ 81F25D1
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM05, Route114_EventScript_ReceivedRoar
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM05_ROAR
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM05
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_ReceivedRoar:: @ 81F2608
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_Poochyena:: @ 81F2612
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POOCHYENA, 2
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route114_EventScript_MeteorFallsSign:: @ 81F2625
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
	end

Route114_EventScript_FossilManiacsHouseSign:: @ 81F262E
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
	end

Route114_EventScript_LanettesHouseSign:: @ 81F2637
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
	end

Route114_EventScript_Lenny:: @ 81F2640
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Lucas:: @ 81F2657
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Shane:: @ 81F266E
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Nancy:: @ 81F2685
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Steve:: @ 81F269C
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_RematchSteve
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_RegisterSteve:: @ 81F26C8
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_STEVE_1
	release
	end

Route114_EventScript_RematchSteve:: @ 81F26E7
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Bernie:: @ 81F26FE
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_RematchBernie
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
	release
	end

Route114_EventScript_RegisterBernie:: @ 81F272A
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_BERNIE_1
	release
	end

Route114_EventScript_RematchBernie:: @ 81F2749
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Claude:: @ 81F2760
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Nolan:: @ 81F2777
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Tyra:: @ 81F278E
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Ivy:: @ 81F27A9
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Angelina:: @ 81F27C4
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Charlotte:: @ 81F27DB
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_Kai:: @ 81F27F2
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_Text_AllMyMonDoesIsRoarTakeThis: @ 81F2809
	.string "All my Pokémon does is Roar…\n"
	.string "No one dares to come near me…\p"
	.string "Sigh… If you would, please take\n"
	.string "this TM away…$"

Route114_Text_ExplainRoar: @ 81F2872
	.string "TM05 contains Roar.\n"
	.string "A Roar sends Pokémon scurrying.$"

Route114_Text_Poochyena: @ 81F28A6
	.string "Bow! Bowwow!$"

Route114_Text_MeteorFallsSign: @ 81F28B3
	.string "Meteor Falls\n"
	.string "RUSTBORO CITY THROUGH HERE$"

Route114_Text_FossilManiacsHouseSign: @ 81F28DB
	.string "Fossil Maniac's House\n"
	.string "“Fossils gratefully accepted!”$"

Route114_Text_LanettesHouse: @ 81F2910
	.string "Lanette's House$"

Route114_EventScript_PLASMA_110:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_110, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_PLASMA_111:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_111, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_GALACTIC_110:: @ 81EC1B3
	trainerbattle_single TRAINER_GALACTIC_110, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_GALACTIC_111:: @ 81EC1B3
	trainerbattle_single TRAINER_GALACTIC_111, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_SWIMMERF_4:: @ 81EC1B3
	trainerbattle_single TRAINER_SWIMMERF_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_SWIMMERM_4:: @ 81EC1B3
	trainerbattle_single TRAINER_SWIMMERM_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_COOLT10_4:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT10_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_COOLT11_4:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT11_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_MATT_4A:: @ 81EC1B3
	trainerbattle_single TRAINER_MATT_4A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_SHELLY_4A:: @ 81EC1B3
	trainerbattle_single TRAINER_SHELLY_4A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_DRAKE_4A:: @ 81EC1B3
	trainerbattle_single TRAINER_DRAKE_4A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_WALACE_4:: @ 81EC1B3
	trainerbattle_single TRAINER_WALACE_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_PHOEBE_4A:: @ 81EC1B3
	trainerbattle_single TRAINER_PHOEBE_4A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_LORELIE_4:: @ 81EC1B3
	trainerbattle_single TRAINER_LORELIE_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_MISTY_4:: @ 81EC1B3
	trainerbattle_single TRAINER_MISTY_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_TATELIZZ_4A:: @ 81EC1B3
	trainerbattle_single TRAINER_TATELIZZ_4A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_TUBERM_4:: @ 81EC1B3
	trainerbattle_single TRAINER_TUBERM_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_TUBERF_4:: @ 81EC1B3
	trainerbattle_single TRAINER_TUBERF_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_SISBRO_4:: @ 81EC1B3
	trainerbattle_single TRAINER_SISBRO_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_SWIMMINGTRIF_4:: @ 81EC1B3
	trainerbattle_single TRAINER_SWIMMINGTRIF_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_SWIMMINGTRIM_4:: @ 81EC1B3
	trainerbattle_single TRAINER_SWIMMINGTRIM_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_FISHERMAN_4:: @ 81EC1B3
	trainerbattle_single TRAINER_FISHERMAN_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_26:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_26, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_27:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_27, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_28:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_28, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_29:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_29, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_30:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_30, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_31:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_31, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_32:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_32, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_33:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_33, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_34:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_34, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_35:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_35, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_36:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_36, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_37:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_37, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_38:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_38, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_39:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_39, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_40:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_40, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_41:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_41, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_42:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_42, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_43:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_43, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_44:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_44, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_45:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_45, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_46:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_46, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_47:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_47, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_48:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_48, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_49:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_49, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

Route114_EventScript_AQUA_50:: @ 81EC1B3
	trainerbattle_single TRAINER_AQUA_50, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

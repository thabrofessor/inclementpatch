DewfordMeadow_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordMeadow_OnTransition
	.byte 0

DewfordMeadow_OnTransition:
	setflag FLAG_LANDMARK_DEWFORD_MEADOW
	end

DewfordMeadow_EventScript_ManorSign::
	msgbox DewfordMeadow_Text_ManorSign, MSGBOX_SIGN
	end

DewfordMeadow_Text_ManorSign:
	.string "Dewford Manor: Once a Sea Captain's\n"
	.string "escape, now home only to Pokémon.$"

DewfordMeadow_EventScript_LAVENDER_2:: @ 81EC1B3
	trainerbattle_single TRAINER_LAVENDER_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_COOLT1_2:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT1_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_COOLT8_2:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT8_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_RANGER1_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER1_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_BUGSY_2:: @ 81EC1B3
	trainerbattle_single TRAINER_BUGSY_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_CHAD_2:: @ 81EC1B3
	trainerbattle_single TRAINER_CHAD_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_FALKNER_2:: @ 81EC1B3
	trainerbattle_single TRAINER_FALKNER_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_DAISY_2:: @ 81EC1B3
	trainerbattle_single TRAINER_DAISY_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_SIDNEY_2A:: @ 81EC1B3
	trainerbattle_single TRAINER_SIDNEY_2A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_RUBY_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RUBY_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_SAPPHIRE_2:: @ 81EC1B3
	trainerbattle_single TRAINER_SAPPHIRE_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_CRYSTAL_2:: @ 81EC1B3
	trainerbattle_single TRAINER_CRYSTAL_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_ANABEL_2:: @ 81EC1B3
	trainerbattle_single TRAINER_ANABEL_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_GRETA_2:: @ 81EC1B3
	trainerbattle_single TRAINER_GRETA_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_CILANTRO_2:: @ 81EC1B3
	trainerbattle_single TRAINER_CILANTRO_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_MINT_2:: @ 81EC1B3
	trainerbattle_single TRAINER_MINT_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_RANGER2_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER2_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_RANGER3_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER3_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_JANINE_2:: @ 81EC1B3
	trainerbattle_single TRAINER_JANINE_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_KOGA_2:: @ 81EC1B3
	trainerbattle_single TRAINER_KOGA_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_ERICA_2:: @ 81EC1B3
	trainerbattle_single TRAINER_ERICA_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_ARGENTA_2:: @ 81EC1B3
	trainerbattle_single TRAINER_ARGENTA_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_WILL_2:: @ 81EC1B3
	trainerbattle_single TRAINER_WILL_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_THORTON_2:: @ 81EC1B3
	trainerbattle_single TRAINER_THORTON_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_HEXMANIAK_2:: @ 81EC1B3
	trainerbattle_single TRAINER_HEXMANIAK_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_BUGMANIAC_2:: @ 81EC1B3
	trainerbattle_single TRAINER_BUGMANIAC_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PICNICER_2:: @ 81EC1B3
	trainerbattle_single TRAINER_PICNICER_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_KINDLER_2:: @ 81EC1B3
	trainerbattle_single TRAINER_KINDLER_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_HISTORY_2:: @ 81EC1B3
	trainerbattle_single TRAINER_HISTORY_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_FUJI_2:: @ 81EC1B3
	trainerbattle_single TRAINER_FUJI_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_SAGE_2:: @ 81EC1B3
	trainerbattle_single TRAINER_SAGE_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_RANGER10_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER10_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_COOLT5_2:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT5_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_COOLT12_2:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT12_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_N_2:: @ 81EC1B3
	trainerbattle_single TRAINER_N_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_1:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_2:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_3:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_3, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_4:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_5:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_6:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_6, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_7:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_7, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_8:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_8, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_9:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_9, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_10:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_10, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_11:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_11, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_12:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_12, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_13:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_13, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_14:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_14, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_15:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_15, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_16:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_16, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_17:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_17, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_18:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_18, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_19:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_19, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_20:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_20, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_21:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_21, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_22:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_22, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_23:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_23, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_24:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_24, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_25:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_25, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_CYRUS_2:: @ 81EC1B3
	trainerbattle_single TRAINER_CYRUS_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_GHETSIS_2:: @ 81EC1B3
	trainerbattle_single TRAINER_GHETSIS_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_GALACTIC_104:: @ 81EC1B3
	trainerbattle_single TRAINER_GALACTIC_104, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_GALACTIC_105:: @ 81EC1B3
	trainerbattle_single TRAINER_GALACTIC_105, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

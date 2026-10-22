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
	trainerbattle_single TRAINER_LAVENDER_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_COOLT1_2:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT1_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_COOLT8_2:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT8_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_RANGER1_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER1_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_BUGSY_2:: @ 81EC1B3
	trainerbattle_single TRAINER_BUGSY_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_CHAD_2:: @ 81EC1B3
	trainerbattle_single TRAINER_CHAD_2, IncTrainer_Chad_EarlyIntro, IncTrainer_Chad_EarlyDefeat
	msgbox IncTrainer_Chad_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_FALKNER_2:: @ 81EC1B3
	trainerbattle_single TRAINER_FALKNER_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_DAISY_2:: @ 81EC1B3
	trainerbattle_single TRAINER_DAISY_2, IncTrainer_Flirty_EarlyIntro, IncTrainer_Flirty_EarlyDefeat
	msgbox IncTrainer_Flirty_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_SIDNEY_2A:: @ 81EC1B3
	trainerbattle_single TRAINER_SIDNEY_2A, IncTrainer_Government_EarlyIntro, IncTrainer_Government_EarlyDefeat
	msgbox IncTrainer_Government_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_RUBY_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RUBY_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_SAPPHIRE_2:: @ 81EC1B3
	trainerbattle_single TRAINER_SAPPHIRE_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_CRYSTAL_2:: @ 81EC1B3
	trainerbattle_single TRAINER_CRYSTAL_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_ANABEL_2:: @ 81EC1B3
	trainerbattle_single TRAINER_ANABEL_2, IncTrainer_Investigator_EarlyIntro, IncTrainer_Investigator_EarlyDefeat
	msgbox IncTrainer_Investigator_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_GRETA_2:: @ 81EC1B3
	trainerbattle_single TRAINER_GRETA_2, IncTrainer_Investigator_EarlyIntro, IncTrainer_Investigator_EarlyDefeat
	msgbox IncTrainer_Investigator_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_CILANTRO_2:: @ 81EC1B3
	trainerbattle_single TRAINER_CILANTRO_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_MINT_2:: @ 81EC1B3
	trainerbattle_single TRAINER_MINT_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_RANGER2_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER2_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_RANGER3_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER3_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_JANINE_2:: @ 81EC1B3
	trainerbattle_single TRAINER_JANINE_2, IncTrainer_Flirty_EarlyIntro, IncTrainer_Flirty_EarlyDefeat
	msgbox IncTrainer_Flirty_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_KOGA_2:: @ 81EC1B3
	trainerbattle_single TRAINER_KOGA_2, IncTrainer_Investigator_EarlyIntro, IncTrainer_Investigator_EarlyDefeat
	msgbox IncTrainer_Investigator_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_ERICA_2:: @ 81EC1B3
	trainerbattle_single TRAINER_ERICA_2, IncTrainer_Flirty_EarlyIntro, IncTrainer_Flirty_EarlyDefeat
	msgbox IncTrainer_Flirty_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_ARGENTA_2:: @ 81EC1B3
	trainerbattle_single TRAINER_ARGENTA_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_WILL_2:: @ 81EC1B3
	trainerbattle_single TRAINER_WILL_2, IncTrainer_Government_EarlyIntro, IncTrainer_Government_EarlyDefeat
	msgbox IncTrainer_Government_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_THORTON_2:: @ 81EC1B3
	trainerbattle_single TRAINER_THORTON_2, IncTrainer_Government_EarlyIntro, IncTrainer_Government_EarlyDefeat
	msgbox IncTrainer_Government_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_HEXMANIAK_2:: @ 81EC1B3
	trainerbattle_single TRAINER_HEXMANIAK_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_BUGMANIAC_2:: @ 81EC1B3
	trainerbattle_single TRAINER_BUGMANIAC_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PICNICER_2:: @ 81EC1B3
	trainerbattle_single TRAINER_PICNICER_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_KINDLER_2:: @ 81EC1B3
	trainerbattle_single TRAINER_KINDLER_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_HISTORY_2:: @ 81EC1B3
	trainerbattle_single TRAINER_HISTORY_2, IncTrainer_Investigator_EarlyIntro, IncTrainer_Investigator_EarlyDefeat
	msgbox IncTrainer_Investigator_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_FUJI_2:: @ 81EC1B3
	trainerbattle_single TRAINER_FUJI_2, IncTrainer_Resistance_EarlyIntro, IncTrainer_Resistance_EarlyDefeat
	msgbox IncTrainer_Resistance_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_SAGE_2:: @ 81EC1B3
	trainerbattle_single TRAINER_SAGE_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_RANGER10_2:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER10_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_COOLT5_2:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT5_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_COOLT12_2:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT12_2, IncTrainer_Ally_EarlyIntro, IncTrainer_Ally_EarlyDefeat
	msgbox IncTrainer_Ally_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_N_2:: @ 81EC1B3
	trainerbattle_single TRAINER_N_2, IncTrainer_Idealist_EarlyIntro, IncTrainer_Idealist_EarlyDefeat
	msgbox IncTrainer_Idealist_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_1:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_1, IncTrainer_Villain_EarlyIntro, IncTrainer_Villain_EarlyDefeat
	msgbox IncTrainer_Villain_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_2:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_2, IncTrainer_Villain_EarlyIntro, IncTrainer_Villain_EarlyDefeat
	msgbox IncTrainer_Villain_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_3:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_3, IncTrainer_Villain_EarlyIntro, IncTrainer_Villain_EarlyDefeat
	msgbox IncTrainer_Villain_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_4:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_4, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_5:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_5, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_6:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_6, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_7:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_7, IncTrainer_Villain_LateIntro, IncTrainer_Villain_LateDefeat
	msgbox IncTrainer_Villain_LatePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_8:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_8, IncTrainer_Villain_LateIntro, IncTrainer_Villain_LateDefeat
	msgbox IncTrainer_Villain_LatePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_9:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_9, IncTrainer_Villain_LateIntro, IncTrainer_Villain_LateDefeat
	msgbox IncTrainer_Villain_LatePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_10:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_10, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_11:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_11, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_12:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_12, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_13:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_13, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_14:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_14, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_15:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_15, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_16:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_16, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_17:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_17, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_18:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_18, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_19:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_19, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_20:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_20, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_21:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_21, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_22:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_22, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_23:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_23, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_24:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_24, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_25:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_25, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_CYRUS_2:: @ 81EC1B3
	trainerbattle_single TRAINER_CYRUS_2, IncTrainer_Villain_EarlyIntro, IncTrainer_Villain_EarlyDefeat
	msgbox IncTrainer_Villain_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_GHETSIS_2:: @ 81EC1B3
	trainerbattle_single TRAINER_GHETSIS_2, IncTrainer_Villain_EarlyIntro, IncTrainer_Villain_EarlyDefeat
	msgbox IncTrainer_Villain_EarlyPost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_GALACTIC_104:: @ 81EC1B3
	trainerbattle_single TRAINER_GALACTIC_104, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_GALACTIC_105:: @ 81EC1B3
	trainerbattle_single TRAINER_GALACTIC_105, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_104:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_104, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

DewfordMeadow_EventScript_PLASMA_105:: @ 81EC1B3
	trainerbattle_single TRAINER_PLASMA_105, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end
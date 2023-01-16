Route102_MapScripts:: @ 81EC0E0
	.byte 0

Route102_EventScript_LittleBoy:: @ 81EC0E1
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale:: @ 81EC0EA
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg:: @ 81EC0F3
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy:: @ 81EC0FC
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_EventScript_Calvin:: @ 81EC105
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq Route102_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_CALVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	compare VAR_RESULT, FALSE
	goto_if_eq Route102_EventScript_CalvinTryRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle:: @ 81EC146
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
	release
	end

Route102_EventScript_CalvinRegisterMatchCall:: @ 81EC157
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinTryRegister:: @ 81EC170
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegister:: @ 81EC183
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinRematch:: @ 81EC19C
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Calvin_2:: @ 81EC1B3
	trainerbattle_single TRAINER_CALVIN_2, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Rick:: @ 81EC1B3
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Tiana:: @ 81EC1CA
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen:: @ 81EC1E1
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_Text_WatchMeCatchPokemon: @ 81EC1F8
	.string "Wally: {PLAYER}…\n"
	.string "Pokémon hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt: @ 81EC271
	.string "Wally: I did it… It's my…\n"
	.string "My Pokémon!$"

Route102_Text_LetsGoBack: @ 81EC297
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the Gym!$"

Route102_Text_ImNotVeryTall: @ 81EC2C0
	.string "I'm… not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon: @ 81EC32E
	.string "I'm going to catch a whole bunch of\n"
	.string "Pokémon!$"

Route102_Text_RouteSignOldale: @ 81EC35B
	.string "Route 102\n"
	.string "{RIGHT_ARROW} Oldale Town$"

Route102_Text_RouteSignPetalburg: @ 81EC373
	.string "Route 102\n"
	.string "{LEFT_ARROW} Petalburg City$"
	
Route102_EventScript_Bro_1:: @ 81EC1B3
	trainerbattle_single TRAINER_BRO_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	
Route102_EventScript_Cole_1:: @ 81EC1B3
	trainerbattle_single TRAINER_COLE_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_Chad_1:: @ 81EC1B3
	trainerbattle_single TRAINER_CHAD_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_N_1:: @ 81EC1B3
	trainerbattle_single TRAINER_N_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_Bugcatcher_1:: @ 81EC1B3
	trainerbattle_single TRAINER_BUGCATCHER_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_Youngster_1:: @ 81EC1B3
	trainerbattle_single TRAINER_YOUNGSTER_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_CAMPER_1:: @ 81EC1B3
	trainerbattle_single TRAINER_CAMPER_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_SCHOOLKIDM_1:: @ 81EC1B3
	trainerbattle_single TRAINER_SCHOOLKIDM_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_COOLT12_1:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT12_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_RANGER9_1:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER9_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_BASIL_1:: @ 81EC1B3
	trainerbattle_single TRAINER_BASIL_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_CAM_1:: @ 81EC1B3
	trainerbattle_single TRAINER_CAM_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_DAISY_1:: @ 81EC1B3
	trainerbattle_single TRAINER_DAISY_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_LASS_1:: @ 81EC1B3
	trainerbattle_single TRAINER_LASS_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_SCHOOLKIDF_1:: @ 81EC1B3
	trainerbattle_single TRAINER_SCHOOLKIDF_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_COOLT4_1:: @ 81EC1B3
	trainerbattle_single TRAINER_COOLT4_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_RANGER3_1:: @ 81EC1B3
	trainerbattle_single TRAINER_RANGER3_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_DORKLY_1:: @ 81EC1B3
	trainerbattle_single TRAINER_DORKLY_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_ARROMALADY_1:: @ 81EC1B3
	trainerbattle_single TRAINER_ARROMALADY_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_SILVER_1:: @ 81EC1B3
	trainerbattle_single TRAINER_SILVER_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_RICHBOY_1:: @ 81EC1B3
	trainerbattle_single TRAINER_RICHBOY_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
		
Route102_EventScript_TWINS_1:: @ 81EC1B3
	trainerbattle_single TRAINER_TWINS_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
			
Route102_EventScript_ROCKET_1:: @ 81EC1B3
	trainerbattle_single TRAINER_ROCKET_1, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE

	end

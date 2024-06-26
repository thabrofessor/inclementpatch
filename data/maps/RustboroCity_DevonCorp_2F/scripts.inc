.set LOCALID_FOSSIL_SCIENTIST, 5

RustboroCity_DevonCorp_2F_MapScripts:: @ 8211857
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
	.byte 0

RustboroCity_DevonCorp_2F_OnTransition: @ 821185D
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	end

RustboroCity_DevonCorp_2F_EventScript_SetFossilReady:: @ 8211869
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
	return

RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist:: @ 821186F
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_BallScientist:: @ 8211886
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls:: @ 82118A6
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_PokenavScientist:: @ 82118B0
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_HasPokenav
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_HasPokenav:: @ 82118D0
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist:: @ 82118DA
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist:: @ 82118F1
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 2
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_StillRegenerating
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
	specialvar VAR_RESULT, DoesPlayerHaveFossil
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeFossil
	release
	end
	
RustboroCity_DevonCorp_2F_EventScript_NoticeFossil::
	closemessage
	playse SE_PIN
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
	waitmovement 0
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
	msgbox RustboroCity_DevonCorp_2F_Text_FossilsPickOne, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special Bag_ChooseItem
	waitstate
	specialvar VAR_RESULT, IsItemFossil
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ThatsNotAFossil
	special FossilToSpecies
	bufferitemname 0, VAR_ITEM_ID
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
	removeitem VAR_ITEM_ID
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
	copyvar VAR_WHICH_FOSSIL_REVIVED, VAR_ITEM_ID
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil:: @ 82119EF
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_StillRegenerating:: @ 82119F9
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ThatsNotAFossil::
	msgbox RustboroCity_DevonCorp_2F_Text_ThatsNotAFossil, MSGBOX_DEFAULT
	release
	end

@ VAR_0x8006 is Pokemon species to restore
@ VAR_0x8008 is the fossil that was chosen for restoration
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
	copyvar VAR_0x8008, VAR_WHICH_FOSSIL_REVIVED
	special FossilToSpecies
	bufferspeciesname 1, VAR_0x8006
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
	copyvar VAR_TEMP_1, VAR_0x8006
	special GetStaticEncounterLevel
	givemon VAR_0x8006, VAR_0x800A, ITEM_NONE
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveFossilParty
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveFossilPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

RustboroCity_DevonCorp_2F_EventScript_ReceiveFossilParty:: @ 8211A6E
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FinishReceivingFossil
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingFossil
	end

RustboroCity_DevonCorp_2F_EventScript_ReceiveFossilPC:: @ 8211A96
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_TransferFossilToPC
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_TransferFossilToPC
	end

RustboroCity_DevonCorp_2F_EventScript_TransferFossilToPC:: @ 8211AB9
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingFossil
	end

RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilFanfare:: @ 8211AC4
	bufferspeciesname 1, VAR_0x8006
	playfanfare MUS_OBTAIN_ITEM
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
	waitmessage
	waitfanfare
	bufferspeciesname 0, VAR_0x8006
	return

RustboroCity_DevonCorp_2F_EventScript_FinishReceivingFossil:: @ 8211AD7
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
	release
	end

RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist:: @ 8211BCF
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	compare VAR_RUSTBORO_CITY_STATE, 7
	goto_if_ge RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_WorkOnNext:: @ 8211BF1
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon: @ 8211BFB
	.string "We're developing a device for talking\n"
	.string "with Pokémon.\p"
	.string "But we haven't had much success…$"

RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls: @ 8211C50
	.string "I'm developing new kinds of\n"
	.string "Poké Balls…\p"
	.string "But I haven't made much headway…$"

RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls: @ 8211C99
	.string "We finally made new kinds of\n"
	.string "Poké Balls!\p"
	.string "The Repeat Ball makes it easier to\n"
	.string "catch Pokémon you've caught before.\p"
	.string "The Timer Ball gets better at catching\n"
	.string "Pokémon the longer a battle runs.\p"
	.string "Both are proudly developed by\n"
	.string "the Devon Corporation.\p"
	.string "Please give them a try!$"

RustboroCity_DevonCorp_2F_Text_IMadePokenav: @ 8211D9F
	.string "I made the PokéNav!\p"
	.string "As an engineer, I feel blessed to have\n"
	.string "made something so great!$"

RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav: @ 8211DF3
	.string "Oh, wow!\n"
	.string "That's a PokéNav!\p"
	.string "It came about as a result of our\n"
	.string "President's desire to learn about\l"
	.string "the feelings of Pokémon.\p"
	.string "Would you like me to describe its\n"
	.string "features in detail?\p"
	.string "No, no. I think you'll find out just by\n"
	.string "trying the PokéNav out.$"

RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams: @ 8211EE0
	.string "I'm trying to develop a device that\n"
	.string "visually reproduces the dreams of\l"
	.string "Pokémon…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils: @ 8211F48
	.string "I've been trying to develop a device\n"
	.string "that resurrects Pokémon from fossils…\p"
	.string "And, it's working!$"

RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife: @ 8211FA6
	.string "Wait! That thing you have there…\n"
	.string "Is that a Pokémon fossil?\p"
	.string "Would you like to bring that Pokémon\n"
	.string "back to life?\p"
	.string "I can with my newly developed\n"
	.string "Fossil Regenerator.$"

RustboroCity_DevonCorp_2F_Text_OhIsThatSo: @ 8212046
	.string "Oh, is that so?\p"
	.string "Devon's technological expertise\n"
	.string "is outstanding, I tell you.$"

RustboroCity_DevonCorp_2F_Text_FossilsPickOne: @ 8212092
	.string "Which fossil would you like to\n"
	.string "regenerate?$"

RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher: @ 8212153
	.string "Excellent!\n"
	.string "Let's do this right away.\p"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
	.string "the Devon Researcher.$"

RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime: @ 82121A2
	.string "The Fossil Regenerator, which I made,\n"
	.string "is incredible.\p"
	.string "But it has one drawback--it takes\n"
	.string "a long time to work.\p"
	.string "So, uh… How about you go for a stroll\n"
	.string "and look around for a while?$"

RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife: @ 8212251
	.string "Thanks for waiting!\p"
	.string "Your fossilized Pokémon has been\n"
	.string "brought back to life!\p"
	.string "The fossil was an ancient Pokémon.\n"
	.string "{STR_VAR_2}, it was!$"

RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher: @ 82122CB
	.string "{PLAYER} received {STR_VAR_2} from\n"
	.string "the Devon Researcher.$"

@ Unused
RustboroCity_DevonCorp_2F_Text_TooManyPokemon: @ 82122F5
	.string "Uh-oh, you've got too many Pokémon.\n"
	.string "You have no room for this one.$"

RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature: @ 8212338
	.string "I'm trying to develop a new feature\n"
	.string "for the PokéNav…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext: @ 8212386
	.string "Well, now what shall I work on\n"
	.string "developing next?\p"
	.string "Our company allows us to make our\n"
	.string "inspirations into reality.\p"
	.string "One couldn't ask for a better\n"
	.string "environment as an engineer.$"

RustboroCity_DevonCorp_2F_Text_ThatsNotAFossil:
	.string "Come now, that's not a fossil!$"

RustboroCity_DevonCorp_2F_EventScript_OAK_2:: @ 81EC1B3
	trainerbattle_single TRAINER_OAK_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_DevonCorp_2F_EventScript_BIRCH_2:: @ 81EC1B3
	trainerbattle_single TRAINER_BIRCH_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_DevonCorp_2F_EventScript_BILL_2:: @ 81EC1B3
	trainerbattle_single TRAINER_BILL_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_DevonCorp_2F_EventScript_GIOVANNI_2:: @ 81EC1B3
	trainerbattle_single TRAINER_GIOVANNI_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_DevonCorp_2F_EventScript_ROCKET_104:: @ 81EC1B3
	trainerbattle_single TRAINER_ROCKET_104, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_DevonCorp_2F_EventScript_ROCKET_105:: @ 81EC1B3
	trainerbattle_single TRAINER_ROCKET_105, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end
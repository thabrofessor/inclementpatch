@ Sailing to and from Dewford uses local IDs from different maps
@ e.g. Route 104's sail to Dewford script references local IDs from Dewford's map
@ All of these local IDs are labeled here
.equ LOCALID_BRINEY_DEWFORD, 2
.equ LOCALID_BOAT_DEWFORD, 4

.equ LOCALID_BOAT_R109, 1 
.equ LOCALID_BRINEY_R109, 2

.equ LOCALID_BOAT_R104, 7
.equ LOCALID_BRINEY_R104, 8

DewfordTown_MapScripts:: @ 81E9507
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
	.byte 0

DewfordTown_OnTransition: @ 81E950D
	setflag FLAG_VISITED_DEWFORD_TOWN
	end

DewfordTown_EventScript_Briney:: @ 81E9511
	lock
	faceplayer
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
	message DewfordTown_Text_WhereAreWeBound
	waitmessage
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
	switch VAR_RESULT
	case 0, DewfordTown_EventScript_ChoosePetalburg
	case 1, DewfordTown_EventScript_ChooseSlateport
	case 2, DewfordTown_EventScript_CancelSailSelect
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
	end

DewfordTown_EventScript_ChoosePetalburg:: @ 81E955A
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToPetalburg
	release
	end

DewfordTown_EventScript_ChooseSlateport:: @ 81E956A
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToSlateport
	release
	end

DewfordTown_EventScript_CancelSailSelect:: @ 81E957A
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
	closemessage
	release
	end

DewfordTown_EventScript_ReturnToPetalburgPrompt:: @ 81E9585
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_SailBackToPetalburg
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_SailBackToPetalburg:: @ 81E95A2
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToPetalburg
	end

DewfordTown_EventScript_Woman:: @ 81E95B1
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
	end

DewfordTown_EventScript_TownSign:: @ 81E95BA
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_GymSign:: @ 81E95C3
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_HallSign:: @ 81E95CC
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_OldRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_DEWFORD_EVIOLITE, DewfordTown_EventScript_ReceivedEviolite
	msgbox DewfordTown_Text_FishedUpEviolite
	giveitem ITEM_EVIOLITE
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_BagIsFull
	msgbox DewfordTown_Text_ReceivedEviolite, MSGBOX_DEFAULT
	setflag FLAG_DEWFORD_EVIOLITE
	release
	end

DewfordTown_EventScript_ReceivedEviolite::
	msgbox DewfordTown_Text_ReceivedEviolite, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_SailToPetalburg:: @ 81E9660
	call EventScript_BackupMrBrineyLocation
	setobjectpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	setobjectpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	call Common_EventScript_StopBrineysBoatMusic
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
	resetobjectpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 255, 5, 4
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	waitstate
	release
	end

DewfordTown_EventScript_SailToSlateport:: @ 81E96E7
	call EventScript_BackupMrBrineyLocation
	setobjectpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	setobjectpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
	waitmovement 0
	call Common_EventScript_StopBrineysBoatMusic
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
	waitmovement 0
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
	addobject LOCALID_BRINEY_R109
	setobjectpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
	waitmovement 0
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	addobject LOCALID_BOAT_R109
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
	closemessage
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	resetobjectpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	resetobjectpriority LOCALID_BRINEY_R109, MAP_ROUTE109
	copyobjectxytoperm LOCALID_BRINEY_R109
	release
	end

DewfordTown_EventScript_LandedSlateportDeliverGoods:: @ 81E9790
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
	return

DewfordTown_EventScript_LandedSlateport:: @ 81E9799
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
	return

DewfordTown_EventScript_GymGuide::
	msgbox DewfordTown_Text_BrawlyInSlateport, MSGBOX_NPC
	end

DewfordTown_Movement_SailToPetalburg: @ 81E97A2
	walk_up
	walk_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Movement_SailToSlateport: @ 81E9865
	walk_right
	walk_fast_right
	walk_fast_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

DewfordTown_Movement_PlayerBoardBoat: @ 81E9911
	walk_right
	walk_up
	step_end

DewfordTown_Movement_ExitBoatPetalburg: @ 81E9914
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Movement_ExitBoatSlateport: @ 81E9918
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_down
	step_end

DewfordTown_Movement_BrineyBoardBoat: @ 81E991D
	walk_up
	step_end

DewfordTown_Movement_BrineyExitBoat: @ 81E991F
	walk_up
	walk_up
	step_end

DewfordTown_EventScript_TrendyPhraseBoy:: @ 81E9922
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_ConfirmTrendyPhrase
	compare VAR_RESULT, NO
	goto_if_eq DewfordTown_EventScript_RejectTrendyPhrase
	end

DewfordTown_EventScript_ConfirmTrendyPhrase:: @ 81E9948
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_RejectTrendyPhrase:: @ 81E9952
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_EventScript_GiveNewTrendyPhrase
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_EventScript_CancelNewTrendyPhrase
	end

DewfordTown_EventScript_GiveNewTrendyPhrase:: @ 81E997D
	incrementgamestat GAME_STAT_STARTED_TRENDS
	compare VAR_0x8004, FALSE
	goto_if_eq DewfordTown_EventScript_PhraseNotTrendyEnough
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_CancelNewTrendyPhrase:: @ 81E9994
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_PhraseNotTrendyEnough:: @ 81E999E
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
	release
	end

DewfordTown_Text_TinyIslandCommunity: @ 81E99A8
	.string "Dewford is a tiny island community.\n"
	.string "If something gets trendy here,\l"
	.string "everyone picks up on it right away.$"

DewfordTown_Text_TownSign: @ 81E9A0F
	.string "Dewford Town\n"
	.string "“A tiny island in the blue sea.”$"

DewfordTown_Text_GymSign: @ 81E9A3D
	.string "Dewford Town Pokémon Gym\n"
	.string "Leader: Brawly\l"
	.string "“A big wave in fighting!”$"

DewfordTown_Text_HallSign: @ 81E9A7F
	.string "Dewford Hall\n"
	.string "“Everyone's information exchange!”$"

Route104_Text_LandedInDewfordDeliverLetter: @ 81E9AAF
	.string "Mr. Briney: Ahoy!\n"
	.string "We've hit land in Dewford.\p"
	.string "I suppose you're off to deliver that\n"
	.string "Letter to, who was it now, Steven!$"

DewfordTown_Text_SetSailBackToPetalburg: @ 81E9B24
	.string "Mr. Briney: Have you delivered your\n"
	.string "Letter?\p"
	.string "Or were you meaning to sail back to\n"
	.string "Petalburg?$"

DewfordTown_Text_PetalburgWereSettingSail2: @ 81E9B7F
	.string "Mr. Briney: Petalburg it is, then!\p"
	.string "Anchors aweigh!\n"
	.string "Peeko, we're setting sail, my darling!$"

DewfordTown_Text_GoDeliverIllBeWaiting: @ 81E9BD9
	.string "Mr. Briney: Then you go on and deliver\n"
	.string "the Letter. I'll be waiting.$"

DewfordTown_Text_BrineyLandedInDewford: @ 81E9C1D
	.string "Mr. Briney: Ahoy!\n"
	.string "We've hit land in Dewford!\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail again!$"

DewfordTown_Text_WhereAreWeBound: @ 81E9C8A
	.string "Mr. Briney: Ahoy!\n"
	.string "For you, I'll go out to sea anytime!\p"
	.string "Now, my friend, where are we bound?$"

DewfordTown_Text_PetalburgWereSettingSail: @ 81E9CE5
	.string "Mr. Briney: Petalburg, is it?\p"
	.string "Anchors aweigh!\n"
	.string "Peeko, we're setting sail, my darling!$"

DewfordTown_Text_SlateportWereSettingSail: @ 81E9D3A
	.string "Mr. Briney: Slateport, is it?\p"
	.string "Anchors aweigh!\n"
	.string "Peeko, we're setting sail, my darling!$"

DewfordTown_Text_JustTellMeWhenYouNeedToSetSail: @ 81E9D8F
	.string "Mr. Briney: You just tell me whenever\n"
	.string "you need to set sail again!$"

DewfordTown_Text_XIsTheBiggestHappeningThingRight: @ 81EA136
	.string "I like what's hip, happening, and trendy.\n"
	.string "I'm always checking it out.\p"
	.string "Listen, have you heard about this new\n"
	.string "“{STR_VAR_1}”?\p"
	.string "That's right!\n"
	.string "Of course you know!\p"
	.string "I mean, sheesh,\n"
	.string "“{STR_VAR_1}”…\l"
	.string "It's the hottest thing in cool!\p"
	.string "Wherever you're from,\n"
	.string "“{STR_VAR_1}”\l"
	.string "is the biggest happening thing, right?$"

DewfordTown_Text_TellMeWhatsNewAndIn: @ 81EA242
	.string "Hunh?\n"
	.string "It's not the hip and happening thing?\p"
	.string "Well, hey, you have to tell me,\n"
	.string "what's new and what's “in”?$"

DewfordTown_Text_OfCourseIKnowAboutThat: @ 81EA2AA
	.string "Hunh?\n"
	.string "“{STR_VAR_2}”?\p"
	.string "… …\p"
	.string "…Uh… Yeah! That's right!\n"
	.string "Yeah, I knew that! Knew it all along!\p"
	.string "Of course I know about that!\n"
	.string "“{STR_VAR_2},” right?\p"
	.string "Yeah, that's it, it's there!\n"
	.string "Isn't “{STR_VAR_2}”\l"
	.string "the coolest, or what?\p"
	.string "It's the hippest thing in hip.\n"
	.string "You think I'd not know about it?\p"
	.string "“{STR_VAR_1}”…\n"
	.string "It's, like, so five minutes ago.\p"
	.string "Now, “{STR_VAR_2}” is\n"
	.string "what's vital and in tune with the times!$"

DewfordTown_Text_XHuhIThinkYIsCool: @ 81EA3FE
	.string "Hmm…\n"
	.string "“{STR_VAR_2},” huh?\p"
	.string "But personally, I think\n"
	.string "“{STR_VAR_1}”\l"
	.string "is what's real in cool.$"

DewfordTown_Text_HearOfAnyTrendsComeShareWithMe: @ 81EA443
	.string "Well, if you hear of any happening new\n"
	.string "trends, come share them with me, okay?$"

DewfordTown_Text_YeahDefinitionOfInRightNow: @ 81EA491
	.string "Yeah, absolutely right!\p"
	.string "“{STR_VAR_1}” is the\n"
	.string "definition of “in” right now.$"

DewfordTown_Text_FishedUpEviolite:
	.string "I fished up this strange rock the other\n"
	.string "day.\p"
	.string "It's of no use to me, so here,\n"
	.string "you take it!$"

DewfordTown_Text_ReceivedEviolite:
	.string "Maybe it'll be more useful in the hands\n"
	.string "of a Pokémon Trainer?\p"
	.string "It's no good as bait, that's for sure!$"

DewfordTown_Text_BrawlyInSlateport:
	.string "Hey, Champ-to-be!\p"
	.string "Brawly, the Gym Leader here, went\n"
	.string "to Slateport City and hasn't returned.\p"
	.string "If you're after a battle, you'll have\n"
	.string "to go find him.$"

DewfordTown_EventScript_WES_2:: @ 81EC1B3
	trainerbattle_single TRAINER_WES_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_EventScript_CYNTHIA_2A:: @ 81EC1B3
	trainerbattle_single TRAINER_CYNTHIA_2A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_EventScript_GUZMA_2:: @ 81EC1B3
	trainerbattle_single TRAINER_GUZMA_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_EventScript_LANCE_2:: @ 81EC1B3
	trainerbattle_single TRAINER_LANCE_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_EventScript_LUCY_2:: @ 81EC1B3
	trainerbattle_single TRAINER_LUCY_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_EventScript_KAREN_2:: @ 81EC1B3
	trainerbattle_single TRAINER_KAREN_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_EventScript_TUCKER_2:: @ 81EC1B3
	trainerbattle_single TRAINER_TUCKER_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_EventScript_BLAIN_2:: @ 81EC1B3
	trainerbattle_single TRAINER_BLAIN_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_EventScript_MAY_2A:: @ 81EC1B3
	trainerbattle_single TRAINER_MAY_2A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_EventScript_TATELIZZ_2A:: @ 81EC1B3
	trainerbattle_single TRAINER_TATELIZZ_2A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_EventScript_GUTARIST_2:: @ 81EC1B3
	trainerbattle_single TRAINER_GUTARIST_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_EventScript_GENTALMAN3_2:: @ 81EC1B3
	trainerbattle_single TRAINER_GENTALMAN3_2, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_EventScript_SandMound::
	lockall
	faceplayer
	special RockSmashWildEncounter
	delay 0x60
	removeobject 20
	releaseall
	end
FieryPath_MapScripts:: @ 8230F24
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_OnTransition
	.byte 0

FieryPath_OnTransition: @ 8230F2A
	call_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_EventScript_MoveScottToFallarbor
	setflag FLAG_LANDMARK_FIERY_PATH
	end

FieryPath_EventScript_MoveScottToFallarbor:: @ 8230F37
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
	return

FieryPath_EventScript_TABITHA_4A:: @ 81EC1B3
	trainerbattle_single TRAINER_TABITHA_4A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_COURTNEY_4A:: @ 81EC1B3
	trainerbattle_single TRAINER_COURTNEY_4A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAXIE_4:: @ 81EC1B3
	trainerbattle_single TRAINER_MAXIE_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_LYSANDRE_4:: @ 81EC1B3
	trainerbattle_single TRAINER_LYSANDRE_4, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_26:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_26, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_27:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_27, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_28:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_28, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_29:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_29, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_30:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_30, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_31:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_31, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_32:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_32, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_33:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_33, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_34:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_34, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_35:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_35, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_36:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_36, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_37:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_37, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_38:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_38, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_39:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_39, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_40:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_40, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_41:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_41, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_42:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_42, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_43:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_43, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_44:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_44, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_45:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_45, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_46:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_46, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_47:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_47, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_48:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_48, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_49:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_49, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_50:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_50, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

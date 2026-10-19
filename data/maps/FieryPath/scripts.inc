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
	trainerbattle_single TRAINER_TABITHA_4A, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_COURTNEY_4A:: @ 81EC1B3
	trainerbattle_single TRAINER_COURTNEY_4A, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAXIE_4:: @ 81EC1B3
	trainerbattle_single TRAINER_MAXIE_4, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_LYSANDRE_4:: @ 81EC1B3
	trainerbattle_single TRAINER_LYSANDRE_4, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_26:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_26, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_27:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_27, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_28:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_28, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_29:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_29, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_30:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_30, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_31:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_31, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_32:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_32, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_33:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_33, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_34:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_34, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_35:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_35, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_36:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_36, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_37:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_37, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_38:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_38, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_39:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_39, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_40:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_40, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_41:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_41, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_42:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_42, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_43:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_43, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_44:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_44, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_45:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_45, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_46:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_46, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_47:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_47, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_48:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_48, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_49:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_49, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

FieryPath_EventScript_MAGMA_50:: @ 81EC1B3
	trainerbattle_single TRAINER_MAGMA_50, IncTrainer_Villain_MiddleIntro, IncTrainer_Villain_MiddleDefeat
	msgbox IncTrainer_Villain_MiddlePost, MSGBOX_AUTOCLOSE
	end

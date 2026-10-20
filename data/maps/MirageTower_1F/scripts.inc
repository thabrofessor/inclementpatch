MirageTower_1F_MapScripts:: @ 823AD01
	map_script MAP_SCRIPT_ON_TRANSITION, MirageTower_1F_OnTransition
	.byte 0

MirageTower_1F_OnTransition: @ 823AD07
	setflag FLAG_ENTERED_MIRAGE_TOWER
	setflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	setflag FLAG_LANDMARK_MIRAGE_TOWER
	end

MirageTower_1F_EventScript_NORMAN_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_NORMAN_5A, IncTrainer_Resistance_MiddleIntro, IncTrainer_Resistance_MiddleDefeat
	msgbox IncTrainer_Resistance_MiddlePost, MSGBOX_AUTOCLOSE
	end

MirageTower_1F_EventScript_BRUNO_5:: @ 81EC1B3
	trainerbattle_single TRAINER_BRUNO_5, IncTrainer_Resistance_MiddleIntro, IncTrainer_Resistance_MiddleDefeat
	msgbox IncTrainer_Resistance_MiddlePost, MSGBOX_AUTOCLOSE
	end


MirageTower_1F_EventScript_JENNY_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_JENNY_5A, IncTrainer_Flirty_MiddleIntro, IncTrainer_Flirty_MiddleDefeat
	msgbox IncTrainer_Flirty_MiddlePost, MSGBOX_AUTOCLOSE
	end

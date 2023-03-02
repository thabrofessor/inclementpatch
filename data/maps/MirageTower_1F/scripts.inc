MirageTower_1F_MapScripts:: @ 823AD01
	map_script MAP_SCRIPT_ON_TRANSITION, MirageTower_1F_OnTransition
	.byte 0

MirageTower_1F_OnTransition: @ 823AD07
	setflag FLAG_ENTERED_MIRAGE_TOWER
	setflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	setflag FLAG_LANDMARK_MIRAGE_TOWER
	end

MirageTower_1F_EventScript_NORMAN_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_NORMAN_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

MirageTower_1F_EventScript_BRUNO_5:: @ 81EC1B3
	trainerbattle_single TRAINER_BRUNO_5, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end


MirageTower_1F_EventScript_JENNY_5A:: @ 81EC1B3
	trainerbattle_single TRAINER_JENNY_5A, Route102_Text_GENIntro, Route102_Text_GENDefeat
	msgbox Route102_Text_GENPostBattle, MSGBOX_AUTOCLOSE
	end

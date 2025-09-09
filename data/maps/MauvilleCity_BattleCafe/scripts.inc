MauvilleCity_BattleCafe_MapScripts::
# 2 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_BattleCafe_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauvilleCity_BattleCafe_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	special SetCafeTrainersToday
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle::
# 9 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	special GetCafeTrainersBattleText
# 10 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	trainerbattle_single VAR_RESULT, MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_Text_0, MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_Text_1
# 11 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	special GetCafeTrainersAfterBattleData
# 12 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	msgbox MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_Text_0
# 13 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_2
MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_1:
# 17 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	closemessage
# 18 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	releaseall
	return

MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_2:
# 14 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	giveitem VAR_RESULT, 1
# 15 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	msgbox MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_Text_2
	goto MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_1


MauvilleCity_BattleCafe_Scripts_DailyTrainer1::
# 22 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	lockall
# 23 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	faceplayer
# 24 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	setvar VAR_0x8000, 0
# 25 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainer2::
# 30 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	lockall
# 31 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	faceplayer
# 32 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	setvar VAR_0x8000, 1
# 33 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainer3::
# 37 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	lockall
# 38 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	faceplayer
# 39 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	setvar VAR_0x8000, 2
# 40 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainer4::
# 44 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	lockall
# 45 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	faceplayer
# 46 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	setvar VAR_0x8000, 3
# 47 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	goto MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle
	return


MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_Text_0:
# 10 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	.string "{STR_VAR_1}$"

MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_Text_1:
# 10 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	.string "{STR_VAR_2}$"

MauvilleCity_BattleCafe_Scripts_DailyTrainersBattle_Text_2:
# 15 "data/maps/MauvilleCity_BattleCafe/scripts.pory"
	.string "{STR_VAR_3}$"

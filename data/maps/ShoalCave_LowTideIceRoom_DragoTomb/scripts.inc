ShoalCave_LowTideIceRoom_DragoTomb_MapScripts::
	.byte 0


ShoalCave_LowTideIceRoom_DragoTomb_Regidrago::
# 4 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	goto_if_set FLAG_REGIDRAGO_UNLOCKED, ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_1
# 30 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_4
# 31 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_5
# 32 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	releaseall
	end

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_1:
# 5 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	playmoncry SPECIES_REGIDRAGO, CRY_MODE_NORMAL
# 6 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_0
# 7 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	waitmoncry
# 8 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	closemessage
# 9 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	setwildbattle SPECIES_REGIDRAGO, 50, ITEM_AIR_BALLOON
# 10 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	special StartRegiBattle
# 11 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	waitstate
# 12 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	case B_OUTCOME_CAUGHT, ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_5
# 19 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	case B_OUTCOME_WON, ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_6
# 23 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	case B_OUTCOME_RAN, ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_7
# 24 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_7
	return

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_5:
# 15 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	removeobject 1
# 16 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	setflag FLAG_REGIDRAGO_DEFEATED
# 17 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_1
	return

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_6:
# 20 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	setflag FLAG_DAILY_REGIDRAGO
# 21 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_2
	return

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_7:
# 25 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_3
	return


ShoalCave_LowTideIceRoom_DragoTomb_Braille_1::
	return


ShoalCave_LowTideIceRoom_DragoTomb_Braille_2::
	return


ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_0:
# 6 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	.string "¡Regii! ¡Gooooooo!$"

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_1:
# 17 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	.string "¡Regidrago te estará por siempre\n"
	.string "agradecido!$"

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_2:
# 21 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	.string "¡A Regidrago le encantó combatir\n"
	.string "contigo!\p"
	.string "¡Seguro mañana querrá tener otra\n"
	.string "batalla!$"

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_3:
# 25 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	.string "Regidrago parece decepcionado...$"

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_4:
# 30 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	.string ".............$"

ShoalCave_LowTideIceRoom_DragoTomb_Regidrago_Text_5:
# 31 "data/maps/ShoalCave_LowTideIceRoom_DragoTomb/scripts.pory"
	.string "Parece que Regidrago está sumido en un\n"
	.string "letargo a causa del mal clima...$"

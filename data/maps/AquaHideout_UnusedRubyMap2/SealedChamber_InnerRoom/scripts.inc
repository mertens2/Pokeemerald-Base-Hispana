# 1 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"

# 2 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_MapScripts::
# 3 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	.byte 0
# 4 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"

# 5 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleBackWall::
# 6 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 7 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_FirstWailordLastRelicanth
# 8 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	goto_if_set FLAG_REGI_DOORS_OPENED, SealedChamber_InnerRoom_EventScript_NoEffect
# 9 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	specialvar VAR_RESULT, CheckRelicanthWailord
# 10 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SealedChamber_InnerRoom_EventScript_NoEffect
# 11 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	fadeoutbgm 0
# 12 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	playse SE_TRUCK_MOVE
# 13 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 14 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 15 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 16 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 17 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 18 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 19 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 20 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 21 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 22 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 23 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 24 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 25 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 26 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 27 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 28 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	msgbox gText_DoorOpenedFarAway, MSGBOX_DEFAULT
# 29 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	closemessage
# 30 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	fadeinbgm 0
# 31 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 32 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 33 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	end
# 34 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"

# 35 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_NoEffect::
# 36 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 37 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	end
# 38 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"

# 39 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart1::
# 40 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 41 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_InThisCaveWeHaveLived
# 42 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 43 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	end
# 44 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"

# 45 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart2::
# 46 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 47 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeOweAllToThePokemon
# 48 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 49 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	end
# 50 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"

# 51 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart3::
# 52 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 53 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ButWeSealedThePokemonAway
# 54 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 55 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	end
# 56 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"

# 57 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart4::
# 58 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 59 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeFearedIt
# 60 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 61 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	end
# 62 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"

# 63 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart5::
# 64 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 65 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ThoseWithCourageHope
# 66 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 67 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	end
# 68 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"

# 69 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart6::
# 70 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 71 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_OpenDoorEternalPokemonWaits
# 72 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 73 "data/maps/AquaHideout_UnusedRubyMap2/SealedChamber_InnerRoom/scripts.pory"
	end

MauvilleCity_BikeShop_EventScript_Rydel::
# 2 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lockall
# 3 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_Rydel_2
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_NOT_DOUBLE_BIKE, MauvilleCity_BikeShop_EventScript_Rydel_3
# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setspeaker Rydel
# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_7
MauvilleCity_BikeShop_EventScript_Rydel_1:
# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	releaseall
	return

MauvilleCity_BikeShop_EventScript_Rydel_2:
# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setspeaker Rydel
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_0
	goto MauvilleCity_BikeShop_EventScript_Rydel_1

MauvilleCity_BikeShop_EventScript_Rydel_3:
# 9 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	clearflag FLAG_NOT_DOUBLE_BIKE
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	playse SE_PIN
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement LOCALID_RYDEL_SHOP, Common_Movement_ExclamationMark
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setspeaker Rydel
# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_1
# 15 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_2
# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	applymovement LOCALID_RYDEL_SHOP, MauvilleCity_BikeShop_Movement_RydelFix
# 18 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay 64
# 19 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setspeaker Rydel
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_3, MSGBOX_INTERRUPT
# 21 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmovement 0
# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setspeaker Rydel
# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_4
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	closemessage
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_5
# 27 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setspeaker Rydel
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_EventScript_Rydel_Text_6
	goto MauvilleCity_BikeShop_EventScript_Rydel_1


# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Movement_RydelFix:
# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_up
# 41 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_left
# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_up
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_up
# 44 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_up
# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_up
# 46 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay_16
# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay_16
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	delay_16
# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_down
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_up
# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_down
# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_down
# 53 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_down
# 54 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_right
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	walk_in_place_down
	step_end

# 58 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_MapScripts::
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.byte 0
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant::
# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 67 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 68 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 69 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
# 77 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
# 78 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 80 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide::
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 85 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn::
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes::
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 98 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 103 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 110 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 111 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies::
# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 125 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 126 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops::
# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps::
# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_RydelGreeting:
# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, well, what have we here?\n"
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A most energetic customer!\p"
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Me? You may call me RYDEL.\n"
# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm the owner of this cycle shop.$"
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_DidYouComeFromFarAway:
# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Your RUNNING SHOES…\n"
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They're awfully filthy.\p"
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Did you come from far away?$"
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GuessYouDontNeedBike:
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Is that right?\p"
# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Then, I guess you have no need for\n"
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "any of my BIKES.$"
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne:
# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Hm, hm… … … … …\p"
# 160 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You're saying that you came all this\n"
# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "way from LITTLEROOT?\p"
# 162 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "My goodness!\n"
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "That's ridiculously far!\p"
# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you had one of my BIKES, you could\n"
# 165 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "go anywhere easily while feeling the\l"
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "gentle caress of the wind!\p"
# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll tell you what!\n"
# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll give you a BIKE!\p"
# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, wait a second!\p"
# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I forgot to tell you that there are\n"
# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "two kinds of BIKES!\p"
# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They are the MACH BIKE and\n"
# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the ACRO BIKE!\p"
# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The MACH BIKE is for cyclists who want\n"
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to feel the wind with their bodies!\p"
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "And an ACRO BIKE is for those who\n"
# 177 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "prefer technical rides!\p"
# 178 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm a real sweetheart, so you can\n"
# 179 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "have whichever one you like!\p"
# 180 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which one will you choose?$"
# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseMachBike:
# 183 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the MACH BIKE.$"
# 184 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseAcroBike:
# 186 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the ACRO BIKE.$"
# 187 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 188 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes:
# 189 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: If you get the urge to switch\n"
# 190 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BIKES, just come see me!$"
# 191 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 192 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_WantToSwitchBikes:
# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Oh? Were you thinking about\n"
# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "switching BIKES?$"
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 196 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_IllSwitchBikes:
# 197 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Okay, no problem!\n"
# 198 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll switch BIKES for you!$"
# 199 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedMachForAcro:
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the MACH BIKE exchanged\n"
# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for an ACRO BIKE.$"
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedAcroForMach:
# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the ACRO BIKE exchanged\n"
# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for a MACH BIKE.$"
# 207 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HappyYouLikeIt:
# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Good, good!\n"
# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm happy that you like it!$"
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 212 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_OhYourBikeIsInPC:
# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh? What happened to that BIKE\n"
# 214 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I gave you?\p"
# 215 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, I get it, you stored it using your PC.\p"
# 216 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, take it out of PC storage,\n"
# 217 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and I'll be happy to exchange it!\p"
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "May the wind always be at your back\n"
# 219 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "on your adventure!$"
# 220 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 221 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack:
# 222 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm learning about BIKES while\n"
# 223 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I work here.\p"
# 224 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you need advice on how to ride your\n"
# 225 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BIKE, there're a couple handbooks in\l"
# 226 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the back.$"
# 227 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 228 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage:
# 229 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the MACH BIKE.\p"
# 230 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 231 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 232 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike:
# 233 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A BIKE moves in the direction that\n"
# 234 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the + Control Pad is pressed.\p"
# 235 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It will speed up once it gets rolling.\p"
# 236 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "To stop, release the + Control Pad.\n"
# 237 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The BIKE will slow to a stop.\p"
# 238 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 239 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 240 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike:
# 241 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A MACH BIKE is speedy, but it can't\n"
# 242 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "stop very quickly.\p"
# 243 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It gets a little tricky to get around\n"
# 244 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "a corner.\p"
# 245 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Release the + Control Pad a little\n"
# 246 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "before the corner and slow down.\p"
# 247 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 248 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 249 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes:
# 250 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "There are small sandy slopes\n"
# 251 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "throughout the HOENN region.\p"
# 252 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The loose, crumbly sand makes it\n"
# 253 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "impossible to climb normally.\p"
# 254 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "But if you have a MACH BIKE, you can\n"
# 255 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "zip up a sandy slope.\p"
# 256 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 257 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 258 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage:
# 259 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the ACRO BIKE.\p"
# 260 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 261 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 262 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies:
# 263 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button while riding,\n"
# 264 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and the front wheel lifts up.\p"
# 265 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can zip around with the front\n"
# 266 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "wheel up using the + Control Pad.\p"
# 267 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a wheelie.\p"
# 268 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 269 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 270 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops:
# 271 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Keeping the B Button pressed,\n"
# 272 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "your BIKE can hop on the spot.\p"
# 273 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a bunny hop.\p"
# 274 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can ride while hopping, too.\p"
# 275 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 276 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 277 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps:
# 278 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button and the + Control\n"
# 279 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pad at the same time to jump.\p"
# 280 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the + Control Pad to the side\n"
# 281 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to jump sideways.\p"
# 282 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press it backwards to make the BIKE\n"
# 283 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "change directions while jumping.\p"
# 284 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_0:
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¡{PLAYER}!\n"
	.string "¿Cómo te está yendo con esa Bici?$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_1:
# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¡Pero si esa que llevas ahí es una de mis\n"
	.string "Bicis!\p"
	.string "¡Déjame verla!$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_2:
# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} le entregó a Rydel su Bici.$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_3:
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Hmmm…………… A ver……\n"
	.string "¡Listo!{PAUSE 16}$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_4:
# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¡Eso debería funcionar! ¡Aquí tienes!$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_5:
# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¡La Bici de {PLAYER} es ahora capaz de\n"
	.string "cambiar de modos con {R_BUTTON}!$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_6:
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¡Disfruta!$"

MauvilleCity_BikeShop_EventScript_Rydel_Text_7:
# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel.$"

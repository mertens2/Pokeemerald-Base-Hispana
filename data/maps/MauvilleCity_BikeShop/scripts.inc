# 1 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 2 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_MapScripts::
# 3 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel::
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_AskSwitchBikes
# 9 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_SkipGreeting
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 15 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting::
# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 18 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 19 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike::
# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 21, 8, MULTI_BIKE, TRUE
# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_GetMachBike
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_GetAcroBike
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 30 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_NotFar::
# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 36 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_YesFar::
# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseBike
# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 41 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetMachBike::
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
# 44 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 46 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetAcroBike::
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 53 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 54 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes::
# 57 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
# 58 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	special SwapRegisteredBike
# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes::
# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_WantToSwitchBikes, MSGBOX_YESNO
# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_SwitchBikes
# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_KeepBike
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 67 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 68 "data/maps/MauvilleCity_BikeShop/scripts.pory"
@ If the player does not have a bike on them Rydel assumes its stored in the PC
# 69 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes::
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchAcroForMach
# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchMachForAcro
# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 77 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 78 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_KeepBike::
# 80 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchAcroForMach::
# 85 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchMachForAcro::
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 98 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant::
# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 103 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 110 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 111 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide::
# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 125 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 126 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn::
# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes::
# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies::
# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 160 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 162 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops::
# 165 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps::
# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
# 177 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 178 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 179 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 180 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_RydelGreeting:
# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Bueno, bueno, bueno, ¿a quién tenemos\n"
# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "aquí? ¡Una personita con muchos bríos!\p"
# 183 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Mi nombre? Me llaman ANACLETO y soy\n"
# 184 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "el propietario de esta tienda de bicis.$"
# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 186 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_DidYouComeFromFarAway:
# 187 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "ANACLETO: Esas DEPORTIVAS\n"
# 188 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "están que dan asquito…\p"
# 189 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Vienes de muy lejos?$"
# 190 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 191 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GuessYouDontNeedBike:
# 192 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "ANACLETO: ¿De veras?\p"
# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Entonces supongo que no necesitas\n"
# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "ninguna BICI…$"
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 196 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne:
# 197 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "ANACLETO: Ajá, ajá, entiendo…\n"
# 198 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Sí, sí, ya veo…\p"
# 199 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Así que has venido nada menos\n"
# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "que desde VILLA RAÍZ…\p"
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¡Impresionante!\n"
# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¡Está en el quinto pino!\p"
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Si tuvieras una de mis BICIS, podrías\n"
# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "ir a cualquier sitio en un periquete\l"
# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "mientras el viento acaricia tu rostro.\p"
# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ya sé: ¡te voy a dar una BICI!\p"
# 207 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pero espera un segundo…\p"
# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "No te he dicho que hay dos tipos\n"
# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "de BICIS…\p"
# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "La BICI CARRERA y la BICI ACROBÁTICA.\p"
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "La BICI CARRERA es para aquellos a los\n"
# 212 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "que les gusta poner cara de velocidad.\p"
# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "La BICI ACROBÁTICA es para aquellos\n"
# 214 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "a los que les gusta hacer virguerías.\p"
# 215 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Soy la mar de majo, así que puedes\n"
# 216 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "elegir la que más te mole.\p"
# 217 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Cuál te llevas?$"
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 219 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseMachBike:
# 220 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} eligió la BICI CARRERA.$"
# 221 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 222 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseAcroBike:
# 223 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} eligió la BICI ACROBÁTICA.$"
# 224 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 225 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes:
# 226 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "ANACLETO: Si de repente te apetece\n"
# 227 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "cambiar de BICI, ven a verme.$"
# 228 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 229 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_WantToSwitchBikes:
# 230 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "ANACLETO: ¡Hola!\n"
# 231 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Vienes a cambiar de BICI?$"
# 232 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 233 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_IllSwitchBikes:
# 234 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "ANACLETO: ¡No hay problema!\n"
# 235 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Te la cambio en un momentín.$"
# 236 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 237 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedMachForAcro:
# 238 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} cambió la BICI CARRERA \n"
# 239 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "por la BICI ACROBÁTICA.$"
# 240 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 241 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedAcroForMach:
# 242 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} cambió la BICI ACROBÁTICA\n"
# 243 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "por la BICI CARRERA.$"
# 244 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 245 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HappyYouLikeIt:
# 246 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "ANACLETO: Bien, bien.\n"
# 247 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Me alegro de que te guste.$"
# 248 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 249 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_OhYourBikeIsInPC:
# 250 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Eh? ¿Qué le ha pasado a la BICI\n"
# 251 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "que te he dado?\p"
# 252 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ah, ya, la has guardado en tu PC.\p"
# 253 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Bueno, pues sácala de ahí\n"
# 254 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "y te la cambiaré encantado.\p"
# 255 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¡Espero que cuando viajes el viento\n"
# 256 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "siempre te venga de espalda!$"
# 257 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 258 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack:
# 259 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Trabajar aquí me está enseñando\n"
# 260 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "un montón sobre BICIS.\p"
# 261 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Si quieres saber todos los secretos\n"
# 262 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "de tu BICI, echa un vistazo\l"
# 263 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "a los manuales que hay ahí detrás.$"
# 264 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 265 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage:
# 266 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Es un manual sobre la BICI CARRERA.\p"
# 267 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Qué capítulo quieres leer?$"
# 268 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 269 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike:
# 270 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "La BICI se mueve en la dirección\n"
# 271 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "que eliges en el + Panel de Control.\p"
# 272 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Irá cogiendo velocidad poco a poco.\p"
# 273 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Para parar, suelta el + Panel de\n"
# 274 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Control. La BICI perderá velocidad\l"
# 275 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "gradualmente hasta detenerse.\p"
# 276 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Quieres leer otro capítulo?$"
# 277 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 278 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike:
# 279 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "La BICI CARRERA es muy rápida,\n"
# 280 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "pero tarda un poco en detenerse.\p"
# 281 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Doblar las esquinas puede resultar\n"
# 282 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "complicado.\p"
# 283 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Suelta el + Panel de Control justo\n"
# 284 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "antes de llegar a la esquina para\l"
# 285 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "reducir la velocidad.\p"
# 286 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Quieres leer otro capítulo?$"
# 287 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 288 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes:
# 289 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Por toda la región de HOENN hay\n"
# 290 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "pequeñas pendientes arenosas.\p"
# 291 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "La consistencia de la arena dificulta\n"
# 292 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "la ascensión de la pendiente.\p"
# 293 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Sin embargo, si tienes una BICI\n"
# 294 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "CARRERA, puedes subir sin problemas.\p"
# 295 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Quieres leer otro capítulo?$"
# 296 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 297 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage:
# 298 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Es un manual sobre la BICI ACROBÁTICA.\p"
# 299 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Qué capítulo quieres leer?$"
# 300 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 301 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies:
# 302 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pulsa el Botón B mientras estás en la\n"
# 303 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BICI para elevar la rueda delantera.\p"
# 304 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Usa el + Panel de Control para dar\n"
# 305 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "vueltas con la rueda levantada.\p"
# 306 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Esta técnica se llama “el caballito”.\p"
# 307 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Quieres leer otro capítulo?$"
# 308 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 309 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops:
# 310 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Mantén pulsado el Botón B mientras\n"
# 311 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "la BICI está parada y empezará a dar\l"
# 312 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "saltos en el sitio.\p"
# 313 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Esta técnica se llama “saltitos”.\p"
# 314 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Si a continuación usas el + Panel de\n"
# 315 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Control, puedes moverte dando saltos.\p"
# 316 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Quieres leer otro capítulo?$"
# 317 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 318 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps:
# 319 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pulsa el Botón B y el + Panel de Control\n"
# 320 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "al mismo tiempo para saltar.\p"
# 321 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pulsa el + Panel de Control hacia los\n"
# 322 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "lados para dar un salto lateral.\p"
# 323 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Púlsalo hacia arriba o abajo para que\n"
# 324 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "la BICI cambie de dirección durante\l"
# 325 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "el salto.\p"
# 326 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "¿Quieres leer otro capítulo?$"

# 1 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 2 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_MapScripts::
# 3 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    @ Game Corner prices
# 6 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM32_COINS,  1500
# 7 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM29_COINS,  3000
# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM35_COINS,  4000
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM24_COINS,  4000
# 10 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM13_COINS,  4000
# 11 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM92_COINS,  2500
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM99_COINS,  6000
# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set DOLL_COINS,  1000
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
 
# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_50,   100
# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_500,  1000
# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_5000, 10000
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 26 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 28 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_GameCorner_ChoseCoinsText1, MauvilleCity_GameCorner_ChoseCoinsText2, MauvilleCity_GameCorner_ChoseCoinsText3, MauvilleCity_GameCorner_ChoseCoinsText4
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_Buy5000Coins
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 40 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseCoinsText1:
# 41 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "   50 Fichas   ¥100$"
# 42 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseCoinsText2:
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "  500 Fichas  ¥1.000$"
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseCoinsText3:
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "5,000 Fichas ¥10.000$"
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseCoinsText4:
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Cancelar$"
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins::
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 50), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50
# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 59 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 60 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 61 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 62 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins::
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500
# 72 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 73 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 74 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 76 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 77 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 78 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 79 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 80 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 81 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy5000Coins::
# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 5000), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 84 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_5000
# 85 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 86 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 5000
# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_5000
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NeedCoinCase::
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 108 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 131 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_GameCorner_ChoseTMsText2, MauvilleCity_GameCorner_ChoseTMsText3, MauvilleCity_GameCorner_ChoseTMsText4, MauvilleCity_GameCorner_ChoseTMsText5, MauvilleCity_GameCorner_ChoseTMsText6, MauvilleCity_GameCorner_ChoseTMsText6, MauvilleCity_GameCorner_ChoseCoinsText4
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TM92
# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TM94
# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_TM95
# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_TM96
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_TM99
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText2:
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psicocorte  F2.500$"
# 158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText3:
# 159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Colm.Fuego   F3.000$"
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText4:
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Colm.Hielo    F3.000$"
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText5:
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Colm.Trueno F3.000$"
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText6:
# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rompealmas  F6.000$"
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage::
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize::
# 184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_GameCorner_ChoseTMsText11, MauvilleCity_GameCorner_ChoseTMsText12, MauvilleCity_GameCorner_ChoseTMsText13, MauvilleCity_GameCorner_ChoseTMsText14, MauvilleCity_GameCorner_ChoseTMsText15 , MauvilleCity_GameCorner_ChoseCoinsText4
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TM32
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TM29
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_TM35
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_TM24
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_TM13
# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText11:
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Luz Lunar     F1.500$"
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText12:
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psíquico      F3.000$"
# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText13:
# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lanzallamas F4.000$"
# 206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText14:
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Atactrueno  F4.000$"
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText15:
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rayo Hielo    F4.000$"
# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM32::
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM27
# 215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM27
# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM29::
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM29
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM29
# 222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 223 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM35::
# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM35
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM35
# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM24::
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM24
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM24
# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM13::
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM13
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM13
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 241 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM92::
# 243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 6
# 244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM92
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM92
# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM94::
# 249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 7
# 250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM94
# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM94
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM95::
# 255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 8
# 256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM95
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM95
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM96::
# 261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 9
# 262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM96
# 263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM96
# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM99::
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 10
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM99
# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM99
# 270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize::
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTM32
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTM29
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyTM35
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyTM24
# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyTM13
# 282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_BuyTM92
# 283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_BuyTM94
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_BuyTM95
# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_BuyTM96
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 10, MauvilleCity_GameCorner_EventScript_BuyTM99
# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM32::
# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM27
# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 0
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM32_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM32_COINS
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM27
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM29::
# 304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM29
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 1
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM29_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM29_COINS
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM29
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM35::
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM35
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 2
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM35_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM35_COINS
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM35
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM24::
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM24
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 3
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM24_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM24_COINS
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM24
# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM13::
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM13
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 4
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM13_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM13_COINS
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM13
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM92::
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM92
# 361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 5
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM92_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM92_COINS
# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM92
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM94::
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM94
# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 6
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM29_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM29_COINS
# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM94
# 381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM95::
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM95
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 7
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM29_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM29_COINS
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM95
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 400 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM96::
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM96
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 8
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM29_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM29_COINS
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM96
# 409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM99::
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM99
# 417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 9
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM99_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM99_COINS
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM99
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM::
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_3, VAR_0x8004
# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoinsTM, MSGBOX_YESNO
# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_GameCorner_EventScript_BuyTMWithMoney
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMWithMoney::
# 441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_BuyTM32Money
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTM29Money
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTM35Money
# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyTM24Money
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyTM13Money
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyTM92Money
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_BuyTM94Money
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_BuyTM95Money
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_BuyTM96Money
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_BuyTM99Money
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM32Money::
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM32_COINS * 2)
# 458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM27
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM32_COINS * 2)
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM27
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM29Money::
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM29_COINS * 2)
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM29
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM29_COINS * 2)
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM29
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM35Money::
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM35_COINS * 2)
# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM35
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM35_COINS * 2)
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM35
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM24Money::
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM24_COINS * 2)
# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM24
# 502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM24_COINS * 2)
# 504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM24
# 505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM13Money::
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM13_COINS * 2)
# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM13
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM13_COINS * 2)
# 518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM13
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM92Money::
# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM92_COINS * 2)
# 528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM92
# 530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM32_COINS * 2)
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM27
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM94Money::
# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM29_COINS * 2)
# 542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM94
# 544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM29_COINS * 2)
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM94
# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM95Money::
# 555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM29_COINS * 2)
# 556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM95
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM29_COINS * 2)
# 560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM95
# 561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM96Money::
# 569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM29_COINS * 2)
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM96
# 572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM29_COINS * 2)
# 574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM96
# 575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM99Money::
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM99_COINS * 2)
# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM99
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM99_COINS * 2)
# 588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM99
# 589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 595 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForTM::
# 597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NoRoomForTM, MSGBOX_DEFAULT
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForTM:
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Tal parece ser que usted\nya posee esta MT, señor{A}.\p"
# 602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "No es necesario comprar otra.$"
# 603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman2::
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
# 611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 612 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gentleman::
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl::
# 618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
# 634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 643 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
# 645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM::
# 650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 657 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins::
# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, 1, MauvilleCity_GameCorner_EventScript_PokefanMNormal @ Only give 20 coins if player has no coins
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 668 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanMNormal::
# 670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_OldMan::
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cook::
# 682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Man::
# 689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 694 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
# 696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Maniac::
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 708 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman::
# 710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 715 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 735 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 775 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 785 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 805 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 815 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 835 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase::
# 837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 840 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"
# 843 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins:
# 845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some COINS for\n"
# 846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the games?\p"
# 847 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But you don't have a COIN CASE for\n"
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "stowing the COINS.$"
# 849 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WereYouLookingForCoins:
# 851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for COINS?\p"
# 852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ¥1000 for 50 COINS.\n"
# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like some?$"
# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins:
# 856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
# 857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here are your COINS!$"
# 858 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontHaveEnoughMoney:
# 860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eh… Parece no alcanzarle el\n"
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "dinero, señor{A}…$"
# 862 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 863 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinCaseIsFull:
# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
# 865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Your COIN CASE is full.$"
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 867 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontNeedCoinsThen:
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need COINS, then?\n"
# 869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Good luck on your adventure!$"
# 870 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 871 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes:
# 872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can exchange your COINS for\n"
# 874 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "prizes here.$"
# 875 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPrize:
# 877 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"
# 878 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX:
# 880 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 881 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"
# 882 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SendToYourHomePC:
# 884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
# 885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 886 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoins:
# 888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "No tienes suficientes fichas.$"
# 889 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoinsTM:
# 890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "No tienes suficientes fichas.\p¿Te gustaría comprar\n{STR_VAR_3} {STR_VAR_2} con dinero?$"
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor:
# 894 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
# 895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "placing {STR_VAR_1}.$"
# 896 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_OhIsThatSo:
# 898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
# 899 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to save some COINS before\l"
# 900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "coming back here.$"
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsX:
# 903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"
# 904 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo:
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 907 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantCarryAnyMore:
# 910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"
# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the same DOLLS.\p"
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like one of them?$"
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo2:
# 918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 919 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_YouWantItButNotNow:
# 921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
# 922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want it, but not right now?$"
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontBeNegative:
# 925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
# 926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can have this!$"
# 927 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantWinJackpot:
# 929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
# 930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the jackpot.$"
# 931 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor:
# 933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
# 934 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "you need a COIN CASE.\p"
# 935 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I think the young lady next door\n"
# 936 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "had one. Go see her!$"
# 937 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 938 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
# 939 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
# 940 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is too much for me.\l"
# 941 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here, take some COINS!$"
# 942 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 943 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
# 944 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "MAUVILLE has something for\n"
# 945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "everyone.\p"
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "For me, it's the GAME CORNER.$"
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates:
# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The ROULETTE tables have different\n"
# 950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rates.\p"
# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Check your COINS if you're going to\n"
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick a table.$"
# 953 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I should get back to work.$"
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay:
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "COINS are needed to play here\n"
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in the GAME CORNER.$"
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This ROULETTE thing…\n"
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's rather demanding.\p"
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three COINS can be used to play\n"
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the SLOTS.$"
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DifficultToStopOn7:
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "right on “7.”\p"
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "If it stops on “7” during the REEL TIME\n"
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonus game, you'll receive extra COINS.$"
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo:
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "about the SLOTS.\p"
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The more lightning bolts you stock,\n"
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the more REEL TIME chances you get.\p"
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "In a game with the maximum five\n"
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "REEL TIME chances…\p"
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It is possible to receive four regular\n"
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonuses, then a big bonus.\p"
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "That would total 660 COINS, but it's\n"
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "very difficult to get.$"
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase:
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"

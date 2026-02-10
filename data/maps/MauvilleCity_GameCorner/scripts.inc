MauvilleCity_GameCorner_EventScript_Woman2::
# 2 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 3 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
	checkitem ITEM_HM_ROCK_SMASH
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_GameCorner_EventScript_Woman2_2
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Woman2_Text_2
MauvilleCity_GameCorner_EventScript_Woman2_1:
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_Woman2_2:
# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Woman2_Text_0
# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Woman2_Text_1
	goto MauvilleCity_GameCorner_EventScript_Woman2_1


# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_MapScripts::
# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.byte 0
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    @ Game Corner prices
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM32_COINS,  1500
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM29_COINS,  3000
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM35_COINS,  4000
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM24_COINS,  4000
# 26 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM13_COINS,  4000
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM92_COINS,  2500
# 28 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM99_COINS,  6000
# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set DOLL_COINS,  1000
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"
 
# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_50,   100
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_500,  1000
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_5000, 10000
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 40 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
# 41 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 42 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_GameCorner_ChoseCoinsText1, MauvilleCity_GameCorner_ChoseCoinsText2, MauvilleCity_GameCorner_ChoseCoinsText3, MauvilleCity_GameCorner_ChoseCoinsText4
# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_Buy5000Coins
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseCoinsText1:
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "   50 Fichas   ¥100$"
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseCoinsText2:
# 59 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "  500 Fichas  ¥1.000$"
# 60 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseCoinsText3:
# 61 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "5,000 Fichas ¥10.000$"
# 62 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseCoinsText4:
# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Cancelar$"
# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins::
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 50), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50
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
MauvilleCity_GameCorner_EventScript_Buy500Coins::
# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 84 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500
# 85 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 86 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500
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
MauvilleCity_GameCorner_EventScript_Buy5000Coins::
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 5000), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_5000
# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 5000
# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_5000
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NeedCoinCase::
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 131 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 159 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_GameCorner_ChoseTMsText2, MauvilleCity_GameCorner_ChoseTMsText3, MauvilleCity_GameCorner_ChoseTMsText4, MauvilleCity_GameCorner_ChoseTMsText5, MauvilleCity_GameCorner_ChoseTMsText6, MauvilleCity_GameCorner_ChoseTMsText6, MauvilleCity_GameCorner_ChoseCoinsText4
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TM92
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TM94
# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_TM95
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_TM96
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_TM99
# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 171 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText2:
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psicocorte  F2.500$"
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText3:
# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Colm.Fuego   F3.000$"
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText4:
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Colm.Hielo    F3.000$"
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText5:
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Colm.Trueno F3.000$"
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText6:
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rompealmas  F6.000$"
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 191 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage::
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize::
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_GameCorner_ChoseTMsText11, MauvilleCity_GameCorner_ChoseTMsText12, MauvilleCity_GameCorner_ChoseTMsText13, MauvilleCity_GameCorner_ChoseTMsText14, MauvilleCity_GameCorner_ChoseTMsText15 , MauvilleCity_GameCorner_ChoseCoinsText4
# 206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TM32
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TM29
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_TM35
# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_TM24
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_TM13
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 215 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText11:
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Luz Lunar     F1.500$"
# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText12:
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psíquico      F3.000$"
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText13:
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lanzallamas F4.000$"
# 222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText14:
# 223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Atactrueno  F4.000$"
# 224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_ChoseTMsText15:
# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rayo Hielo    F4.000$"
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM32::
# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM27
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM27
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM29::
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM29
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM29
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM35::
# 241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM35
# 243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM35
# 244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM24::
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM24
# 249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM24
# 250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM13::
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM13
# 255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM13
# 256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM92::
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 6
# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM92
# 261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM92
# 262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 263 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM94::
# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 7
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM94
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM94
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM95::
# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 8
# 272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM95
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM95
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM96::
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 9
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM96
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM96
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TM99::
# 283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 10
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM99
# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM99
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize::
# 289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTM32
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTM29
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyTM35
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyTM24
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyTM13
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_BuyTM92
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_BuyTM94
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_BuyTM95
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_BuyTM96
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 10, MauvilleCity_GameCorner_EventScript_BuyTM99
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 304 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM32::
# 306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM27
# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 0
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM32_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM32_COINS
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM27
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM29::
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM29
# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 1
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM29_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM29_COINS
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM29
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM35::
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM35
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 2
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM35_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM35_COINS
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM35
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM24::
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM24
# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 3
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM24_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM24_COINS
# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM24
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM13::
# 362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM13
# 363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 4
# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM13_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM13_COINS
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM13
# 369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM92::
# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM92
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 5
# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM92_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM92_COINS
# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM92
# 383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM94::
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM94
# 391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 6
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM29_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM29_COINS
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM94
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM95::
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM95
# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 7
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM29_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM29_COINS
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM95
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM96::
# 418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM96
# 419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 8
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM29_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM29_COINS
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM96
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM99::
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM99
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_3, 9
# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM99_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM99_COINS
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM99
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM::
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_3, VAR_0x8004
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoinsTM, MSGBOX_YESNO
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_GameCorner_EventScript_BuyTMWithMoney
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMWithMoney::
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_BuyTM32Money
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTM29Money
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTM35Money
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyTM24Money
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyTM13Money
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyTM92Money
# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_BuyTM94Money
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_BuyTM95Money
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_BuyTM96Money
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_BuyTM99Money
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM32Money::
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM32_COINS * 2)
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM27
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM32_COINS * 2)
# 478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM27
# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM29Money::
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM29_COINS * 2)
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM29
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM29_COINS * 2)
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM29
# 493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM35Money::
# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM35_COINS * 2)
# 502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM35
# 504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM35_COINS * 2)
# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM35
# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM24Money::
# 515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM24_COINS * 2)
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM24
# 518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM24_COINS * 2)
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM24
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM13Money::
# 529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM13_COINS * 2)
# 530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM13
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM13_COINS * 2)
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM13
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM92Money::
# 543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM92_COINS * 2)
# 544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM92
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM32_COINS * 2)
# 548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM27
# 549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 555 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM94Money::
# 557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM29_COINS * 2)
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM94
# 560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM29_COINS * 2)
# 562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM94
# 563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 569 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM95Money::
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM29_COINS * 2)
# 572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM95
# 574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM29_COINS * 2)
# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM95
# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM96Money::
# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM29_COINS * 2)
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM96
# 588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM29_COINS * 2)
# 590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM96
# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 597 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTM99Money::
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney (TM99_COINS * 2)
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_TM99
# 602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney (TM99_COINS * 2)
# 604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM99
# 605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 611 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForTM::
# 613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NoRoomForTM, MSGBOX_DEFAULT
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForTM:
# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Tal parece ser que usted\nya posee esta MT, señor{A}.\p"
# 618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "No es necesario comprar otra.$"
# 619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gentleman::
# 626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
# 627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 628 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl::
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
# 635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 644 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 650 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 655 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
# 657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM::
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 669 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins::
# 671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, 1, MauvilleCity_GameCorner_EventScript_PokefanMNormal @ Only give 20 coins if player has no coins
# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanMNormal::
# 682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_OldMan::
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cook::
# 694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Man::
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
# 708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Maniac::
# 715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 720 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman::
# 722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 747 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 767 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 785 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 787 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 817 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 837 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 847 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase::
# 849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 852 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"
# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins:
# 857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some COINS for\n"
# 858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the games?\p"
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But you don't have a COIN CASE for\n"
# 860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "stowing the COINS.$"
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WereYouLookingForCoins:
# 863 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for COINS?\p"
# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ¥1000 for 50 COINS.\n"
# 865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like some?$"
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 867 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins:
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
# 869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here are your COINS!$"
# 870 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 871 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontHaveEnoughMoney:
# 872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eh… Parece no alcanzarle el\n"
# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "dinero, señor{A}…$"
# 874 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 875 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinCaseIsFull:
# 876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
# 877 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Your COIN CASE is full.$"
# 878 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontNeedCoinsThen:
# 880 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need COINS, then?\n"
# 881 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Good luck on your adventure!$"
# 882 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes:
# 884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
# 885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can exchange your COINS for\n"
# 886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "prizes here.$"
# 887 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPrize:
# 889 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"
# 890 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX:
# 892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"
# 894 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SendToYourHomePC:
# 896 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 898 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 899 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoins:
# 900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "No tienes suficientes fichas.$"
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoinsTM:
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "No tienes suficientes fichas.\p¿Te gustaría comprar\n{STR_VAR_3} {STR_VAR_2} con dinero?$"
# 903 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor:
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
# 907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "placing {STR_VAR_1}.$"
# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_OhIsThatSo:
# 910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to save some COINS before\l"
# 912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "coming back here.$"
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsX:
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo:
# 918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 919 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantCarryAnyMore:
# 922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
# 925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
# 926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the same DOLLS.\p"
# 927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like one of them?$"
# 928 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo2:
# 930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 931 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_YouWantItButNotNow:
# 933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
# 934 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want it, but not right now?$"
# 935 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 936 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontBeNegative:
# 937 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
# 938 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can have this!$"
# 939 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 940 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantWinJackpot:
# 941 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
# 942 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the jackpot.$"
# 943 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 944 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor:
# 945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "you need a COIN CASE.\p"
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I think the young lady next door\n"
# 948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "had one. Go see her!$"
# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is too much for me.\l"
# 953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here, take some COINS!$"
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "MAUVILLE has something for\n"
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "everyone.\p"
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "For me, it's the GAME CORNER.$"
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates:
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The ROULETTE tables have different\n"
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rates.\p"
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Check your COINS if you're going to\n"
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick a table.$"
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I should get back to work.$"
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay:
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "COINS are needed to play here\n"
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in the GAME CORNER.$"
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This ROULETTE thing…\n"
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's rather demanding.\p"
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three COINS can be used to play\n"
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the SLOTS.$"
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DifficultToStopOn7:
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "right on “7.”\p"
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "If it stops on “7” during the REEL TIME\n"
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonus game, you'll receive extra COINS.$"
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo:
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "about the SLOTS.\p"
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The more lightning bolts you stock,\n"
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the more REEL TIME chances you get.\p"
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "In a game with the maximum five\n"
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "REEL TIME chances…\p"
# 996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It is possible to receive four regular\n"
# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonuses, then a big bonus.\p"
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "That would total 660 COINS, but it's\n"
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "very difficult to get.$"
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase:
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"

MauvilleCity_GameCorner_EventScript_Woman2_Text_0:
# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "¡Hola, soy la {COLOR SHADOW RED LIGHT_RED}Aniquiladora{COLOR DARK_GRAY LIGHT_GRAY}!\p"
	.string "Hace tiempo, era conocida como el\n"
	.string "{COLOR SHADOW RED LIGHT_RED}Maestro Golpe Roca{COLOR DARK_GRAY LIGHT_GRAY}, ¡Pero ya no más!\p"
	.string "Pero en lo que no cambié, es en mi\n"
	.string "generosidad. ¡Toma esto!$"

MauvilleCity_GameCorner_EventScript_Woman2_Text_1:
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "¡Úsala bien, y buena suerte en el\n"
	.string "Casino!$"

MauvilleCity_GameCorner_EventScript_Woman2_Text_2:
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "¡Usa esa MO Golpe Roca bien, y buena\n"
	.string "suerte en el Casino!$"

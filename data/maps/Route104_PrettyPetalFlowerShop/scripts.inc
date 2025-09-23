# 1 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 2 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
.set LOCALID_OWNER, 1
# 3 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 4 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_MapScripts::
# 5 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_PrettyPetalFlowerShop_OnTransition
# 6 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.byte 0
# 7 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 8 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_OnTransition:
# 9 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 10 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 11 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner::
# 12 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm LOCALID_OWNER, 4, 6
# 13 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 14 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 15 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner::
# 16 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 17 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 18 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ShopOwner_Decorations, MSGBOX_YESNO
# 19 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_SellDecorations
# 20 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ShopOwner_Berries, MSGBOX_YESNO
# 21 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_Script_ShopOwner_ComeBack
# 22 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	message gText_PlayerWhatCanIDoForYou
# 23 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemart Route104_PrettyPetalFlowerShop_Pokemart_Mulch
# 24 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 25 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 26 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 27 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Script_ShopOwner_ComeBack::
# 28 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 29 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 30 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ShopOwner_ComeBackSoon
# 31 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 32 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 33 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 34 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_SellDecorations::
# 35 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	message gText_PlayerWhatCanIDoForYou
# 36 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 37 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemartdecoration2 Route104_PrettyPetalFlowerShop_Pokemart_Plants
# 38 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 39 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 40 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 41 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 42 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.align 2
# 43 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Pokemart_Plants:
# 44 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_CAMP_DESK
# 45 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_PRETTY_DESK
# 46 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_CAMP_CHAIR
# 47 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_PRETTY_CHAIR
# 48 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_RED_PLANT
# 49 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_TROPICAL_PLANT
# 50 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_PRETTY_FLOWERS
# 51 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_COLORFUL_PLANT
# 52 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_BIG_PLANT
# 53 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_GORGEOUS_PLANT
# 54 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_FENCE_LENGTH
# 55 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_FENCE_WIDTH
# 56 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_FENCE_WIDTH
# 57 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_NONE
# 58 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 59 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 60 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 61 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.align 2
# 62 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Pokemart_Mulch:
# 63 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_GROWTH_MULCH
# 64 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_DAMP_MULCH
# 65 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_STABLE_MULCH
# 66 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_SURPRISE_MULCH
# 67 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_NONE
# 68 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 69 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 70 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 71 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 72 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
# 73 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 74 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 75 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail
# 76 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 77 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 78 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 79 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 80 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail::
# 81 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 82 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 83 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 84 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 85 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 86 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 87 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 88 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl::
# 89 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 90 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 91 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	dotimebasedevents
# 92 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry
# 93 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers, MSGBOX_DEFAULT
# 94 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	random 8
# 95 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 96 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giveitem VAR_RESULT
# 97 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 98 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
# 99 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
# 100 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 101 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 102 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 103 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry::
# 104 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
# 105 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 106 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 107 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 108 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Text_ShopOwner_Decorations:
# 109 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "¡Bienvenid{OA} seas a la Floristería!\p¿Te gustaría comprar decoraciones?$"
# 110 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	
# 111 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Text_ShopOwner_Berries:
# 112 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "Ah, ¿Quieres comprar Abono de Baya?$"
# 113 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 114 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Text_ShopOwner_ComeBackSoon:
# 115 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "¡Vuelve pronto!$"

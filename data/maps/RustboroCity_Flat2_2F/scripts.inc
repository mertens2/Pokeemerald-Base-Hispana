# 1 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_MapScripts::
# 3 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_OldMan::
# 6 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays, MSGBOX_NPC
# 7 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 8 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 9 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_NinjaBoy::
# 10 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	lock
# 11 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	faceplayer
# 12 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_GavePremierBall
# 13 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
# 14 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	giveitem ITEM_QUICK_BALL, 2
# 15 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 16 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
# 17 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	release
# 18 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 19 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 20 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_GavePremierBall::
# 21 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
# 22 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	release
# 23 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 24 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 25 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays:
# 26 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "Cuando era joven, Devor era un pequeño\nnegocio familiar. ¡Cómo pasa el tiempo!$"
# 27 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 28 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt:
# 29 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "¡Mi papi trabaja en Devon, y le\ndan de estas gratis!\pA mí no me sirven,\n¡Así que toma!$"
# 30 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 31 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo:
# 32 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "¡Ojalá trabaje ahí cuando sea grande!$"

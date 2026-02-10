# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
.set LOCALID_STEVEN, 1
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_MapScripts::
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	 map_script MAP_SCRIPT_ON_LOAD, GraniteCave_StevensRoom_CoverItAll 
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.byte 0
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_CoverItAll::
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_set FLAG_REGIGIGAS_UNLOCKED, GraniteCave_StevensRoom_UnCoverItAll
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 14, 9, METATILE_Cave_Mountain_BottomMid, TRUE
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 15, 9, METATILE_Cave_Mountain_BottomMid, TRUE
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 16, 9, METATILE_Cave_Mountain_BottomMid, TRUE
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 14, 10, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 15, 10, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 16, 10, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special DrawWholeMapView
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_UnCoverItAll::
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 14, 9, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 15, 9, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 16, 9, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 14, 10, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 15, 10, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 16, 10, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special DrawWholeMapView
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_Braille_1::
# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_set FLAG_REGIGIGAS_UNLOCKED, GraniteCave_Braille_1_Done
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	braillemsgbox GraniteCave_Braille_1Text
# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto GraniteCave_Braille_Check
# 127 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 128 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 129 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 130 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_Braille_2::
# 131 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_set FLAG_REGIGIGAS_UNLOCKED, GraniteCave_Braille_1_Done
# 132 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	braillemsgbox GraniteCave_Braille_2Text
# 133 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto GraniteCave_Braille_Check
# 134 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 135 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 136 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 137 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_Braille_Check::
# 138 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar 0x8005, SPECIES_REGICE
# 139 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special CheckSpecies
# 140 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 0
# 141 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_Braille_None
# 142 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar 0x8005, SPECIES_REGIROCK
# 143 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special CheckSpecies
# 144 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 0
# 145 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_Braille_None
# 146 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar 0x8005, SPECIES_REGISTEEL
# 147 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special CheckSpecies
# 148 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 0
# 149 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_Braille_None
# 150 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar 0x8005, SPECIES_REGIDRAGO
# 151 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special CheckSpecies
# 152 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 0
# 153 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_Braille_None
# 154 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar 0x8005, SPECIES_REGIELEKI
# 155 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special CheckSpecies
# 156 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, 0
# 157 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	goto_if_eq GraniteCave_Braille_None
# 158 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, 2 
# 159 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8005, 2 
# 160 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8006, 4
# 161 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8007, 4
# 162 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special ShakeCamera
# 163 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitstate
# 164 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_PIN
# 165 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 166 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 167 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 168 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, 4
# 169 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8005, 4
# 170 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8006, 6
# 171 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8007, 3
# 172 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special ShakeCamera
# 173 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitstate
# 174 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 175 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, 6
# 176 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8005, 6
# 177 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8006, 8
# 178 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8007, 2
# 179 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special ShakeCamera
# 180 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitstate
# 181 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 182 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_DOOR
# 183 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 14, 9, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
# 184 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 15, 9, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 185 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 16, 9, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
# 186 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 14, 10, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
# 187 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 15, 10, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
# 188 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setmetatile 16, 10, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
# 189 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special DrawWholeMapView
# 190 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGIGIGAS_UNLOCKED
# 191 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	message GraniteCave_StevensRoom_Text_Done
# 192 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 35
# 193 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 194 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 195 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 196 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 197 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_Braille_1_Done::
# 198 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_Done
# 199 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 200 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 201 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 202 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 203 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 204 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_Braille_None::
# 205 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 206 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 207 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 208 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven::
# 209 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 210 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 211 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeaker Unknown
# 212 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
# 213 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeaker Steven
# 214 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe2, MSGBOX_DEFAULT
# 215 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 216 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	
# 217 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 218 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 219 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 220 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeaker Steven
# 221 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
# 222 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	
# 223 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 224 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM47
# 225 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 226 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 227 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeaker Steven
# 228 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 229 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 230 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	
# 231 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 232 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 233 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 234 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 235 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 236 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 237 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 238 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setspeaker Steven
# 239 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 240 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 241 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	
# 242 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
# 243 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
# 244 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 245 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 246 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 247 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_STEVEN
# 248 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 249 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 250 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 251 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 252 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 253 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 254 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 255 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 256 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 257 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 258 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 259 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 260 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 261 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 262 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 263 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 264 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 265 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 266 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 267 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 268 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 269 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 270 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 271 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 272 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 273 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 274 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 275 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 276 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 277 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 278 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 279 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 280 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 281 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 282 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 283 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 284 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 285 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 286 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 287 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 288 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 289 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 290 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 291 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 292 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 293 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 294 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 295 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 296 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 297 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 298 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 299 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 300 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 301 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 302 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 303 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 304 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 305 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 306 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end

GraniteCave_StevensRoom_Text_Done::
# 1 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "¡Una puerta se abrió!$"

GraniteCave_StevensRoom_Text_ImStevenLetterForMe::
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Ah, ¡Hola, mi nombre es {COLOR BLUE}Steven{COLOR DARK_GRAY}!$"

GraniteCave_StevensRoom_Text_ImStevenLetterForMe2::
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Amo la geología, y la historia de Hoenn,\n"
	.string "por eso vine a esta cueva.\p"
	.string "Estas rocas aquí datan de hace más de\n"
	.string "10.000 años, y parecen estar llenas de\l"
	.string "energía única de gran poder.\p"
	.string "Ah, ¿Una carta para mí?\p"
	.string "Ja, ¿Porqué me miras así? Parece que me\n"
	.string "estuvieras callando.\p"
	.string "¡Pero gracias por traerla!$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis::
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "¡Voy a darte esto como\n"
	.string "agradecimiento!$"

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister::
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Creo que sería útil mantener el\n"
	.string "contacto, así que voy a registrarme\l"
	.string "en\l"
	.string "tu PokéNav.\p"
	.string "… … … … … …$"

GraniteCave_StevensRoom_Text_RegisteredSteven::
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steven se registró en tu PokéNav, por\n"
	.string "algún motivo.$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong::
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Ah, debería irme ahora.$"

GraniteCave_StevensRoom_Text_OhBagIsFull::
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your BAG is full…\n"
	.string "That's too bad, then.$"

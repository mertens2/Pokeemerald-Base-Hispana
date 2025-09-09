# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8004
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "AQUILES: ¡No te muevas!$"
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "AQUILES: ¡Jua, jua, jua!\n"
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Así que eres tú otra vez…$"
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "AQUILES: ¡Observa!\p"
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¡Contempla la belleza de la figura\n"
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "durmiente del antiguo POKéMON KYOGRE!\p"
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "He esperado tanto a que llegara\n"
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "este día…$"
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "AQUILES: Me sorprende que hayas\n"
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "logrado llegar hasta aquí.\p"
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Pero ya da igual.\p"
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¡Para que mi sueño se cumpla,\n"
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "tengo que quitarte de en medio!$"
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¡¿Cómo?!\n"
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¡¿He perdido contra ti?!$"
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "AQUILES: Jua, jua, jua…\p"
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Debo felicitarte. Realmente tienes\n"
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "un enorme talento.\p"
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Pero…\n"
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¡yo tengo esto en mi poder!\p"
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Con la ESFERA ROJA, puedo hacer\n"
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "que KYOGRE…$"
# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¡La ESFERA ROJA ha empezado\n"
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "a brillar sola de repente!$"
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "AQUILES: ¡¿Qué?!\p"
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Yo no he hecho nada.\n"
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¿Por qué la ESFERA ROJA ha…?\p"
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¿Adónde ha ido KYOGRE?$"
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "AQUILES: ¿Mmm…? Es un mensaje\n"
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "de los miembros del exterior…$"
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "AQUILES: Sí, ¿qué pasa?\p"
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Mmmm…\n"
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¿Está lloviendo una burrada?\p"
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Muy bien, es lo que tenía que pasar.\n"
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Por eso despertamos a KYOGRE,\l"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "para hacer realidad la visión del\l"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "EQUIPO AQUA: un mundo con más agua.\p"
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¡¿Qué?!\p"
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¿Que está lloviendo mucho más de lo que\n"
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "calculamos? ¿Tanto que es peligroso?\p"
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "No puede ser…\n"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "No es posible…\p"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¡Mantened vuestras posiciones e\n"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "intentad controlar la situación!$"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "AQUILES: Hay algo que falla…\p"
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Se supone que la ESFERA ROJA puede\n"
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "despertar y controlar a KYOGRE…\p"
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Pero… ¿por qué?\n"
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¿Por qué ha desaparecido KYOGRE?\p"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¡¿Por qué?!$"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAGNO: ¿Qué has hecho?\p"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "AQUILES, has despertado a KYOGRE,\n"
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¿verdad?\p"
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¿Qué ocurrirá si no deja de diluviar\n"
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "nunca más?\p"
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "La tierra firme acabará siendo tragada\n"
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "por el mar…$"
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "AQUILES: ¿Qué estás diciendo?\n"
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¡No te des esas ínfulas conmigo!\p"
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¿No fuisteis los del EQUIPO MAGMA\n"
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "quienes enfurecisteis a GROUDON?\p"
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "La ESFERA ROJA debería permitirme\n"
# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "controlar a KYOGRE…\p"
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Esto no puede estar pasando…$"
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAGNO: ¡No tenemos tiempo para\n"
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "discutir sobre eso ahora!\p"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¡Sal y verás el panorama!\p"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "¡Comprueba si es éste el mundo\n"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "que querías crear!$"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAGNO: ¡{PLAYER}, vamos, tú también\n"
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "tienes que salir de aquí!$"

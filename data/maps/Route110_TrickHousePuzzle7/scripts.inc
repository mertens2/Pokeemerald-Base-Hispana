# 1 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHousePuzzle7_OnResume
# 4 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle7_OnTransition
# 5 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle7_OnLoad
# 6 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHousePuzzle7_OnFrame
# 7 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.byte 0
# 8 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 9 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Puzzle Room 7 in RSE uses whatever puzzle Mossdeep Gym uses
# 10 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Because Mossdeep Gym was redesigned for Emerald, theres a good deal of leftover script from the old R/S puzzle
# 11 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 12 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnResume:
# 13 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles
# 14 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 15 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles::
# 17 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 18 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 19 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Leftover from R/S, none of the below metatile scripts are ever called
# 20 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 21 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnTransition:
# 22 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 23 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 24 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_TeleportedTransition::
# 25 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 26 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 27 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnLoad:
# 28 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 29 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 30 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnFrame:
# 31 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.2byte 0
# 32 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 33 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_ClearState2::
# 34 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 35 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 36 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Scroll::
# 37 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 38 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE, 0, Route110_TrickHousePuzzle7_EventScript_FoundScroll
# 39 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 40 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 41 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 42 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_FoundScroll::
# 43 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE, 1
# 44 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 45 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 46 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 47 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Unused, leftover from R/S
# 48 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 49 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ All the below switch scripts are unused leftover from R/S
# 50 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 51 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ From here is where the new, actually used puzzle scripts begin
# 52 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_YellowButton::
# 53 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 54 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 55 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 56 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 57 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 0
# 58 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 60 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 62 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 63 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 64 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_BlueButton::
# 65 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 66 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 67 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 68 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 69 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 1
# 70 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 72 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 74 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 75 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 76 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_GreenButton::
# 77 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 78 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 79 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 80 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 81 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 2
# 82 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 84 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 86 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 87 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 88 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_PurpleButton::
# 89 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 90 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 91 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 92 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 93 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 3
# 94 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 96 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 98 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 99 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 100 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Unused
# 101 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_RedButton::
# 102 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 103 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 104 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 105 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 106 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 4
# 107 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 109 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 111 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 112 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 113 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Joshua::
# 114 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_JOSHUA, Route110_TrickHousePuzzle7_Text_JoshuaIntro, Route110_TrickHousePuzzle7_Text_JoshuaDefeat
# 115 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 117 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 118 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Patricia::
# 119 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_PATRICIA, Route110_TrickHousePuzzle7_Text_PatriciaIntro, Route110_TrickHousePuzzle7_Text_PatriciaDefeat
# 120 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 122 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 123 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Alexis::
# 124 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_ALEXIS, Route110_TrickHousePuzzle7_Text_AlexisIntro, Route110_TrickHousePuzzle7_Text_AlexisDefeat
# 125 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_AlexisPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 127 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 128 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Mariela::
# 129 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_MARIELA, Route110_TrickHousePuzzle7_Text_MarielaIntro, Route110_TrickHousePuzzle7_Text_MarielaDefeat
# 130 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_MarielaPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 132 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 133 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Alvaro::
# 134 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_ALVARO, Route110_TrickHousePuzzle7_Text_AlvaroIntro, Route110_TrickHousePuzzle7_Text_AlvaroDefeat
# 135 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_AlvaroPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 137 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 138 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Everett::
# 139 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_EVERETT, Route110_TrickHousePuzzle7_Text_EverettIntro, Route110_TrickHousePuzzle7_Text_EverettDefeat
# 140 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_EverettPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 142 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 143 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_WroteSecretCodeLockOpened::
# 144 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 145 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "on the door.\p"
# 146 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "“TRICK MASTER is huggable.”\n"
# 147 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "… … … … … … … …\p"
# 148 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "The lock clicked open!$"
# 149 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 150 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaIntro:
# 151 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "The TRICK MASTER always vanishes\n"
# 152 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "like smoke. How does he do it?$"
# 153 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 154 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaDefeat:
# 155 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Aiyeeeh! You're much too strong!\n"
# 156 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "How do you do it?$"
# 157 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 158 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaPostBattle:
# 159 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I wish I could appear and disappear as\n"
# 160 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "if I were smoke, too.$"
# 161 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 162 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaIntro:
# 163 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Going around the same spot…\n"
# 164 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It begets ill fortune…$"
# 165 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 166 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaDefeat:
# 167 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Defeated!\n"
# 168 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It's a bad sign…$"
# 169 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 170 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaPostBattle:
# 171 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I've circled the same spot over ten\n"
# 172 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "times now… It's ill fortune…$"
# 173 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 174 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisIntro:
# 175 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Whoever wins will get through here\n"
# 176 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "first. That's the feeling I get.$"
# 177 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 178 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisDefeat:
# 179 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Oh!\n"
# 180 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Well, go ahead, then!$"
# 181 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 182 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisPostBattle:
# 183 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "You're solving all the puzzles in the\n"
# 184 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "TRICK HOUSE. That's the feeling I get.$"
# 185 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 186 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaIntro:
# 187 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Nufufufu, here at last!\n"
# 188 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Let's get right with it!$"
# 189 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 190 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaDefeat:
# 191 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "You're so casual about winning!$"
# 192 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 193 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaPostBattle:
# 194 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Humph! I'm not upset!\n"
# 195 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Not me!$"
# 196 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 197 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroIntro:
# 198 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I ever so closely watched you coming!$"
# 199 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 200 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroDefeat:
# 201 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "This outcome I didn't see coming…$"
# 202 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 203 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroPostBattle:
# 204 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Well, anyway, we both picked a weird\n"
# 205 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "place to get acquainted.\p"
# 206 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "As one weirdo to another,\n"
# 207 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "let's do our best!$"
# 208 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 209 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettIntro:
# 210 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It's awfully cramped in here…$"
# 211 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 212 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettDefeat:
# 213 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Oh, yes, strong you are.$"
# 214 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 215 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettPostBattle:
# 216 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I was hoping to switch places with you\n"
# 217 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "when I beat you, but…$"

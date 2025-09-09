# 1 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_MapScripts::
# 3 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 5 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Greeter::
# 6 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum, MSGBOX_SIGN
# 7 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 8 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 9 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator::
# 10 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 11 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_1F_CURATOR, Common_Movement_FacePlayer
# 12 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	message LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
# 13 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmessage
# 14 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	multichoice 20, 8, MULTI_VIEWED_PAINTINGS, TRUE
# 15 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings
# 16 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet
# 17 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 18 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 19 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet::
# 20 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime, MSGBOX_NPC
# 21 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 22 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 23 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings::
# 24 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings, MSGBOX_YESNO
# 25 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested
# 26 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings
# 27 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 28 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 29 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested::
# 30 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat, MSGBOX_SIGN
# 31 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	releaseall
# 32 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 33 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 34 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings::
# 35 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe, MSGBOX_SIGN
# 36 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_1F_CURATOR, LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs
# 37 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	removeobject LOCALID_MUSEUM_1F_CURATOR
# 39 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	switch VAR_FACING
# 40 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_NORTH, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth
# 41 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_WEST, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest
# 42 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_EAST, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast
# 43 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 44 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 45 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth::
# 46 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 47 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth
# 48 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 49 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 50 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
# 51 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 52 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 53 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest::
# 54 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 55 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest
# 56 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 58 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
# 59 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 60 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 61 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast::
# 62 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 63 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast
# 64 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 66 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
# 67 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 68 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 69 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs:
# 70 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 71 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 72 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 73 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest:
# 74 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_left
# 75 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 76 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 77 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 78 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast:
# 79 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_right
# 80 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 81 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 82 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 83 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth:
# 84 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 85 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 86 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 87 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 88 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_OldPainting::
# 89 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting, MSGBOX_SIGN
# 90 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 91 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 92 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FantasyPainting::
# 93 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery, MSGBOX_SIGN
# 94 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 95 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 96 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_WomanPainting::
# 97 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman, MSGBOX_SIGN
# 98 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 99 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 100 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_LegendaryPokemonPainting::
# 101 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon, MSGBOX_SIGN
# 102 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 103 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 104 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_GrassPokemonPainting::
# 105 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon, MSGBOX_SIGN
# 106 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 107 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 108 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_BerryPainting::
# 109 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries, MSGBOX_SIGN
# 110 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 111 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 112 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_EventScript_BirdSculpture::
# 113 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica, MSGBOX_SIGN
# 114 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 115 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 116 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_PokeBallSculpture::
# 117 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone, MSGBOX_SIGN
# 118 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 119 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 120 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_StoneTablet::
# 121 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText, MSGBOX_SIGN
# 122 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 123 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 124 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_SchoolKidM::
# 125 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts, MSGBOX_NPC
# 126 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 127 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 128 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Artist1::
# 129 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration, MSGBOX_NPC
# 130 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 131 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 132 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_NinjaBoy::
# 133 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty, MSGBOX_SIGN
# 134 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 135 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 136 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Woman1::
# 137 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable, MSGBOX_SIGN
# 138 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 139 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 140 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Woman2::
# 141 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings, MSGBOX_NPC
# 142 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 143 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 144 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_PsychicM::
# 145 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful, MSGBOX_NPC
# 146 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 147 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 148 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Artist2::
# 149 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lock
# 150 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	faceplayer
# 151 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings, MSGBOX_DEFAULT
# 152 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	closemessage
# 153 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_1F_ARTIST_2, Common_Movement_FaceOriginalDirection
# 154 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 155 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	release
# 156 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 157 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 158 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FatMan::
# 159 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination, MSGBOX_NPC
# 160 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 161 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 162 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum:
# 163 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Hola. Estás en el MUSEO de CALAGUA.\p"
# 164 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Te rogamos que entres y disfrutes\n"
# 165 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "de nuestra extraordinaria colección\l"
# 166 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "de arte sobre temática POKéMON.$"
# 167 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 168 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings:
# 169 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Soy el DIRECTOR de este MUSEO\n"
# 170 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "de Bellas Artes.\p"
# 171 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Me llena de alegría ver que alguien tan\n"
# 172 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "joven como tú se interesa por el arte.\p"
# 173 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "¿Ya has visto nuestra colección\n"
# 174 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "de pintura?$"
# 175 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 176 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime:
# 177 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Entonces no te molesto más.\n"
# 178 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Tómate el tiempo que quieras.$"
# 179 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 180 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings:
# 181 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "¿Ah, sí? Tengo entendido que\n"
# 182 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "entrenas POKéMON.\p"
# 183 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "¿También te gusta el arte?$"
# 184 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 185 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat:
# 186 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Oh, qué pena…\p"
# 187 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "En cualquier caso te agradezco que\n"
# 188 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "hayas venido a visitar el MUSEO.$"
# 189 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 190 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe:
# 191 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "¡Espléndido!\p"
# 192 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "En ese caso, ¿te importaría\n"
# 193 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "acompañarme?$"
# 194 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 195 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting:
# 196 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Éste es un cuadro muy antiguo.\n"
# 197 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Necesita una buena restauración…$"
# 198 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 199 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery:
# 200 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Plasma un paisaje de tiempos antiguos.\n"
# 201 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "La escena es extraña y misteriosa.$"
# 202 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 203 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman:
# 204 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Es un cuadro de una hermosa mujer\n"
# 205 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "con un POKéMON en su regazo.$"
# 206 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 207 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon:
# 208 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Es una pintura de un POKéMON\n"
# 209 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "legendario de tiempos remotos.\p"
# 210 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Es pura creación artística.$"
# 211 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 212 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon:
# 213 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Es una imagen de unos POKéMON PLANTA\n"
# 214 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "que se dejan mecer por una suave brisa.\p"
# 215 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Parecen muy felices.$"
# 216 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 217 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries:
# 218 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Plasma un cesto de BAYAS\n"
# 219 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "con un aspecto delicioso.\p"
# 220 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Ñam, ñam, ¡qué hambre!$"
# 221 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 222 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica:
# 223 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Es una réplica de una escultura\n"
# 224 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "muy famosa que representa a\l"
# 225 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "un antiguo POKéMON PÁJARO.$"
# 226 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 227 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone:
# 228 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Es una gran POKé BALL esculpida\n"
# 229 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "en roca basáltica.\p"
# 230 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Al parecer se usaba en los festivales\n"
# 231 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "que se celebraban antiguamente.$"
# 232 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 233 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText:
# 234 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Es una gran losa de piedra cincelada\n"
# 235 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "con POKéMON y gran cantidad de\l"
# 236 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "pequeños caracteres pertenecientes\l"
# 237 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "a un antiguo y desconocido idioma.$"
# 238 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 239 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_WorksOfMagnificence:
# 240 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Hmmm…\n"
# 241 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "What works of great magnificence…$"
# 242 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 243 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts:
# 244 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Combatir con POKéMON es\n"
# 245 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "divertido, cierto.\p"
# 246 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Pero no por eso hay que olvidarse\n"
# 247 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "de alimentar nuestro espíritu\l"
# 248 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "contemplando obras de arte.$"
# 249 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 250 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration:
# 251 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Este MUSEO de ARTE alberga\n"
# 252 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "una gran colección de pintura.\p"
# 253 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Y el DIRECTOR es muy amable.\p"
# 254 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Para los artistas como yo, este MUSEO\n"
# 255 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "es una fuente de inspiración.$"
# 256 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 257 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty:
# 258 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "¡Qué señora tan guapa!\n"
# 259 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "¡Es casi tan guapa como mamá!$"
# 260 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 261 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable:
# 262 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "¡Qué POKéMON tan encantador!\n"
# 263 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "¡Casi tanto como mi niño!$"
# 264 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 265 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings:
# 266 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Me han dicho que han ampliado\n"
# 267 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "la colección de este MUSEO de ARTE.\p"
# 268 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Por eso he venido a toda máquina.\p"
# 269 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "¡Los nuevos cuadros están\n"
# 270 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "en el primer piso!$"
# 271 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 272 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful:
# 273 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Últimamente el DIRECTOR\n"
# 274 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "está más contento de lo normal.\p"
# 275 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Seguro que le ha pasado algo\n"
# 276 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "muy bueno. Sin duda.$"
# 277 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 278 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings:
# 279 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "He venido aquí a ver muchas grandes\n"
# 280 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "obras y aprender de los maestros.\p"
# 281 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Mi sueño sería exponer mis\n"
# 282 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "cuadros aquí.$"
# 283 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 284 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination:
# 285 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "El MUSEO de ARTE recibe cada vez\n"
# 286 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "más turistas.\p"
# 287 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Le viene muy bien a CALAGUA.\n"
# 288 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "¡No, le viene bien a todo HOENN!\p"
# 289 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Y me han dicho que un ENTRENADOR\n"
# 290 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "ha sido quien ha conseguido las obras.$"

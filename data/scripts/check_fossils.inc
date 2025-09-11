ScriptThereYouGo::
	lockall
	playse SE_PIN
	bufferspeciesname STR_VAR_2, VAR_0x8004
	removeitem VAR_ITEM_ID, 1
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
    msgbox Text_Fossil_WithThatICan
	delay 10
	closemessage
	applymovement VAR_LAST_TALKED, Movement_Work
	playse SE_NOTE_C
	delay 20
	playse SE_NOTE_D
	delay 20
	playse SE_NOTE_E
	delay 20
	playse SE_NOTE_F
	delay 20
	waitmovement 0
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	playfanfare MUS_OBTAIN_ITEM
    msgbox Text_Fossil_ThereYouGo
	givemon VAR_0x8004, 20, ITEM_NONE
	releaseall
    end

Movement_Work:
	face_up
	walk_in_place_slow_up
	walk_in_place_slow_up
	delay_16
	walk_in_place_fast_up
	walk_in_place_fast_up
	delay_8
	walk_in_place_faster_up
	walk_in_place_faster_up
	delay_8
	walk_in_place_fast_up
	walk_in_place_fast_up
	step_end

ScriptThatsNotAFossil::
    msgbox Text_Fossil_NotAFossil
	releaseall
	end

ScriptYouDontHaveFossil::
	lockall
	msgbox Text_Fossil_YouDont
	release
	end

Fossils_ThatsATop::
	lockall
	msgbox Text_Fossil_ThatsNotABottom
	release
	end

Fossils_ThatsABottom::
	lockall
	msgbox Text_Fossil_ThatsNotATop
	release
	end


Fossils_Noticed_One::
	release
	end
Fossils_Check::
	lockall
	bufferitemname STR_VAR_1, VAR_ITEM_ID
	switch VAR_ITEM_ID
	case ITEM_HELIX_FOSSIL, Fossils_Helix
	case ITEM_DOME_FOSSIL, Fossils_Dome
	case ITEM_OLD_AMBER, Fossils_Amber
	case ITEM_CLAW_FOSSIL, Fossils_Claw
	case ITEM_ROOT_FOSSIL, Fossils_Root
	case ITEM_ARMOR_FOSSIL, Fossils_Armor
	case ITEM_SKULL_FOSSIL, Fossils_Skull
	case ITEM_COVER_FOSSIL, Fossils_Cover
	case ITEM_PLUME_FOSSIL, Fossils_Plume
	case ITEM_JAW_FOSSIL, Fossils_Jaw
	case ITEM_SAIL_FOSSIL, Fossils_Sail
	case ITEM_FOSSILIZED_BIRD, Fossils_Bird
    case ITEM_FOSSILIZED_FISH, Fossils_Fish
    case ITEM_FOSSILIZED_DRAKE, Fossils_Drake
    case ITEM_FOSSILIZED_DINO, Fossils_Dino
	goto ScriptThatsNotAFossil
	release
	end

Fossils_Helix::
	setvar VAR_0x8004, SPECIES_OMANYTE
    goto ScriptThereYouGo

Fossils_Dome::
	setvar VAR_0x8004, SPECIES_KABUTO
    goto ScriptThereYouGo

Fossils_Amber::
	setvar VAR_0x8004, SPECIES_AERODACTYL
    goto ScriptThereYouGo

Fossils_Claw::
	setvar VAR_0x8004, SPECIES_ANORITH
    goto ScriptThereYouGo
	
Fossils_Root::
	setvar VAR_0x8004, SPECIES_LILEEP
    goto ScriptThereYouGo

Fossils_Armor::
	setvar VAR_0x8004, SPECIES_SHIELDON
    goto ScriptThereYouGo

Fossils_Skull::
	setvar VAR_0x8004, SPECIES_CRANIDOS
    goto ScriptThereYouGo

Fossils_Cover::
	setvar VAR_0x8004, SPECIES_TIRTOUGA
    goto ScriptThereYouGo

Fossils_Plume::
	setvar VAR_0x8004, SPECIES_ARCHEN
    goto ScriptThereYouGo

Fossils_Jaw::
	setvar VAR_0x8004, SPECIES_TYRUNT
    goto ScriptThereYouGo

Fossils_Sail::
	setvar VAR_0x8004, SPECIES_AMAURA
    goto ScriptThereYouGo

Fossils_Bird::
	lockall
	playse SE_PIN
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Text_Fossil_ThatsATopFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ScriptThatsNotAFossil
	msgbox Text_Fossil_WhichOne
	chooseitem POCKET_ITEMS
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_BIRD
	bufferitemname STR_VAR_2, VAR_ITEM_ID
	switch VAR_ITEM_ID
	case ITEM_FOSSILIZED_BIRD, Fossils_ThatsATop
    case ITEM_FOSSILIZED_FISH, Fossils_ThatsATop
    case ITEM_FOSSILIZED_DRAKE, Fossils_Drake_Bird
    case ITEM_FOSSILIZED_DINO, Fossils_Dino_Bird
	goto ScriptThatsNotAFossil
	release
	end

Fossils_Fish::
	lockall
	playse SE_PIN
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Text_Fossil_ThatsATopFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ScriptThatsNotAFossil
	msgbox Text_Fossil_WhichOne
	chooseitem POCKET_ITEMS
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_FISH
	bufferitemname STR_VAR_2, VAR_ITEM_ID
	switch VAR_ITEM_ID
	case ITEM_FOSSILIZED_BIRD, Fossils_ThatsATop
    case ITEM_FOSSILIZED_FISH, Fossils_ThatsATop
    case ITEM_FOSSILIZED_DRAKE, Fossils_Drake_Fish
    case ITEM_FOSSILIZED_DINO, Fossils_Dino_Fish
	goto ScriptThatsNotAFossil
	release
	end

Fossils_Drake::
	lockall
	playse SE_PIN
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Text_Fossil_ThatsABottomFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ScriptThatsNotAFossil
	msgbox Text_Fossil_WhichOne
	chooseitem POCKET_ITEMS
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_DRAKE
	bufferitemname STR_VAR_2, VAR_ITEM_ID
	switch VAR_ITEM_ID
	case ITEM_FOSSILIZED_BIRD, Fossils_Drake_Bird
    case ITEM_FOSSILIZED_FISH, Fossils_Drake_Fish
    case ITEM_FOSSILIZED_DRAKE, Fossils_ThatsABottom
    case ITEM_FOSSILIZED_DINO, Fossils_ThatsABottom
	goto ScriptThatsNotAFossil
	release
	end

Fossils_Dino::
	lockall
	playse SE_PIN
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Text_Fossil_ThatsABottomFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ScriptThatsNotAFossil
	msgbox Text_Fossil_WhichOne
	chooseitem POCKET_ITEMS
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_DINO
	bufferitemname STR_VAR_2, VAR_ITEM_ID
	switch VAR_ITEM_ID
	case ITEM_FOSSILIZED_BIRD, Fossils_Dino_Bird
    case ITEM_FOSSILIZED_FISH, Fossils_Dino_Fish
    case ITEM_FOSSILIZED_DRAKE, Fossils_ThatsABottom
    case ITEM_FOSSILIZED_DINO, Fossils_ThatsABottom
	goto ScriptThatsNotAFossil
	release
	end

Fossils_Drake_Bird::
	bufferspeciesname STR_VAR_3, SPECIES_DRACOZOLT
	msgbox Text_Fossil_WithThisAndThis
	delay 10
	closemessage
	applymovement VAR_LAST_TALKED, Movement_Work
	playse SE_NOTE_C
	delay 20
	playse SE_NOTE_D
	delay 20
	playse SE_NOTE_E
	delay 20
	playse SE_NOTE_F
	delay 20
	playfanfare MUS_LEVEL_UP
	waitmovement 0
	delay 20
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	removeitem ITEM_FOSSILIZED_BIRD, 1
	removeitem ITEM_FOSSILIZED_DRAKE, 1
	givemon SPECIES_DRACOZOLT, 25, ITEM_NONE
	playfanfare MUS_OBTAIN_ITEM
	msgbox Text_Fossil_HereYouGoTwo
	releaseall
	end

Fossils_Dino_Bird::
	bufferspeciesname STR_VAR_3, SPECIES_ARCTOZOLT
	msgbox Text_Fossil_WithThisAndThis
	delay 10
	closemessage
	applymovement VAR_LAST_TALKED, Movement_Work
	playse SE_NOTE_C
	delay 20
	playse SE_NOTE_D
	delay 20
	playse SE_NOTE_E
	delay 20
	playse SE_NOTE_F
	delay 20
	playfanfare MUS_LEVEL_UP
	waitmovement 0
	delay 20
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	removeitem ITEM_FOSSILIZED_BIRD, 1
	removeitem ITEM_FOSSILIZED_DINO, 1
	givemon SPECIES_ARCTOZOLT, 25, ITEM_NONE
	playfanfare MUS_OBTAIN_ITEM
	msgbox Text_Fossil_HereYouGoTwo
	releaseall
	end

Fossils_Drake_Fish::
	bufferspeciesname STR_VAR_3, SPECIES_DRACOVISH
	msgbox Text_Fossil_WithThisAndThis
	delay 10
	closemessage
	applymovement VAR_LAST_TALKED, Movement_Work
	playse SE_NOTE_C
	delay 20
	playse SE_NOTE_D
	delay 20
	playse SE_NOTE_E
	delay 20
	playse SE_NOTE_F
	delay 20
	playfanfare MUS_LEVEL_UP
	waitmovement 0
	delay 20
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	removeitem ITEM_FOSSILIZED_FISH, 1
	removeitem ITEM_FOSSILIZED_DRAKE, 1
	givemon SPECIES_DRACOVISH, 25, ITEM_NONE
	playfanfare MUS_OBTAIN_ITEM
	msgbox Text_Fossil_HereYouGoTwo
	releaseall
	end

Fossils_Dino_Fish::
	bufferspeciesname STR_VAR_3, SPECIES_ARCTOVISH
	msgbox Text_Fossil_WithThisAndThis
	delay 10
	closemessage
	applymovement VAR_LAST_TALKED, Movement_Work
	playse SE_NOTE_C
	delay 20
	playse SE_NOTE_D
	delay 20
	playse SE_NOTE_E
	delay 20
	playse SE_NOTE_F
	delay 20
	playfanfare MUS_LEVEL_UP
	waitmovement 0
	delay 20
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	removeitem ITEM_FOSSILIZED_FISH, 1
	removeitem ITEM_FOSSILIZED_DINO, 1
	givemon SPECIES_ARCTOVISH, 25, ITEM_NONE
	playfanfare MUS_OBTAIN_ITEM
	msgbox Text_Fossil_HereYouGoTwo
	releaseall
	end

Text_Fossil_YouDont::
	.string "Eso no es un fósil.$"

Text_Fossil_WithThatICan::
	.string "¡Ah, un {STR_VAR_1}!\nCon él, podré resucitar un\l{STR_VAR_2}.\pDame un momento.$"

Text_Fossil_NotAFossil::
	.string "Ah, supongo que te arrepentiste.\p¡Vuelve cuando quieras!$"
	
Text_Fossil_ThereYouGo::
    .string "¡Has dado un {STR_VAR_1}, y has\nrecibido un {STR_VAR_2} a cambio!$"

Text_Fossil_ThatsATopFossil::
	.string "¡No puede ser!\n¡Es una parte superior de un fósil\lde la Región Galar!\p¡Estos son rarísimos!\pSería un honor combinar este fósil.\p¿Me lo permite?$"

Text_Fossil_ThatsABottomFossil::
	.string "¡No puede ser!\n¡Es una parte inferior de un fósil\lde la Región Galar!\p¡Estos son rarísimos!\pSería un honor combinar este fósil.\p¿Me lo permite?$"

Text_Fossil_WithThisAndThis::
	.string "El {STR_VAR_1} y el {STR_VAR_2}\nformarán un {STR_VAR_3}.\pIniciaré el proceso ahora.$"

Text_Fossil_HereYouGoTwo::
	.string "¡Has recibido un {STR_VAR_3} a cambio del\n {STR_VAR_1} y el {STR_VAR_2}!$"

Text_Fossil_ThatsNotABottom::
	.string "Esa no es una parte inferior.$"

Text_Fossil_ThatsNotATop::
	.string "Esa no es una parte superior.$"

Text_Fossil_WhichOne::
	.string "¿Con qué fósil te gustaría combinar ese\n{STR_VAR_1}?$"

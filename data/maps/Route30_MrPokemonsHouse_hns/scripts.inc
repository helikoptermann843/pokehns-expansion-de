.set LOCALID_MRPOKEMON, 2
.set LOCALID_ROUTE30_OAK, 3
.set LOCALID_MRPOKEMON2, 1

Route30_MrPokemonsHouse_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MrPokemonHouse_OnFrame
	.byte 0

MrPokemonHouse_OnFrame::
	map_script_2 VAR_CHERRYGROVE_CITY_STATE, 1, MrPokemonHouse_EventScript_GiveEgg
	.2byte 0

MrPokemonHouse_EventScript_GiveEgg::
	lock
	playse SE_PIN
	applymovement LOCALID_MRPOKEMON, Common_Movement_ExclamationMark	
	delay 60
	turnobject LOCALID_MRPOKEMON, DIR_SOUTH
	msgbox MrPokemonHouse_Text_Intro1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, MrPokemonHouse_Movement_MeetMrPokemon
	waitmovement 0
	msgbox MrPokemonHouse_Text_Intro2, MSGBOX_DEFAULT

	giveitem ITEM_MYSTERY_EGG

	msgbox MrPokemonHouse_Text_Intro3, MSGBOX_DEFAULT
	msgbox MrPokemonHouse_Text_Intro4, MSGBOX_DEFAULT
	turnobject LOCALID_ROUTE30_OAK, DIR_WEST
	msgbox MrPokemonHouse_Text_Intro5, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_HG_OAK, TRUE
	applymovement LOCALID_ROUTE30_OAK, MrPokemonHouse_Movement_OakToPlayer
	waitmovement 0 
	turnobject LOCALID_PLAYER, DIR_EAST
	msgbox MrPokemonHouse_Text_OakIntro, MSGBOX_DEFAULT
	

	playfanfare MUS_OBTAIN_ITEM
	message MrPokemonHouse_Text_GetDex
	waitfanfare

	
	msgbox MrPokemonHouse_Text_OakParting MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE30_OAK, MrPokemonHouse_Movement_OakLeave
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_ROUTE30_OAK
	setflag FLAG_DELIVERED_EGG
	turnobject LOCALID_PLAYER DIR_NORTH
	fadedefaultbgm
	msgbox MrPokemonHouse_Text_Heal, MSGBOX_DEFAULT
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox MrPokemonHouse_Text_DependingOnYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MRPOKEMON, MrPokemonHouse_Movement_MrPokemon_Leave
	waitmovement 0
	removeobject LOCALID_MRPOKEMON
	clearflag FLAG_HIDE_MRPOKEMON
	addobject LOCALID_MRPOKEMON2
	
	setvar VAR_NEWBARKTOWN_LABSTATE, 4
	setflag FLAG_HIDE_SILVER_NEWBARKTOWN
	setflag FLAG_SYS_POKEDEX_GET
	clearflag FLAG_HIDE_LAB_POLICEMAN
	setvar VAR_CHERRYGROVE_CITY_STATE, 2
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY
	clearflag FLAG_HIDE_SILVER_CHERRYGROVE
	setflag FLAG_HIDE_GUIDE_GENT_CHERRYGROVE
	clearflag FLAG_HIDE_CHERRYGROVE_GUIDE_GENT_HOUSE

	release
	end

MrPokemonHouse_EventScript_MrPokemon::
	lock
	faceplayer
	checkitem ITEM_RED_SCALE
	goto_if_eq VAR_RESULT, TRUE, MrPokemonHouse_EventScript_MrPokemon_RedScale
	msgbox MrPokemonHouse_Text_AlwaysNewDiscoveries, MSGBOX_DEFAULT
	closemessage
	release
	end

MrPokemonHouse_EventScript_MrPokemon_RedScale::
	msgbox MrPokemonHouse_Text_GimmeTheScale, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, MrPokemonHouse_EventScript_MrPokemon_RedScale_Accepted
	msgbox MrPokemonHouse_Text_Disappointed, MSGBOX_DEFAULT
	closemessage
	release
	end	

MrPokemonHouse_EventScript_MrPokemon_RedScale_Accepted::
	removeitem ITEM_RED_SCALE
	giveitem ITEM_EXP_SHARE_SMALL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	release
	end


MrPokemonHouse_EventScript_Computer::
	lock
	msgbox MrPokemonHouse_Text_BrokenComputer, MSGBOX_SIGN
	release
	end

MrPokemonHouse_EventScript_Magazine::
	lock
	msgbox MrPokemonHouse_Text_ForeignMagazines, MSGBOX_SIGN
	release
	end

MrPokemonHouse_EventScript_Coins::
	lock
	msgbox MrPokemonHouse_Text_StrangeCoins, MSGBOX_SIGN
	release
	end

MrPokemonHouse_Movement_MeetMrPokemon:
	walk_up
	walk_up
	walk_right
	walk_right
	face_up
	step_end

MrPokemonHouse_Movement_OakToPlayer:
	walk_down
	face_left
	step_end

MrPokemonHouse_Movement_OakLeave:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_in_place_down
	step_end

MrPokemonHouse_Movement_MrPokemon_Leave:
	walk_up
	walk_left
	walk_left
	step_end

MrPokemonHouse_Text_Intro1:
	.string "Hallo! Du musst {PLAYER} sein.\p"
	.string "PROF. LIND sagte,\n"
	.string "dass du vorbeikommen würdest.$"

MrPokemonHouse_Text_Intro2:
	.string "PROF. LIND soll\n"
	.string "das hier untersuchen.$"

MrPokemonHouse_Text_GotEgg:
	.string "{PLAYER} erhält RÄTSEL-EI.$"

MrPokemonHouse_Text_Intro3:
	.string "Ich kenne ein\n"
	.string "Paar, das eine Pokémon-PENSION \n"
	.string "leitet.\p"
	.string "Sie gaben mir das EI.\p"
	.string "Ich war derart\n"
	.string "fasziniert, dass ich PROF. LIND eine\n"
	.string "E-Mail schrieb.\p"
	.string "Was die Entwick-\n"
	.string "lung von Pokémon betrifft, ist PROF.\l"
	.string "LIND eine Kapazität.$"


MrPokemonHouse_Text_Intro4:
	.string "Sogar PROF. EICH schätzt ihn sehr.$"

MrPokemonHouse_Text_Intro5:
	.string "Ich gehe davon\n"
	.string "aus, dass PROF. LIND mehr darüber\l"
	.string "weiß.$"

MrPokemonHouse_Text_Heal:
	.string "EICH: Aha! Du bist also {PLAYER}!\p"
	.string "Mein Name\n"
	.string "ist PROF. EICH! Ich bin von Beruf\n"
	.string "Pokémon-Forscher.\p"
	.string "Ich besuche gerade\n"
	.string "meinen alten Freund MR. Pokémon.\p"
	.string "Ich hörte, du hast etwas für PROF.\p"
	.string "LIND besorgt, also habe ich gewartet.\n"
	.string "\p"
	.string "Oh! Was ist das? Ein seltenes Pokémon!\n"
	.string "\p"
	.string "Mal sehen…\p"
	.string "Hm, ich verstehe!\p"
	.string "Ich weiß, warum PROF. LIND dir ein\p"
	.string "Pokémon für die Besorgung gab.\p"
	.string "Für Forscher wie PROF. LIND und\p"
	.string "mich sind Pokémon unsere Freunde.\p"
	.string "Er erkannte, dass du deine Pokémon\p"
	.string "liebevoll und umsichtig umsorgst.\p"
	.string "…Ah!\p"
	.string "Du scheinst zuverlässig zu sein.\p"
	.string "Möchtest du mir auch helfen?\p"
	.string "Dies ist die neueste Version des\n"
	.string "Pokédex. Er erfaßt automatisch Daten\p"
	.string "über Pokémon,\n"
	.string "die man gefangen oder gesehen hat!\p"
	.string "Er ist eine Art Hi-Tech-Lexikon!$"

MrPokemonHouse_Text_DependingOnYou:
	.string "Ich bin auf dich angewiesen!$"

MrPokemonHouse_Text_AlwaysNewDiscoveries:
	.string "Das Leben ist schön! Es gibt\p"
	.string "immer etwas Neues zu entdecken!$"

MrPokemonHouse_Text_OakIntro:
	.string "EICH: Aha! Du bist also {PLAYER}!\p"
	.string "Mein Name\n"
	.string "ist PROF. EICH! Ich bin von Beruf\n"
	.string "Pokémon-Forscher.\p"
	.string "Ich besuche gerade\n"
	.string "meinen alten Freund MR.Pokémon.\p"
	.string "Ich hörte, du hast etwas für PROF.\p"
	.string "LIND besorgt, also habe ich gewartet.\n"
	.string "\p"
	.string "Oh! Was ist das? Ein seltenes Pokémon!\n"
	.string "\p"
	.string "Mal sehen…\p"
	.string "Hm, ich verstehe!\p"
	.string "Ich weiß, warum PROF. LIND dir ein\p"
	.string "Pokémon für die Besorgung gab.\p"
	.string "Für Forscher wie PROF. LIND und\p"
	.string "mich sind Pokémon unsere Freunde.\p"
	.string "Er erkannte, dass du deine Pokémon\p"
	.string "liebevoll und umsichtig umsorgst.\p"
	.string "…Ah!\p"
	.string "Du scheinst zuverlässig zu sein.\p"
	.string "Möchtest du mir auch helfen?\p"
	.string "Dies ist die neueste Version des.\n"
	.string "Pokédex.\p"
	.string "Er erfaßt automatisch Daten\p"
	.string "über Pokémon,\n"
	.string "die man gefangen oder gesehen hat!\p"
	.string "Er ist eine Art Hi-Tech-Lexikon!$"

MrPokemonHouse_Text_GetDex:
	.string "{PLAYER} erhält Pokédex!$"

MrPokemonHouse_Text_OakParting:
	.string "Triff viele verschiedene Pokémon\n"
	.string "und vervollständige den POKéDEX!\p"
	.string "Aber ich bin schon zu lange\n"
	.string "geblieben.\p"
	.string "Ich muss nach DUKATIA CITY\n"
	.string "zu meiner gewohnten Radiosendung.\p"
	.string "{PLAYER}, ich zähle auf dich!$"

MrPokemonHouse_Text_GimmeTheScale:
	.string "Hm? Diese HAUT!\n"
	.string "Was ist das? Ein rotes GARADOS?\p"
	.string "Das ist selten! Ich muss es haben…\p"
	.string "{PLAYER}, möchtest du es tauschen?\p"
	.string "Ich kann dir den EP-TEILER, den mir\p"
	.string "PROF. EICH gegeben hat, anbieten.$"

MrPokemonHouse_Text_Disappointed:
	.string "Wirklich schade!\n"
	.string "Das gibt es nur selten.$"

MrPokemonHouse_Text_ExpShare:
	.string "Ich habe auch ein spezielles\n"
	.string "Item für dich.$"

MrPokemonHouse_Text_ForeignMagazines:
	.string "Das sind ausländische Zeitungen.\p"
	.string "Ich kann die Schlagzeilen nicht lesen…$"

MrPokemonHouse_Text_BrokenComputer:
	.string "Dies ist ein\n"
	.string "großer Computer. Hm, er ist kaputt.$"

MrPokemonHouse_Text_StrangeCoins:
	.string "Ein ganzer Stapel seltsamer Münzen!\p"
	.string "Vielleicht sind\n"
	.string "sie aus einem anderen Land…$"

MrPokemonHouse_Text_GotExpShare:
	.string "{PLAYER} erhält EP-TEILER!$"

.set LOCALID_VERMILION_EUSINE, 24
.set LOCALID_VERMILION_SUICUNE, 23
.set LOCALID_VERMILION_SNORLAX, 1

VermilionCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_MapScript_OnTransition
	.byte 0

VermilionCity_MapScript_OnTransition::
	setflag FLAG_VISITED_VERMILION_CITY
	goto_if_eq VAR_SUICUNE_ENCOUNTERS, 3, VermilionCity_EventScript_SetSuicuneScene
	setflag FLAG_HIDE_VERMILION_EUSINE_SUICUNE
	end

VermilionCity_EventScript_SetSuicuneScene::
	clearflag FLAG_HIDE_VERMILION_EUSINE_SUICUNE
	end

VermilionCity_EventScript_OldSeaMap::
	finditem ITEM_OLD_SEA_MAP
	end

VermilionCity_TriggerSuicuneTop::
	lock
	playse SE_PIN
	applymovement2 LOCALID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement2 LOCALID_VERMILION_SUICUNE, VermilionCity_Movement_Suicune1
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	waitmovement 0
	applymovement2 LOCALID_PLAYER, VermilionCity_Movement_PlayerWalkToRailTop
	delay 60
	applymovement2 LOCALID_VERMILION_EUSINE, VermilionCity_Movement_EusineWalkToRail
	waitmovement LOCALID_VERMILION_EUSINE
	waitmovement LOCALID_PLAYER
	goto VermilionCity_EventScript_SuicuneEpisode
VermilionCity_TriggerSuicuneMid::
	lock
	playse SE_PIN
	applymovement2 LOCALID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement2 LOCALID_VERMILION_SUICUNE, VermilionCity_Movement_Suicune1
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	waitmovement 0
	applymovement2 LOCALID_PLAYER, VermilionCity_Movement_PlayerWalkToRailMid
	delay 60
	applymovement2 LOCALID_VERMILION_EUSINE, VermilionCity_Movement_EusineWalkToRail
	waitmovement LOCALID_VERMILION_EUSINE
	waitmovement LOCALID_PLAYER
	goto VermilionCity_EventScript_SuicuneEpisode
VermilionCity_TriggerSuicuneBot::
	lock
	playse SE_PIN
	applymovement2 LOCALID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement2 LOCALID_VERMILION_SUICUNE, VermilionCity_Movement_Suicune1
	waitmovement 0
	applymovement2 LOCALID_PLAYER, VermilionCity_Movement_PlayerWalkToRailBot
	delay 60
	applymovement2 LOCALID_VERMILION_EUSINE, VermilionCity_Movement_EusineWalkToRail
	waitmovement LOCALID_VERMILION_EUSINE
	waitmovement LOCALID_PLAYER
	goto VermilionCity_EventScript_SuicuneEpisode

VermilionCity_EventScript_SuicuneEpisode::
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement2 LOCALID_VERMILION_SUICUNE, VermilionCity_Movement_SuicuneLeave
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	waitmovement 0
	msgbox VermilionCity_Text_Eusine, MSGBOX_DEFAULT
	turnobject LOCALID_VERMILION_EUSINE, DIR_SOUTH
	turnobject LOCALID_PLAYER, DIR_NORTH
	msgbox VermilionCity_Text_Eusine2, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_VERMILION_EUSINE, VermilionCity_Movement_EusineLeave
	waitmovement 0
	removeobject LOCALID_VERMILION_EUSINE
	removeobject LOCALID_VERMILION_SUICUNE
	setflag FLAG_HIDE_VERMILION_EUSINE_SUICUNE

	setvar VAR_SUICUNE_ENCOUNTERS, 4
	clearflag FLAG_HIDE_ROUTE14_SUICUNE
	release
	end

VermilionCity_EventScript_Teacher::
	msgbox VermilionCity_Text_Teacher, MSGBOX_NPC
	end

VermilionCity_EventScript_Oldman::
	msgbox VermilionCity_Text_MachopOwner, MSGBOX_NPC
	end

VermilionCity_EventScript_Machop::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox VermilionCity_Text_Machop1, MSGBOX_DEFAULT
	waitmoncry
	msgbox VermilionCity_Text_Machop2, MSGBOX_DEFAULT
	release
	end

VermilionCity_EventScript_Nerd::
	msgbox VermilionCity_Text_SuperNerd, MSGBOX_NPC
	end

VermilionCity_EventScript_Snorlax::
	lock
	goto_if_set FLAG_KANTO_RADIO_GOT, VermilionCity_EventScript_SnorlaxWakeUp
	msgbox VermilionCity_Text_SnorlaxSleeping, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_EventScript_SnorlaxWakeUp::
	playse MUS_HG_RADIO_POKE_FLUTE
	msgbox VermilionCity_Text_RadioNearSnorlax, MSGBOX_DEFAULT
	waitse
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SNORLAX, 50
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, VermilionCity_EventScript_SnorlaxRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_VERMILION_SNORLAX
	removeobject 8
	removeobject 9
	removeobject 10
	removeobject 11
	setflag FLAG_HIDE_VERMILION_SNORLAX
	fadescreenswapbuffers FADE_FROM_BLACK
	setflag FLAG_INDIGOJUNCTION_HIDE_KANTO_GUARD
	release
	end

VermilionCity_EventScript_SnorlaxRan::
	release
	end

VermilionCity_EventScript_BadgeGuy::
	lock
	faceplayer
	goto_if_set FLAG_GOT_VERMILION_HP_UP, VermilionCity_EventScript_BadgeGuyAfter
	goto_if_ge VAR_NUM_BADGES, 16, VermilionCity_EventScript_BadgeGuyAll
	goto_if_ge VAR_NUM_BADGES, 12, VermilionCity_EventScript_BadgeGuyMost
	goto_if_ge VAR_NUM_BADGES, 9, VermilionCity_EventScript_BadgeGuySome
	msgbox VermilionCity_Text_BadgeGuy_Trainer, MSGBOX_DEFAULT
	closemessage
	release
	end
VermilionCity_EventScript_BadgeGuySome::
	msgbox VermilionCity_Text_BadgeGuy_SomeBadges, MSGBOX_DEFAULT
	closemessage
	release
	end
VermilionCity_EventScript_BadgeGuyMost::
	msgbox VermilionCity_Text_BadgeGuy_MostBadges, MSGBOX_DEFAULT
	closemessage
	release
	end
VermilionCity_EventScript_BadgeGuyAll::
	msgbox VermilionCity_Text_BadgeGuy_AllBadges, MSGBOX_DEFAULT
	giveitem ITEM_HP_UP
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_VERMILION_HP_UP
	closemessage
	release
	end
VermilionCity_EventScript_BadgeGuyAfter::
	msgbox VermilionCity_Text_BadgeGuy_BattleEdge, MSGBOX_DEFAULT
	closemessage
	release
	end


VermilionCity_Movement_Suicune1:
	jump_in_place_left
	jump_in_place_left
	jump_in_place_left
	step_end

VermilionCity_Movement_PlayerWalkToRailTop:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	step_end
VermilionCity_Movement_PlayerWalkToRailMid:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_right
	step_end
VermilionCity_Movement_PlayerWalkToRailBot:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	step_end

VermilionCity_Movement_EusineWalkToRail:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	step_end

VermilionCity_Movement_SuicuneLeave:
	jump_in_place_left
	jump_2_right
	jump_2_right
	jump_2_right
	step_end

VermilionCity_Movement_EusineLeave:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

VermilionCity_Text_Eusine:
	.string "EUSINE: Das war knapp!\n"
	.string "Ich dachte, ich könnte es\n"
	.string "hier in die Ecke treiben.\p"
	.string "Doch auf dem Wasser kann\n"
	.string "ich es nicht verfolgen.\p"
	.string "Trotzdem erkenne ich ein\n"
	.string "Muster.\p"
	.string "SUICUNE bevorzugt Wasser!\p"
	.string "Das bedeutet...$"

VermilionCity_Text_Eusine2:
	.string "Sorry {PLAYER}, ich muss los!$"

VermilionCity_Text_Teacher:
	.string "Der HAFEN von\n"
	.string "ORANIA CITY ist das Tor KANTOs zum\n"
	.string "Meer.\p"
	.string "Hier legen Luxus-\n"
	.string "dampfer aus aller Welt an.$"

VermilionCity_Text_MachopOwner:
	.string "Mein Pokémon\n"
	.string "ebnet das Land für ein Bauwerk.\p"
	.string "Aber ich habe\n"
	.string "nicht genug Geld für das Projekt…$"

VermilionCity_Text_Machop1:
	.string "MACHOLLO: Guooh gogogoh!$"

VermilionCity_Text_Machop2:
	.string "Ein MACHOLLO\n"
	.string "brüllt laut, während es auf den Boden\l"
	.string "stampft.$"

VermilionCity_Text_SuperNerd:
	.string "Es gibt acht ARENEN in KANTO.\p"
	.string "Das große Gebäude\n"
	.string "ist die PKMN-ARENA von ORANIA CITY.$"

VermilionCity_Text_SnorlaxSleeping:
	.string "RELAXO schläft friedlich…$"

VermilionCity_Text_RadioNearSnorlax:
	.string "Der PokéCOM wird\n"
	.string "in der Nähe des schlafenden RELAXOs\n"
	.string "platziert…\p"
	.string "…\p"
	.string "RELAXO ist aufgewacht!$"

VermilionCity_Text_BadgeGuy_Trainer:
	.string "In KANTO treffen\n"
	.string "sich talentierte Trainer.\p"
	.string "ARENALEITER sind besonders stark.\p"
	.string "Es ist nicht leicht, sie zu besiegen.$"

VermilionCity_Text_BadgeGuy_SomeBadges:
	.string "Du sammelst ORDEN der ARENEN in KANTO?\n"
	.string "\p"
	.string "Findest du nicht\n"
	.string "auch, dass die Trainer hier stark\l"
	.string "sind?$"

VermilionCity_Text_BadgeGuy_MostBadges:
	.string "Ich schätze, du\n"
	.string "hast diesen Wettkampf der ARENEN in\n"
	.string "KANTO bald beendet.\p"
	.string "Lass mich wissen,\n"
	.string "wenn du alle acht ORDEN hast.$"

VermilionCity_Text_BadgeGuy_AllBadges:
	.string "Gratuliere!\p"
	.string "Du hast alle ORDEN\n"
	.string "der ARENEN in KANTO.\p"
	.string "Ich habe hier eine\n"
	.string "Belohnung für deine Anstrengungen.$"

VermilionCity_Text_BadgeGuy_BattleEdge:
	.string "Es ist vorteilhaft, wenn du\p"
	.string "Pokémon verschie-\n"
	.string "dener Elemente kämpfen lässt.\p"
	.string "Ich bin sicher,\n"
	.string "dass die ORDEN der ARENEN in KANTO dir\l"
	.string "helfen werden.$"

VermilionCity_EventScript_CitySign::
	msgbox VermilionCity_Text_Sign, MSGBOX_SIGN
	end
VermilionCity_EventScript_GymSign::
	msgbox VermilionCity_Text_GymSign, MSGBOX_SIGN
	end
VermilionCity_EventScript_FanClubSign::
	msgbox VermilionCity_Text_FanClubSign, MSGBOX_SIGN
	end
VermilionCity_EventScript_DiglettsCaveSign::
	msgbox VermilionCity_Text_DiglettsCaveSign, MSGBOX_SIGN
	end

VermilionCity_Text_Sign:
	.string "ORANIA CITY\p"
	.string "Der Hafen Der\n"
	.string "Stimmungsvollen Sonnenuntergänge$"

VermilionCity_Text_GymSign:
	.string "ORANIA CITY\n"
	.string "POKéMON ARENA\p"
	.string "LEITER: Major Bob\p"
	.string "Der Elektro-Veteran$"

VermilionCity_Text_FanClubSign:
	.string "POKéMON FAN CLUB\p"
	.string "Fans von POKéMON Willkommen!$"

VermilionCity_Text_DiglettsCaveSign:
	.string "DIGDAs HÖHLE$"

VermilionCity_Text_PortSign:
	.string "EINGANG zum HAFEN von ORANIA CITY$"

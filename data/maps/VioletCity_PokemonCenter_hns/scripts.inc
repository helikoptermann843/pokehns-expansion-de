.set LOCALID_NURSE, 1

VioletCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VioletCity_Pokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VioletCity_Pokecenter_OnTransition::
	setrespawn HEAL_LOCATION_VIOLET_CITY
	end

VioletCity_PokemonCenter_EventScript_Aide::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TOGEPI_EGG, VioletCity_PokemonCenter_EventScript_Aide_Received
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, VioletCity_PokemonCenter_EventScript_AideNoRoom
	msgbox VioletCity_PokeCenter_Text_ElmsAideFavor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VioletCity_PokemonCenter_EventScript_Aide_Refuse
	goto_if_eq VAR_RESULT, YES, VioletCity_PokemonCenter_EventScript_Aide_Accepted
	release
	end


VioletCity_PokemonCenter_EventScript_AideNoRoom::
	msgbox VioletCity_PokeCenter_Text_ElmsAideNoRoom, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EventScript_Aide_Refuse::
	msgbox VioletCity_PokeCenter_Text_ElmsAideRefuse, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VioletCity_PokemonCenter_EventScript_Aide_Refuse
	goto_if_eq VAR_RESULT, YES, VioletCity_PokemonCenter_EventScript_Aide_Accepted
	release
	end

VioletCity_PokemonCenter_EventScript_Aide_Accepted::
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, VioletCity_PokeCenter_Text_ElmsAideFullParty
	playfanfare MUS_OBTAIN_ITEM
	message VioletCity_PokeCenter_Text_ReceivedTheEgg
	waitfanfare
	msgbox VioletCity_PokeCenter_Text_ElmsAideGiveEgg, MSGBOX_DEFAULT
	closemessage
	giveegg SPECIES_TOGEPI
	setflag FLAG_RECEIVED_TOGEPI_EGG
	msgbox VioletCity_PokeCenter_Text_ElmsAideGiveItem, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE_SMALL
	setflag FLAG_HIDE_VIOLET_CITY_AIDE
	setvar VAR_VIOLET_CITY_KIMONO_GIRL, 1
	clearflag FLAG_HIDE_VIOLET_CITY_KIMONO_GIRL
	clearflag FLAG_HIDE_NEWBARKTOWN_LAB_AIDE
	release
	end

VioletCity_PokemonCenter_EventScript_Aide_Received::
	msgbox VioletCity_PokeCenter_Text_ElmsAideGiveEgg, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EventScript_Gentleman::
	lock
	faceplayer
	msgbox VioletCity_PokeCenter_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EVentScript_Kid::
	lock
	faceplayer
	msgbox VioletCity_PokeCenter_Text_GameboyKid, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokemonCenter_EventScript_Man::
	lock
	faceplayer
	msgbox VioletCity_PokeCenter_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_PokeCenter_Text_ElmsAideFavor:
	.string "Hallo! Lange nicht gesehen.\p"
	.string "PROF. LIND hat\n"
	.string "mich gebeten, nach dir zu suchen.\p"
	.string "Er hat noch eine Bitte an dich.\p"
	.string "Nimm bitte das Pokémon-EI!$"

VioletCity_PokeCenter_Text_ElmsAideNoRoom:
	.string "Hallo! Lange nicht gesehen.\p"
	.string "PROF. LIND hat\n"
	.string "mich gebeten, nach dir zu suchen.\p"
	.string "Er hat noch eine Bitte an dich.\p"
	.string "Nimm bitte das Pokémon-EI!$"

VioletCity_PokeCenter_Text_ElmsAideGiveEgg:
	.string "Wir haben entdeckt, dass ein\p"
	.string "Pokémon erst schlüpft, nachdem\p"
	.string "es im EI gewachsen ist.\p"
	.string "Außerdem muss es sich in der Nähe\p"
	.string "anderer Pokémon\n"
	.string "befinden, um zu schlüpfen.\p"
	.string "Du bist\n"
	.string "die einzige Person, auf die wir\p"
	.string "uns verlassen können.\p"
	.string "Bitte ruf PROF.\n"
	.string "LIND an, wenn das EI so weit ist!$"

VioletCity_PokeCenter_Text_ElmsAideGiveItem:
	.string "Wir haben entdeckt, dass ein\p"
	.string "Pokémon erst schlüpft, nachdem\p"
	.string "es im EI gewachsen ist.\p"
	.string "Außerdem muss es sich in der Nähe\p"
	.string "anderer Pokémon\n"
	.string "befinden, um zu schlüpfen.\p"
	.string "Du bist\n"
	.string "die einzige Person, auf die wir\p"
	.string "uns verlassen können.\p"
	.string "Bitte ruf PROF.\n"
	.string "LIND an, wenn das EI so weit ist!$"

VioletCity_PokeCenter_Text_ElmsAideFullParty:
	.string "Oh, du hast keinen\n"
	.string "Platz mehr für ein weiteres Pokémon.\p"
	.string "Ich warte hier,\n"
	.string "bis du Platz für das EI geschaffen\l"
	.string "hast.$"

VioletCity_PokeCenter_Text_ElmsAideRefuse:
	.string "A-Aber… PROF.\n"
	.string "LIND hat nach dir gefragt…$"

VioletCity_PokeCenter_Text_FarawayLink:
	.string "Wer anderen eine\n"
	.string "grube gräbt,\l"
	.string "hat ein Grubengrabgerät.$"

VioletCity_PokeCenter_Text_MobileAdapter:
	.string "Woran denkst du,\n"
	.string "wenn du versuchst,\p"
	.string "daran zu denken, nicht daran zu denken\l"
	.string "das du,\n"
	.string "denkst, das du dumm bist,\p"
	.string "obwohl du nicht dumm bist?\n"
	.string "ähhhh.$"

VioletCity_PokeCenter_Text_GameboyKid:
	.string "Ein Kerl namens BILL hat das\p"
	.string "Pokémon-PC-LAGERUNGS-SYSTEM\p"
	.string "erfunden.$"

VioletCity_PokeCenter_Text_Gentleman:
	.string "Es war vor etwa drei Jahren.\p"
	.string "TEAM ROCKET hatte\n"
	.string "etwas Übles mit den Pokémon vor.\p"
	.string "Aber die Gerech-\n"
	.string "tigkeit hat gesiegt! Ein junger\l"
	.string "Trainer hat sie zerschlagen.$"

VioletCity_PokeCenter_Text_Youngster:
	.string "Pokémon sind\n"
	.string "schlau. Sie gehorchen nur Trainern,\n"
	.string "vor denen sie auch Respekt haben.\p"
	.string "Hat der Trainer nicht genug ORDEN,\p"
	.string "machen sie, was sie wollen.$"

VioletCity_PokeCenter_Text_ReceivedTheEgg:
	.string "{PLAYER} erhält das Ei.$"

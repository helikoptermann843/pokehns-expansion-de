.set LOCALID_NURSE, 1

PewterCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PewterCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_PEWTER_CITY
	end

PewterCity_PokemonCenter_EventScript_Teacher::
	msgbox PewterCity_PokemonCenter1F_Text_Teacher, MSGBOX_NPC
	end

PewterCity_PokemonCenter_EventScript_BugCatcher::
	msgbox PewterCity_PokemonCenter1F_Text_BugCatcher, MSGBOX_NPC
	end

PewterCity_PokemonCenter1F_Text_Teacher:
	.string "…Ja, und die PKMN-ARENA auf der\p"
	.string "ZINNOBERINSEL ist verschwunden. Das\p"
	.string "finde ich merkwürdig.\p"
	.string "…Ja? Ich\n"
	.string "telefoniere! Lass mich in Ruhe!$"

PewterCity_PokemonCenter1F_Text_Jigglypuff:
	.string "Pummeluff: Puu pupuu.$"

PewterCity_PokemonCenter1F_Text_BugCatcher:
	.string "Die meisten -\n"
	.string "MON werden schläfrig, wenn PUMMELUFF\n"
	.string "singt.\p"
	.string "Manche Attacken kann man nur an-\p"
	.string "wenden, wenn ein Pokémon schläft.$"

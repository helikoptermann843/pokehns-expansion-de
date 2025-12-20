.set LOCALID_NURSE, 1

BlackthornCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BlackthornCity_PokemonCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

BlackthornCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_BLACKTHORN_CITY
	end

BlackthornCity_PokemonCenter_EventScript_Gent::
	msgbox BlackthornCity_PokemonCenter1FGentlemanText, MSGBOX_NPC
	end

BlackthornCity_PokemonCenter_EventScript_Twin::
	msgbox BlackthornCity_PokemonCenter1FTwinText, MSGBOX_NPC
	end

BlackthornCity_PokemonCenter1FGentlemanText:
	.string "Tief im fernen INDIGO PLATEAU liegt\n"
	.string "die Pokémon-LIGA.\p"
	.string "Man sagt, dass sich dort die besten\n"
	.string "Trainer des Landes versammeln.$"

BlackthornCity_PokemonCenter1FTwinText:
	.string "Es gab da eine Attacke, die ich meinen\n"
	.string "Pokémon unbedingt beibringen wollte.\p"
	.string "Also ließ ich sie vom Attacken-\n"
	.string "Verlerner eine VM-Attacke vergessen.$"

Route20_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route20_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route20_EventScript_Nicole::
	trainerbattle_single TRAINER_NICOLE Route20_Text_SwimmerfNicoleSeen, Route20_Text_SwimmerfNicoleBeaten
	msgbox Route20_Text_SwimmerfNicoleAfterBattle, MSGBOX_AUTOCLOSE
	end	

Route20_EventScript_Lori::
	trainerbattle_single TRAINER_LORI Route20_Text_SwimmerfLoriSeen, Route20_Text_SwimmerfLoriBeaten
	msgbox Route20_Text_SwimmerfLoriAfterBattle, MSGBOX_AUTOCLOSE
	end	

Route20_EventScript_Cameron::
	trainerbattle_single TRAINER_CAMERON Route20_Text_SwimmermCameronSeen, Route20_Text_SwimmermCameronBeaten
	msgbox Route20_Text_SwimmermCameronAfterBattle, MSGBOX_AUTOCLOSE
	end	

Route20_EventScript_SeafoamSign::
	msgbox Route20_Text_SeafoamSign, MSGBOX_SIGN
	end

Route20_EventScript_GymSign::
	msgbox Route20_Text_CinnabarIsland_GymUnusedSign, MSGBOX_SIGN
	end

Route20_EventScript_Seel::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SEEL, CRY_MODE_NORMAL
	msgbox Route20_Text_Seel, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route20_EventScript_Dewgong::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DEWGONG, CRY_MODE_NORMAL
	msgbox Route20_Text_Dewgong, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route20_EventScript_Headlocker::
	msgbox Route20_Text_Headlocker, MSGBOX_NPC
	end

Route20_Text_Headlocker:
	.string "Auf dieser Route gibt es ein\n"
	.string "seltenes Pokémon.\p"
	.string "Manchmal trägt es auch einen\n"
	.string "seltenen Entwicklungsstein.\p"
	.string "Doppelt selten also!\p"
	.string "Ich muss meinen POKéDEX füllen,\n"
	.string "darum angle ich hier schon Stunden!$"

Route20_Text_Seel:
	.string "Jurob: Jurob Jurob!$"

Route20_Text_Dewgong:
	.string "Jugong: Goooong!$"

Route20_Text_SeafoamSign:
	.string "Seeschauminseln$"

Route20_Text_SwimmerfNicoleSeen:
	.string "Im Wasser fühle ich mich so leicht.$"

Route20_Text_SwimmerfNicoleBeaten:
	.string "Oh, nein!$"

Route20_Text_SwimmerfNicoleAfterBattle:
	.string "Beim Schwimmen wird der gesamte\p"
	.string "Körper trainiert.\n"
	.string "Schwimmen ist gesund.$"

Route20_Text_SwimmerfLoriSeen:
	.string "Du besitzt eine umwerfende Anzahl\p"
	.string "ARENA-ORDEN. Lass uns kämpfen!$"

Route20_Text_SwimmerfLoriBeaten:
	.string "Nein!$"

Route20_Text_SwimmerfLoriAfterBattle:
	.string "SURFER ist nicht\n"
	.string "mehr die einzige VM, die du im Wasser\l"
	.string "einsetzen kannst.$"

Route20_Text_SwimmermCameronSeen:
	.string "Ich denke es ist unmöglich, den\p"
	.string "ganzen Weg nach JOHTO zu schwimmen.$"

Route20_Text_SwimmermCameronBeaten:
	.string "Yippie!$"

Route20_Text_SwimmermCameronAfterBattle:
	.string "Ich schwimme auch\n"
	.string "in Teichen und Flüssen.$"

Route20_Text_CinnabarIsland_GymUnusedSign:
	.string "Was steht hier?\p"
	.string "Zinnoberinsel Leiter: Pyro$"


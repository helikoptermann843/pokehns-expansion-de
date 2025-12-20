Route13_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route13_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route13_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route13_EventScript_Alex::
	trainerbattle_single TRAINER_ALEX Route13_Text_PokefanmAlexSeen, Route13_Text_PokefanmAlexBeaten
	msgbox Route13_Text_PokefanmAlexAfterBattle, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_Joshua::
	trainerbattle_single TRAINER_JOSHUA Route13_Text_PokefanmJoshuaSeen, Route13_Text_PokefanmJoshuaBeaten
	msgbox Route13_Text_PokefanmJoshuaAfterBattle, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_Perry::
	trainerbattle_single TRAINER_PERRY Route13_Text_BirdKeeperPerrySeen, Route13_Text_BirdKeeperPerryBeaten
	msgbox Route13_Text_BirdKeeperPerryAfterBattle, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_Bret::
	trainerbattle_single TRAINER_BRET Route13_Text_BirdKeeperBretSeen, Route13_Text_BirdKeeperBretBeaten
	msgbox Route13_Text_BirdKeeperBretAfterBattle, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_Kenny::
	trainerbattle_single TRAINER_KENNY Route13_Text_HikerKennySeen, Route13_Text_HikerKennyBeaten
	msgbox Route13_Text_HikerKennyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route13_EventScript_TrainerTips::
	msgbox Route13_Text_TrainerTips, MSGBOX_SIGN
	end

Route13_EventScript_RouteSign::
	msgbox Route13_Text_Sign, MSGBOX_SIGN
	end

Route13_EventScript_DirectionsSign::
	msgbox Route13_Text_DirectionsSign, MSGBOX_SIGN
	end

Route13_Text_PokefanmAlexSeen:
	.string "Verbeuge dich vor\n"
	.string "meinen königlichen Pokémon!$"

Route13_Text_PokefanmAlexBeaten:
	.string "Wie… wie kannst\n"
	.string "du es wagen, die Monarchie zu\l"
	.string "verspotten?$"

Route13_Text_PokefanmAlexAfterBattle:
	.string "Möchte nicht jeder\n"
	.string "eines Tages einmal König sein?$"

Route13_Text_PokefanmJoshuaSeen:
	.string "Hihi! Möchtest du\n"
	.string "gegen mein PIKACHU-Team antreten?$"

Route13_Text_PokefanmJoshuaBeaten:
	.string "PI-PIKACHU!$"

Route13_Text_PokefanmJoshuaAfterBattle:
	.string "Es scheint, dass du viele Pokémon\p"
	.string "hast, aber PIKACHU\n"
	.string "ist immer noch das Beste.$"

Route13_Text_BirdKeeperPerrySeen:
	.string "Agilität ist die\n"
	.string "wichtigste Eigenschaft von\l"
	.string "VogelPokémon.$"

Route13_Text_BirdKeeperPerryBeaten:
	.string "Du hast mich\n"
	.string "aufgrund deiner Schnelligkeit besiegt…$"

Route13_Text_BirdKeeperPerryAfterBattle:
	.string "Deine Pokémon sind\n"
	.string "in der Tat sehr gut trainiert.$"

Route13_Text_BirdKeeperBretSeen:
	.string "Schau dir meine Pokémon an. Sieh\p"
	.string "ihre Farben und ihr Gefieder.$"

Route13_Text_BirdKeeperBretBeaten:
	.string "Verflixt! Nicht gut genug!$"

Route13_Text_BirdKeeperBretAfterBattle:
	.string "Wenn du deine\n"
	.string "Pokémon pflegst, sind sie fröhlich.$"

Route13_Text_HikerKennySeen:
	.string "Ich sollte zum FELSTUNNEL gehen,\n"
	.string "um mir ein Onix zu fangen.$"

Route13_Text_HikerKennyBeaten:
	.string "Ich habe verloren…$"

Route13_Text_HikerKennyAfterBattle:
	.string "Es scheint, als\n"
	.string "würden sich geologische Gegebenheiten\n"
	.string "nicht ändern.\p"
	.string "Aber sie ändern\n"
	.string "sich; langsam, ganz langsam.$"

Route13_Text_TrainerTips:
	.string "TIPPS für TRAINER\p"
	.string "Schau! Hier, an\n"
	.string "der linken Seite des Pfostens.$"

Route13_Text_Sign:
	.string "ROUTE 13\p"
	.string "NÖRDLICH ZUR SCHWEIGEBRÜCKE$"

Route13_Text_DirectionsSign:
	.string "Nördlich nach LAVANDIA\p"
	.string "Westlich nach FUCHSANIA CITY$"


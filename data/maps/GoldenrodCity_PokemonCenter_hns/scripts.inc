.set LOCALID_NURSE, 1

GoldenrodCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodCity_PokemonCenter_OnTransition
    map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

GoldenrodCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_GOLDENROD_CITY
	end

GoldenrodCity_PokemonCenter_EventScript_GbaKid1::
	lock
	faceplayer
	msgbox GoldenrodCity_PokemonCenter_GameboyKidText1, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_EventScript_GbaKid2::
	lock
	faceplayer
	msgbox GoldenrodCity_PokemonCenter_GameboyKidText2, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_EventScript_Granny::
	lock
	faceplayer
	msgbox GoldenrodCity_PokemonCenter_GrannyText, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_EventScript_Lass::
	lock
	faceplayer
	msgbox GoldenrodCity_PokemonCenter_LassText, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_PokemonCenter_GrannyText:
	.string "Für alles Mobile! KOM-CENTER$"

GoldenrodCity_PokemonCenter_GameboyKidText1:
	.string "Im oberen Stockwerk findest du\p"
	.string "das KOLOSSEUM. Hier kannst du\p"
	.string "gegen Freunde antreten.\p"
	.string "Kampfergebnisse werden an der Wand\p"
	.string "ausgehängt. Ich kann es mir nicht\p"
	.string "erlauben, zu verlieren.$"

GoldenrodCity_PokemonCenter_GameboyKidText2:
	.string "Im oberen Stockwerk findest du\p"
	.string "das KOLOSSEUM. Hier kannst du\p"
	.string "gegen Freunde antreten.\p"
	.string "Kampfergebnisse werden an der Wand\p"
	.string "ausgehängt. Ich kann es mir nicht\p"
	.string "erlauben, zu verlieren.$"

GoldenrodCity_PokemonCenter_LassText:
	.string "Ein starkes -\n"
	.string "MON muss nicht zwingend gewinnen.\p"
	.string "Meist entscheidet\n"
	.string "der Voroder Nachteil des Typs.\p"
	.string "Ich glaube nicht,\n"
	.string "dass es ein - MON gibt, das allen\l"
	.string "anderen überlegen ist.$"

GoldenrodPokeCenter_LinkReceptionistPleaseAcceptGSBallText:
	.string "{PLAYER}, oder?\p"
	.string "Glückwunsch!\p"
	.string "Nur für dich wurde\n"
	.string "ein GS-BALL geschickt!\p"
	.string "Nimm ihn bitte!$"

GoldenrodPokeCenter_LinkReceptionistPleaseDoComeAgainText:
	.string "Beehre uns bald wieder!$"

GoldenrodCity_PokemonCenter_PokefanFDoYouHaveEonMailText:
	.string "Oh, dein Beutel sieht schwer aus!\p"
	.string "Oh! Hast du zufäl-\n"
	.string "lig etwas, das man ANARA-BRIEF nennt?\n"
	.string "\p"
	.string "Meine Tochter sucht danach.\p"
	.string "Du gibst mir doch einen, nicht wahr?$"

GoldenrodCity_PokemonCenter_AskGiveAwayAnEonMailText:
	.string "ANARA-BRIEF weggeben?$"

GoldenrodCity_PokemonCenter_PokefanFThisIsForYouText:
	.string "Oh, großartig! Danke, Schatz!\p"
	.string "Hier, als Aus-\n"
	.string "gleich sollst du das haben!$"

GoldenrodCity_PokemonCenter_PokefanFDaughterWillBeDelightedText:
	.string "Meine Tochter wird entzückt sein!$"

GoldenrodCity_PokemonCenter_PokefanFTooBadText:
	.string "Oh? Du hast keinen? Schade.$"

GoldenrodCity_PokemonCenter_PokefanFAnotherTimeThenText:
	.string "Oh… Ein anderes Mal vielleicht.$"

GoldenrodCity_PokemonCenter_PlayerGaveAwayTheEonMailText:
	.string "{PLAYER} gibt den ANARA-BRIEF weg.$"

.set LOCALID_NURSE, 1

SafariZoneGate_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZoneGate_PokemonCenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SafariZoneGate_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_SAFARI_ZONE_GATE
	end

SafariZoneGate_PokemonCenter_EventScript_NPC1::
	lock
	faceplayer
	msgbox SafariZoneGate_PokemonCenter_Text_NPC1, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_PokemonCenter_EventScript_NPC2::
	lock
	faceplayer
	msgbox SafariZoneGate_PokemonCenter_Text_NPC2, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_PokemonCenter_Text_Boy::
	lock
	faceplayer
	msgbox SafariZoneGate_PokemonCenter_Text_SafariSong, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_PokemonCenter_Text_NPC1::
	.string "Wer ins POKéCENTER kommt,\n"
	.string "kümmert sich gut um seine\n"
	.string "Pokémon.\p"
	.string "Stimmst du mir zu?$"

SafariZoneGate_PokemonCenter_Text_NPC2::
	.string "Nach einem langen Marsch in den\n"
	.string "Bergen, um ein POKéCENTER zu finden,\l"
	.string "und wenn man fast zusammenbricht…\p"
	.string "Dann fühlt es sich an wie im\n"
	.string "Paradies, eines zu finden!$"

SafariZoneGate_PokemonCenter_Text_SafariSong::
	.string "Safari, Safari, das macht Spaß.\n"
	.string "Safari, Safari, so spannend, oha!\p"
	.string "So viele Pokémon warten auf uns!\p"
	.string "...Das ist ein Lied, das ich erfand.\n"
	.string "Ich singe es, wenn ich in der\l"
	.string "Safari-Zone bin.$"


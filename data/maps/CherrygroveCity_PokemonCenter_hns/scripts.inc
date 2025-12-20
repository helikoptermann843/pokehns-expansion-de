.set LOCALID_NURSE, 1

CherrygroveCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CherryGrove_Pokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CherryGrove_Pokecenter_OnTransition::
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY
	end

CherryGrove_Pokecenter_EventScript_Fisher::
	lock
	faceplayer
	msgbox CherryGrove_Pokecenter_Text_Fisher, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_Gentleman::
	lock
	faceplayer
	msgbox CherryGrove_Pokecenter_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_EventScript_Lass::
	lock
	faceplayer
	msgbox CherryGrove_Pokecenter_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

CherryGrove_Pokecenter_Chansey::
	lock
	faceplayer
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox CherryGrove_Pokecenter_Text_Chansey, MSGBOX_DEFAULT
	delay 40
	waitmoncry
	closemessage
	end

CherrygroveCity_PokemonCenter_EventScript_Nurse::
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_Enter_Pokeball
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

CherryGrove_Pokecenter_Text_Fisher:
	.string "Es ist großartig. Ich kann beliebig\n"
	.string "viele Pokémon lagern, und das\l"
	.string "alles kostenlos.$"

CherryGrove_Pokecenter_Text_Gentleman:
	.string "Dieser PC ist für jeden Trainer\n"
	.string "frei nutzbar.$"

CherryGrove_Pokecenter_Text_Lass:
	.string "Man sagt, ein Tunichtgut tut nichts\l"
	.string "gut,\n"
	.string "aber wer nichts tut, tut\p"
	.string "tut sich nicht gut!$"

CherryGrove_Pokecenter_Text_Chansey:
	.string "Chaneira: Chaa! Cha!$"

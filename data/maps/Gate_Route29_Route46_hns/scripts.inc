Gate_Route29_Route46_hns_MapScripts::
	.byte 0

Gate_Route29_Route46_EventScript_Officer::
	lock
	faceplayer
	msgbox Gate_Route29_Route46_Text_Officer, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_Route29_Route46_EventScript_Youngster::
	lock
	faceplayer
	msgbox Gate_Route29_Route46_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_Route29_Route46_Text_Officer:
	.string "Du kannst die\n"
	.string "Stufen nicht hinaufklettern.\p"
	.string "Du kannst sie aber\n"
	.string "hinabspringen und sie als Abkürzung\l"
	.string "benutzen.$"

Gate_Route29_Route46_Text_Youngster:
	.string "Verschiedene Pokémon tauchen hier auf.\n"
	.string "\p"
	.string "Wenn du alle\n"
	.string "schnappen möchtest, dann musst du\l"
	.string "überall suchen.$"

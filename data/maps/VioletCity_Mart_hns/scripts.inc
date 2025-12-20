VioletCity_Mart_hns_MapScripts::
	.byte 0

VioletCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

VioletCity_Mart_EventScript_Granny::
	lock
	faceplayer
	msgbox VioletCity_Mart_Text_Granny, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_Mart_EventScript_Rocker::
	lock
	faceplayer
	msgbox VioletCity_Mart_Text_CooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end
	
VioletCity_Mart_Text_Granny:
	.string "Fängst du ein\n"
	.string "Pokémon, ist es vermutlich sehr\n"
	.string "schwach.\p"
	.string "Aber letztendlich\n"
	.string "wird es wachsen und stärker werden.\p"
	.string "Es ist wichtig,\n"
	.string "Pokémon sehr viel Liebe zu schenken.$"

VioletCity_Mart_Text_CooltrainerM:
	.string "Pokémon können\n"
	.string "Items wie TRANK und GEGENGIFT tragen.\n"
	.string "\p"
	.string "Aber offenbar sind sie nicht in der\p"
	.string "Lage, künstlich hergestellte Items\p"
	.string "zu benutzen.$"

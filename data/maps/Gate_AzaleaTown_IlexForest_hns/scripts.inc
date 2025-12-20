Gate_AzaleaTown_IlexForest_hns_MapScripts::
	.byte 0

Gate_AzaleaTown_IlexForest_EventScript_Officer::
	lock
	faceplayer
	msgbox Gate_AzaleaTown_IlexForest_Text_Officer, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_AzaleaTown_IlexForest_EventScript_Granny::
	lock
	faceplayer
	msgbox Gate_AzaleaTown_IlexForest_Text_Granny, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_AzaleaTown_IlexForest_Text_Officer:
	.string "Der Steineichenwald ist groß.\n"
	.string "Sei vorsichtig!\l"
	.string "Verlaufe dich nicht.$"

Gate_AzaleaTown_IlexForest_Text_Granny:
	.string "STEINEICHENWALD\p"
	.string "Tritt durch das Tor$"

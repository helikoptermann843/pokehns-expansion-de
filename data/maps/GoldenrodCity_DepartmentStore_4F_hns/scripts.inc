GoldenrodCity_DepartmentStore_4F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodDeptElevator_OnFrame
	.byte 0

GoldenrodDeptStore4_EventScript_Cooltrainer::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_4FCooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore4_EventScript_BugCatcher::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_4FBugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore4_EventScript_GBAKid::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_4FGameboyKid, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore4_EventScript_Sign::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_4FDirectory, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore_Text_4FCooltrainerM:
	.string "Hey! Ich mag starke Pokémon.\p"
	.string "Ich füttere sie\n"
	.string "mit PROTEIN, um ihren ANGR zu\l"
	.string "verstärken.$"

GoldenrodDeptStore_Text_4FBugCatcher:
	.string "EISEN verstärkt\n"
	.string "die VERT deiner Pokémon.$"

GoldenrodDeptStore_Text_4FGameboyKid:
	.string "Manche Pokémon\n"
	.string "entwickeln sich nur durch Tausch.\p"
	.string "Ich kenne vier: MASCHOCK, KADABRA,\p"
	.string "ALPOLLO und GEOROK.\p"
	.string "Ich hörte, es gibt noch weitere.$"

GoldenrodDeptStore_Text_4FDirectory:
	.string "Wir kümmern uns um Ihre Pokémon!\p"
	.string "3S ARZNEI$"

.set LOCALID_CELADON_FALKNER, 5

CeladonCity_DepartmentStore_5F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonDeptElevator_OnFrame
	.byte 0

CeladonDept5_EventScript_Gent::
	msgbox CeladonDeptStore5F_Text_Gentleman, MSGBOX_NPC
	end
CeladonDept5_EventScript_Sailor::
	msgbox CeladonDeptStore5F_Text_Sailor, MSGBOX_NPC
	end
CeladonDept5_EventScript_Teacher::
	msgbox CeladonDeptStore5F_Text_Teacher, MSGBOX_NPC
	end
CeladonDept5_EventScript_Directory::
	msgbox CeladonDeptStore5F_Text_Directory, MSGBOX_SIGN
	end

CeladonDeptStore5_EventScript_Falkner::
	lock
	faceplayer
	msgbox CeladonDeptStore5_Text_Falkner, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_CELADON_FALKNER
	removeobject LOCALID_CELADON_FALKNER
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_HIDE_DOJO_FALKNER
	release
	end

CeladonDeptStore5_Text_Falkner:
	.string "{PLAYER}, damit habe ich nicht\n"
	.string "gerechnet, dich hier zu sehen.\p"
	.string "Ich besorge Items für meine\n"
	.string "Flug-Pokémon.\p"
	.string "Wenn du mich noch einmal herausfordern\n"
	.string "willst, bin ich im DOJO in Saffronia\l"
	.string "City.$"

CeladonDeptStore5F_Text_Gentleman:
	.string "Ich möchte Items kaufen, die\n"
	.string "die Statuswerte von Pokémon erhöhen,\l"
	.string "aber ich habe nicht genug Geld…$"

CeladonDeptStore5F_Text_Sailor:
	.string "Ich will AP-Plus, damit ich die PP\n"
	.string "von Attacken erhöhen kann. Aber man\l"
	.string "kann es nicht kaufen…$"

CeladonDeptStore5F_Text_Teacher:
	.string "Items zu benutzen macht Pokémon\n"
	.string "glücklich.\p"
	.string "Bestimmte Items mögen sie allerdings\n"
	.string "nicht…$"

CeladonDeptStore5F_Text_Directory:
	.string "4F: DROGERIE$"

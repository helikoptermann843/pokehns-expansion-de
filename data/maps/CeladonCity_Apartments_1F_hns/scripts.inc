CeladonCity_Apartments_1F_hns_MapScripts::
	.byte 0

CeladonCity_Apartments_1F_EventScript_Manager::
	msgbox CeladonMansion_Text_Manager, MSGBOX_NPC
	end

CeladonCity_Apartments_1F_EventScript_Sign::
	msgbox CeladonMansion_Text_ManagersSuiteSign, MSGBOX_SIGN
	end

CeladonMansion_Text_Manager:
	.string "Meine lieben Pokémon leisten mir\n"
	.string "Gesellschaft, sodass ich nie allein\n"
	.string "bin.\p"
	.string "Mauzi bringt sogar Geld nach Hause.$"

CeladonMansion_Text_ManagersSuiteSign:
	.string "CELADON MANSION MANAGER'S SUITE$"

FallarborTown_Mart_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_Mart_Text_Skitty:
	.string "Eneco: Miau?$"

Route6_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route6_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route6_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route6_EventScript_Rex::
	trainerbattle_single TRAINER_REX PokefanM_Text_RexSeen, PokefanM_Text_RexBeaten
	msgbox PokefanM_Text_RexAfter, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Allan::
	trainerbattle_single TRAINER_ALLAN PokefanM_Text_AllanSeen, PokefanM_Text_AllanBeaten
	msgbox PokefanM_Text_AllanAfter, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Pokefan::
	msgbox Route6_Text_PokefanM, MSGBOX_NPC
	end

Route6_EventScript_Sign::
	msgbox Route6_Text_UndergroundPathSign, MSGBOX_SIGN
	end

Route6_Text_PokefanM:
	.string "Die Straße zum KRAFTWERK bleibt\p"
	.string "gesperrt, bis das\n"
	.string "Problem gelöst wurde.$"

Route6_Text_UndergroundPathSign:
	.string "TUNNELPFAD\p"
	.string "AZURIA CITY - ORANIA CITY$"

PokefanM_Text_RexSeen:
	.string "Mein PHANPY ist\n"
	.string "das niedlichste der ganzen Welt.$"

PokefanM_Text_RexBeaten:
	.string "Mein PHANPY!$"

PokefanM_Text_RexAfter:
	.string "Mein PHANPY!$"

PokefanM_Text_AllanSeen:
	.string "Mein TEDDIURSA ist\n"
	.string "das niedlichste der ganzen Welt.$"

PokefanM_Text_AllanBeaten:
	.string "Mein TEDDIURSA!$"

PokefanM_Text_AllanAfter:
	.string "Mein TEDDIURSA!$"


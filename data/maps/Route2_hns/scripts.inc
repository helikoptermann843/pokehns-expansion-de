Route2_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route2_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route2_EventScript_Rob::
	trainerbattle_single TRAINER_ROB, Route2_Text_BugCatcherRob_Seen, Route2_Text_BugCatcherRob_Beaten
	msgbox Route2_Text_BugCatcherRob_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_Ed::
	trainerbattle_single TRAINER_ED, Route2_Text_BugCatcherEd_Seen, Route2_Text_BugCatcherEd_Beaten
	msgbox Route2_Text_BugCatcherEd_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_Doug::
	trainerbattle_single TRAINER_DOUG, Route2_Text_BugCatcherDoug_Seen, Route2_Text_BugCatcherDoug_Beaten
	msgbox Route2_Text_BugCatcherDoug_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_Sign::
	msgbox Route2_Text_Sign, MSGBOX_SIGN
	end

Route2_EventScript_CaveSign::
	msgbox Route2_Text_DiglettsCaveSign, MSGBOX_SIGN
	end

Route2_EventScript_Carbos::
    finditem ITEM_CARBOS
    end

Route2_EventScript_Nugget::
    finditem ITEM_NUGGET
    end

Route2_Text_BugCatcherRob_Seen:
	.string "Meine Käfer-\n"
	.string "Pokémon sind zäh. Du wirst verlieren!$"

Route2_Text_BugCatcherRob_Beaten:
	.string "Ich wurde vermöbelt…$"

Route2_Text_BugCatcherRob_AfterBattle:
	.string "Ich werde mir\n"
	.string "stärkere Käfer-Pokémon suchen.$"

Route2_Text_BugCatcherEd_Seen:
	.string "Wenn du mit Shorts in hohem Gras\p"
	.string "läufst, bekommst\n"
	.string "du dann Schrammen an deinen Beinen?$"

Route2_Text_BugCatcherEd_Beaten:
	.string "Au, Aua, Aua!$"

Route2_Text_BugCatcherEd_AfterBattle:
	.string "Sie stechen, wenn du ein Bad nimmst.$"

Route2_Text_BugCatcherDoug_Seen:
	.string "Warum mögen\n"
	.string "Mädchen keine Käfer-Pokémon?$"

Route2_Text_BugCatcherDoug_Beaten:
	.string "Sinnlos!$"

Route2_Text_BugCatcherDoug_AfterBattle:
	.string "Käfer-Pokémon zischen wie\p"
	.string "Plüschtiere, wenn\n"
	.string "du sie auf den Bauch drückst.\p"
	.string "Ich mag das Gefühl!$"

Route2_Text_Sign:
	.string "ROUTE 2\p"
	.string "VERTANIA CITY - MARMORIA CITY$"

Route2_Text_DiglettsCaveSign:
	.string "DIGDAs HÖHLE$"


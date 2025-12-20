Route46_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route29_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route46_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route46_EventScript_Bailey::
	trainerbattle_single TRAINER_BAILEY, Route46_Text_HikerBaileySeen, Route46_Text_HikerBaileyBeaten
	msgbox Route46_Text_HikerBaileyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route46_EventScript_Ted::
	trainerbattle_single TRAINER_TED, Route46_Text_CamperTedSeen, Route46_Text_CamperTedBeaten
	msgbox Route46_Text_CamperTedAfterBattle, MSGBOX_AUTOCLOSE
	end

Route46_EventScript_Erin::
	trainerbattle_single TRAINER_ERIN, Route46_Text_PicnickerErinSeen, Route46_Text_PicnickerErinBeaten
	msgbox Route46_Text_PicnickerErinAfterBattle, MSGBOX_AUTOCLOSE
	end

Route46_EventScript_Sign::
	lock
	msgbox Route46_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route46_EventScript_Item_Revive::
	finditem ITEM_REVIVE
	end

Route46_Text_HikerBaileySeen:
	.string "Also gut! Ich\n"
	.string "zeige dir die Kraft von BergPokémon!$"

Route46_Text_HikerBaileyBeaten:
	.string "Gnade! Ich kenne jetzt deine Kraft!$"

Route46_Text_HikerBaileyAfterBattle:
	.string "Es ist vorbei.\n"
	.string "Auch gut. Wir WANDERER sind eben so.$"

Route46_Text_CamperTedSeen::
	.string "Ich trainiere auch Pokémon!\p"
	.string "Willst du gegen mich kämpfen?$"

Route46_Text_CamperTedBeaten:
	.string "Wah…?$"

Route46_Text_CamperTedAfterBattle:
	.string "Ich habe mein\n"
	.string "Bestes gegeben und das reichte leider\n"
	.string "nicht.\p"
	.string "Ich gebe ganz\n"
	.string "offen zu - ich habe verloren.$"

Route46_Text_PicnickerErinSeen:
	.string "Ich trainiere auch Pokémon!\p"
	.string "Trittst du gegen mich an?$"

Route46_Text_PicnickerErinBeaten:
	.string "Oh, Mistkerle!$"

Route46_Text_PicnickerErinAfterBattle:
	.string "Ich war in vielen PKMN-ARENEN, aber\p"
	.string "die PKMN-ARENA in\n"
	.string "DUKATIA CITY ist am schönsten.\p"
	.string "Dort sind wunderschöne Blumen!$"

Route46_Text_PicnickerErin2Beaten:
	.string "Arg… Ständig verliere ich! Ich\p"
	.string "muss es noch härter probieren!\p"
	.string "Egal, danke, dass du immer wieder\p"
	.string "gegen mich\n"
	.string "kämpfst. Hier ist das Geschenk vom\l"
	.string "letzen Mal.$"

Route46_Text_Sign:
	.string "ROUTE 46 BERGWEG VORAUS$"

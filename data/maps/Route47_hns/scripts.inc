Route47_hns_MapScripts::
	.byte 0


Route47_EventScript_Hiker::
	trainerbattle_single TRAINER_DEVIN, Route47_Text_HikerSeen, Route47_Text_HikerBeaten
	msgbox Route47_Text_HikerAfter, MSGBOX_AUTOCLOSE
	end

Route47_Text_HikerSeen::
	.string "Sehnsucht nach anderen ist...\n"
	.string "wie sie ist.\p"
	.string "Aber Kämpfe sind Kämpfe,\n"
	.string "also los geht's!$"

Route47_Text_HikerBeaten::
	.string "Wahaha!$"

Route47_Text_HikerAfter::
	.string "Nach einem Kampf sollte man immer\n"
	.string "mit einem lächeln gehen!$"


Route47_EventScript_Camper::
	trainerbattle_single TRAINER_GRANT, Route47_Text_CamperSeen, Route47_Text_CamperBeaten
	msgbox Route47_Text_CamperAfter, MSGBOX_AUTOCLOSE
	end

Route47_Text_CamperSeen::
	.string "Ich komme nicht gut mit großen\n"
	.string "Menschenmengen klar, darum campe\l"
	.string "ich hier mit meinen Pokémon!$"

Route47_Text_CamperBeaten::
	.string "Ich sollte wohl tiefer in die\n"
	.string "Berge gehen…$"

Route47_Text_CamperAfter::
	.string "Wir sehen uns!$"

Route47_EventScript_Thom::
	trainerbattle_double TRAINER_THOM_AND_KAE, Route47_Text_Couple1Seen, Route47_Text_Couple1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route47_Text_Couple1After1, MSGBOX_AUTOCLOSE
	end

Route47_EventScript_Kae::
	trainerbattle_double TRAINER_THOM_AND_KAE, Route47_Text_Couple1Seen, Route47_Text_Couple1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route47_Text_Couple1After2, MSGBOX_AUTOCLOSE
	end

Route47_Text_Couple1Seen::
	.string "THOM: Eins plus eins ist zwei.\n"
	.string "Aber wir zusammen sind viel stärker!\p"
	.string "KAE: Wir zwei sind nicht nur ein\n"
	.string "langweiliges Paar!$"

Route47_Text_Couple1Beaten::
	.string "THOM: Das habe ich nicht erwartet.\l"
	.string "KAE: Du bist auch ungewöhnlich!$"

Route47_Text_Couple1After1::
	.string "THOM: Deine Kraft scheint\n"
	.string "unberechenbar zu sein!$"

Route47_Text_Couple1After2::
	.string "KAE: Ich dachte, du wärst ein\n"
	.string "gewöhnlicher Einzeltrainer. Ich lag\l"
	.string "falsch!$"


Route47_EventScript_Duff::
	trainerbattle_double TRAINER_DUFF_AND_EDA, Route47_Text_Couple2Seen, Route47_Text_Couple2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route47_Text_Couple2After1, MSGBOX_AUTOCLOSE
	end

Route47_EventScript_Eda::
	trainerbattle_double TRAINER_DUFF_AND_EDA, Route47_Text_Couple2Seen, Route47_Text_Couple2Beaten, Route104_Text_GinaNotEnoughMons
	msgbox Route47_Text_Couple2After2, MSGBOX_AUTOCLOSE
	end

Route47_Text_Couple2Seen::
	.string "DUFF: Auf meine Freundin aufzupassen\n"
	.string "lässt mein Herz höher schlagen!\p"
	.string "EDA: Meine Gefühle für meinen Freund\n"
	.string "sind so weit und tief wie der Ozean!$"

Route47_Text_Couple2Beaten::
	.string "DUFF: Ich war dir nicht gewachsen...\l"
	.string "EDA: Du bist wirklich etwas\n"
	.string "Besonderes...$"

Route47_Text_Couple2After1::
	.string "DUFF: Danke für den beeindruckenden\n"
	.string "Kampf! Tschüss!$"

Route47_Text_Couple2After2::
	.string "EDA: Du solltest auch einen\n"
	.string "wunderbaren Partner finden!$"


Route47_EventScript_Sage::
	lock
	faceplayer
	msgbox EmbeddedTower_Text_OldManIntro, MSGBOX_DEFAULT
	closemessage
	release
	end

EmbeddedTower_Text_OldManIntro::
	.string "Nun, hallo!\p"
	.string "Man sagt, dass jenseits dieses Lochs\n"
	.string "einst ein riesiger Turm bis weit in\l"
	.string "den Himmel ragte.\p"
	.string "Es heißt, es war ein recht seltsamer\n"
	.string "Turm, von dem die Hälfte in die Klippe\l"
	.string "eingebettet war.\p"
	.string "Es war nicht nur ein hoher Turm,\n"
	.string "der in den Himmel ragte, sondern\n"
	.string "auch tief unter die Erde!\p"
	.string "Man munkelt, er soll sogar bis\n"
	.string "zum Meeresgrund gereicht haben!\p"
	.string "Kurz gesagt, die Ruinen verbanden\n"
	.string "Himmel, Land und Meer miteinander...\p"
	.string "Der Großteil des Turms ist jetzt\n"
	.string "eingestürzt, und es bleiben nur\l"
	.string "der Eingang und das Innere, wo du\n"
	.string "seltsame Muster sehen wirst.$"


Route47_EventScript_Item_Pearl::
    finditem ITEM_PEARL
    end

Route47_EventScript_Item_Revive::
    finditem ITEM_REVIVE
    end

Route47_EventScript_Item_WhiteFlute::
    finditem ITEM_WHITE_FLUTE
    end

Route47_EventScript_Item_Stardust::
	finditem ITEM_STARDUST
	end

Route47_EventScript_Chinchou::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHINCHOU, CRY_MODE_NORMAL
	msgbox Route47_Text_Chinchou, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route47_Text_Chinchou:
	.string "Lampi: Chou!$"

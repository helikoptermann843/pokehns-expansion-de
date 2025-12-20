Route43_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route43_MapScript_OnTransition
	.byte 0

Route43_MapScript_OnTransition::
	call_if_set FLAG_HIDE_ROUTE42_SUICUNE, Route42_MapScript_HideTrigger
	end

Route43_EventScript_Ben::
	trainerbattle_single TRAINER_BEN Route43_Text_PokemaniacBenSeen, Route43_Text_PokemaniacBenBeaten
	msgbox Route43_Text_PokemaniacBenAfter, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Brent::
	trainerbattle_single TRAINER_BRENT Route43_Text_PokemaniacBrentSeen, Route43_Text_PokemaniacBrentBeaten
	msgbox Route43_Text_PokemaniacBrentAfter, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Ron::
	trainerbattle_single TRAINER_RON Route43_Text_PokemaniacRonSeen, Route43_Text_PokemaniacRonBeaten
	msgbox Route43_Text_PokemaniacRonAfter, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Marvin::
	trainerbattle_single TRAINER_MARVIN Route43_Text_FisherMarvinSeen, Route43_Text_FisherMarvinBeaten
	msgbox Route43_Text_FisherMarvinAfter, MSGBOX_AUTOCLOSE
	end
	
Route43_EventScript_Spencer::
	trainerbattle_single TRAINER_SPENCER Route43_Text_CamperSpencerSeen, Route43_Text_CamperSpencerBeaten
	msgbox Route43_Text_CamperSpencerAfter, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Tiffany::
	trainerbattle_single TRAINER_TIFFANY Route43_Text_PicnickerTiffanySeen, Route43_Text_PicnickerTiffanyBeaten
	msgbox Route43_Text_PicnickerTiffanyWantsPicnic, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Sign1::
	msgbox Route43_Sign2, MSGBOX_SIGN
	end

Route43_EventScript_Sign2::
	msgbox Route43_TrainerTips, MSGBOX_SIGN
	end

Route43_EventScript_Item_Max_Ether::
	finditem ITEM_MAX_ETHER
	end

Route43_Text_PokemaniacBenSeen:
	.string "Ich liebe Pokémon!\p"
	.string "Deshalb habe ich\n"
	.string "angefangen, Pokémon zu sammeln und\p"
	.string "damit werde ich\n"
	.string "auch nicht mehr aufhören!$"

Route43_Text_PokemaniacBenBeaten:
	.string "Wie konntest du mir das antun?$"

Route43_Text_PokemaniacBenAfter::
	.string "Was mag ich noch außer Pokémon?\p"
	.string "Margit im Radio. Ich wette, sie\n"
	.string "ist süß!$"

Route43_Text_PokemaniacBrentSeen:
	.string "Heh! Hast du seltene Pokémon?$"

Route43_Text_PokemaniacBrentBeaten:
	.string "Meine armen Pokémon-Lieblinge!$"

Route43_Text_PokemaniacBrentAfter::
	.string "Ich wäre schon glücklich,\n"
	.string "wenn ich nur ein einziges\l"
	.string "seltenes Pokémon besitzen würde.$"

Route43_Text_PokemaniacRonSeen:
	.string "Stell dir mal vor!\p"
	.string "so ein Typ namens SILBER\n"
	.string "hat sich über mein Pokémon lustig\n"
	.string "gemacht!\p"
	.string "Unverschämtheit!\n"
	.string "Mein Pokémon ist toll!$"

Route43_Text_PokemaniacRonBeaten:
	.string "Mein NIDOKING hat\n"
	.string "sich wacker geschlagen!$"

Route43_Text_PokemaniacRonAfter::
	.string "Es ist völlig in Ordnung, wenn\n"
	.string "Leute verschiedene Pokémon-Typen\n"
	.string "mögen. \p"
	.string "Pokémon bedeutet nicht nur,\n"
	.string "das stärkste zu haben.$"

Route43_Text_FisherMarvinSeen:
	.string "Ich bin gerade ziemlich am Boden.\p"
	.string "Vielleicht liegt\n"
	.string "das an dem Item, das ich benutze.\p"
	.string "Kämpfen wir! Das\n"
	.string "hebt vielleicht meine Laune!$"

Route43_Text_FisherMarvinBeaten:
	.string "Ich habe verloren,\n"
	.string "aber ich fühle mich trotzdem besser.$"

Route43_Text_FisherMarvinAfter::
	.string "Kurts Köderball ist der beste,\n"
	.string "um gefangene Pokémon zu fangen.\p"
	.string "Er ist viel effektiver als ein\n"
	.string "Hyperball.$"

Route43_Text_CamperSpencerSeen:
	.string "Man kann so viel\n"
	.string "unternehmen mit seinen Pokémon - das\l"
	.string "macht unheimlich viel Spaß!$"

Route43_Text_CamperSpencerBeaten:
	.string "Verlieren macht überhaupt keinen Spaß…$"

Route43_Text_CamperSpencerAfter::
	.string "Was geht nur am See des Zorns vor?\p"
	.string "Wir hatten doch geplant, dort zu\n"
	.string "campen.$"

Route43_Text_PicnickerTiffanySeen:
	.string "Gehst du auch zum SEE DES ZORNS?\p"
	.string "Spielen wir ein bisschen!$"

Route43_Text_PicnickerTiffanyBeaten:
	.string "Ich habe zu lange gespielt!$"

Route43_Text_PicnickerTiffanyWantsPicnic:
	.string "Ich mache ein\n"
	.string "Picknick mit meinen Pokémon.\p"
	.string "Setz dich doch zu uns.$"

Route43_Sign1:
	.string "ROUTE 43\p"
	.string "SEE DES ZORNS - MAHAGONIA CITY$"

Route43_Sign2:
	.string "ROUTE 43\p"
	.string "SEE DES ZORNS - MAHAGONIA CITY$"

Route43_TrainerTips:
	.string "TIPPS für TRAINER\p"
	.string "Alle Pokémon haben Vorund Nach-\p"
	.string "teile. Das hängt\n"
	.string "ganz davon ab, welchem Element sie\n"
	.string "angehören.\p"
	.string "Sind zwei Pokémon unterschiedlicher\p"
	.string "Elemente, kann\n"
	.string "sogar ein Pokémon verlieren, das einen\n"
	.string "höheren Level hat.\p"
	.string "Finde heraus, welche Elemente\p"
	.string "effektiv oder\n"
	.string "ineffektiv gegen deine Pokémon sind.$"

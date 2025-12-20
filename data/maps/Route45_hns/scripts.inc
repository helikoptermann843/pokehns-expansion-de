Route45_hns_MapScripts::
	.byte 0

Route45_EventScript_Erik::
	trainerbattle_single TRAINER_ERIK Route45_Text_HikerErikSeen, Route45_Text_HikerErikBeaten
	msgbox Route45_Text_HikerErikAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Michael::
	trainerbattle_single TRAINER_MICHAEL Route45_Text_HikerMichaelSeen, Route45_Text_HikerMichaelBeaten
	msgbox Route45_Text_HikerMichaelAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Parry::
	trainerbattle_single TRAINER_PARRY Route45_Text_HikerParrySeen, Route45_Text_HikerParryBeaten
	msgbox Route45_Text_HikerParryAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Timothy::
	trainerbattle_single TRAINER_TIMOTHY Route45_Text_HikerTimothySeen, Route45_Text_HikerTimothyBeaten
	msgbox Route45_Text_HikerTimothyAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Kenji::
	trainerbattle_single TRAINER_KENJI Route45_Text_BlackbeltKenjiSeen, Route45_Text_BlackbeltKenjiBeaten
	msgbox Route45_Text_BlackbeltKenjiAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Ryan::
	trainerbattle_single TRAINER_RYAN Route45_Text_CooltrainermRyanSeen, Route45_Text_CooltrainermRyanBeaten
	msgbox Route45_Text_CooltrainermRyanAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Kelly::
	trainerbattle_single TRAINER_KELLY Route45_Text_CooltrainerfKellySeen, Route45_Text_CooltrainerfKellyBeaten
	msgbox Route45_Text_CooltrainerfKellyAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Quentin::
	trainerbattle_single TRAINER_QUENTIN Route45_Text_CamperQuentinSeen, Route45_Text_CamperQuentinBeaten
	msgbox Route45_Text_CamperQuentinAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Sign::
	msgbox Route45_Text_Sign, MSGBOX_SIGN
	end

Route45_EventScript_Item_Elixir::
	finditem ITEM_ELIXIR
	end

Route45_EventScript_Item_Max_Potion::
	finditem ITEM_MAX_POTION
	end

Route45_EventScript_Item_Full_Heal::
	finditem ITEM_FULL_HEAL
	end

Route45_EventScript_Item_Nugget::
	finditem ITEM_NUGGET
	end

Route45_Text_HikerErikSeen::
	.string "Sei auf alles vorbereitet!\p"
	.string "Mal sehen, ob deine Pokémon\n"
	.string "richtig trainiert sind!$"

Route45_Text_HikerErikBeaten::
	.string "Oh, ich habe verloren!$"

Route45_Text_HikerErikAfter::
	.string "Ich gehe zurück zum Eispfad von\n"
	.string "Ebenholz-City und trainiere weiter.$"

Route45_Text_HikerMichaelSeen::
	.string "He! Du hast Mumm in den Knochen!\p"
	.string "Aber weißt du was?\p"
	.string "Wenn es um echten Mut geht,\n"
	.string "bin ich der Mann!$"

Route45_Text_HikerMichaelBeaten::
	.string "Meine Pokémon waren leider\n"
	.string "nicht couragiert genug!$"

Route45_Text_HikerMichaelAfter::
	.string "Mann, ich liebe KP-Plus! Mmmm, lecker!\n"
	.string "\p"
	.string "Ich trinke es immer selber!\p"
	.string "Ich kann nicht anders!$"

Route45_Text_HikerParrySeen::
	.string "Meine Pokémon sind voll aufgeladen!$"

Route45_Text_HikerParryBeaten::
	.string "Wahahah! Ich bin der große Verlierer!$"

Route45_Text_HikerParryAfter::
	.string "Ich bin nicht gut im Denken,\n"
	.string "verstehst? \p"
	.string "Darum stürme ich einfach mit Kraft\n"
	.string "vor!$"

Route45_Text_HikerTimothySeen::
	.string "Warum klettere ich auf Berge?\p"
	.string "Weil sie da sind.\p"
	.string "Warum trainiere ich Pokémon?\p"
	.string "Weil es sie gibt!$"

Route45_Text_HikerTimothyBeaten::
	.string "Niederlagen… Die gibt es auch!$"

Route45_Text_HikerTimothyAfter::
	.string "Das Beste, was mir je passiert ist,\n"
	.string "war, Pokémon zu entdecken.$"

Route45_Text_HikerParryGivesIron::
	.string "Ich weiß nicht, wie ich gewinnen kann!\n"
	.string "\p"
	.string "Mach weiter!\p"
	.string "Oh, und nimm dies - das ist das\n"
	.string "Geschenk, das du beim letzten Mal\l"
	.string "nicht mitnehmen konntest.$"

Route45_Text_BlackbeltKenjiSeen::
	.string "Ich habe hier ganz allein trainiert.\p"
	.string "Sieh die Früchte meiner Arbeit!$"

Route45_Text_BlackbeltKenjiBeaten::
	.string "Aahh!$"

Route45_Text_BlackbeltKenjiAfter::
	.string "Das erfordert extreme Maßnahmen.\p"
	.string "Ich muss in die Berge gehen und\n"
	.string "einsam trainieren.$"

Route45_Text_BlackbeltKenjiMorning::
	.string "Ich trainiere noch ein wenig\n"
	.string "bis zur Mittagspause.$"

Route45_Text_BlackbeltKenjiNight::
	.string "Wir hatten alle eine ausgedehnte\n"
	.string "Mittagspause und sind wieder fit!\p"
	.string "Wir setzen das Training fort!$"

Route45_Text_CooltrainermRyanSeen::
	.string "Was hältst du vom Pokémon-Training?$"

Route45_Text_CooltrainermRyanBeaten::
	.string "Du verdienst meine ganze Hochachtung.$"

Route45_Text_CooltrainermRyanAfter::
	.string "Ich sehe, dass du deine Pokémon\n"
	.string "mit Sorgfalt trainierst.\p"
	.string "Die Bindung, die du aufbaust, wird dir\n"
	.string "in schwierigen Situationen helfen.$"

Route45_Text_CooltrainerfKellySeen::
	.string "Welche Kampftechnik verwendest du?\p"
	.string "Setze starke Attacken nicht völlig\n"
	.string "willkürlich ein!$"

Route45_Text_CooltrainerfKellyBeaten::
	.string "Gut. Dann habe ich eben verloren.$"

Route45_Text_CooltrainerfKellyAfter::
	.string "Ich bin nicht für übermächtige\n"
	.string "Attacken.\p"
	.string "Ich will gewinnen, aber ich will\n"
	.string "auch keine Pokémon verletzen.$"

Route45_Text_CamperQuentinSeen::
	.string "Ich bin wirklich stark!$"

Route45_Text_CamperQuentinBeaten::
	.string "Ich habe im Duellturm gut gekämpft…$"

Route45_Text_CamperQuentinAfter::
	.string "Warst du schon im Duellturm?\p"
	.string "Ich verliere dort nie, aber…$"

Route45_Text_Sign:
	.string "ROUTE 45 BERGWEG VORAUS$"

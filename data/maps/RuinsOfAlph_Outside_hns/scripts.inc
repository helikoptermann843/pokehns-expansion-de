RuinsOfAlph_Outside_hns_MapScripts::
	.byte 0

RuinsOfAlph_Outside_EventScript_Quagsire::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_QUAGSIRE, CRY_MODE_NORMAL
	msgbox RuinsOfAlph_Outside_Text_Quagsire, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RuinsOfAlph_Outside_Text_Quagsire:
	.string "Es gibt viele unterschiedliche\p"
	.string "ICOGNITO, die wir\n"
	.string "für unsere Geheimcodes benötigen.$"

RuinsOfAlph_Outside_EventScript_Stan::
	trainerbattle_single TRAINER_STAN, RuinsOfAlph_Outside_Text_SuperNerdStan_Seen, RuinsOfAlph_Outside_Text_SuperNerdStan_Beaten
	msgbox RuinsOfAlph_Outside_Text_SuperNerdStan_After, MSGBOX_AUTOCLOSE
	end

RuinsOfAlph_Outside_EventScript_Nathan::
	trainerbattle_single TRAINER_NATHAN, RuinsOfAlph_Outside_Text_PsychicNathan_Seen, RuinsOfAlph_Outside_Text_PsychicNathan_Beaten
	msgbox RuinsOfAlph_Outside_Text_PsychicNathan_After, MSGBOX_AUTOCLOSE
	end

RuinsOfAlph_Outside_EventScript_Youngster1::
	lock
	faceplayer
	msgbox RuinsOfAlph_Outside_Text_Youngster1, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Youngster2::
	lock
	faceplayer
	msgbox RuinsOfAlph_Outside_Text_Youngster2, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Fisher1::
	lock
	faceplayer
	msgbox RuinsOfAlph_Outside_Text_Fisher1, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Fisher2::
	lock
	faceplayer
	msgbox RuinsOfAlph_Outside_Text_Fisher2, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Sign1::
	lock
	msgbox RuinsOfAlph_Outside_Text_MainSign, MSGBOX_SIGN
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Sign2::
	lock
	msgbox RuinsOfAlph_Outside_Text_ResearchSign, MSGBOX_SIGN
	closemessage
	release
	end

RuinsOfAlph_Outside_EventScript_Sign3::
	lock
	msgbox RuinsOfAlph_Outside_Text_MysteryChamberSign, MSGBOX_SIGN
	closemessage
	release
	end

RuinsOfAlph_Outside_Text_Scientist:
	.string "Hm? Das ist doch\n"
	.string "ein Pokédex, nicht wahr? Darf ich ihn\n"
	.string "sehen?\p"
	.string "Es gibt so viele\n"
	.string "unterschiedliche Pokémon.\p"
	.string "Hm? Was ist das?\p"
	.string "Was ist das für ein Pokémon?\p"
	.string "Es sieht aus wie die merkwürdigen\p"
	.string "Zeichen an den Wänden in den RUINEN.\p"
	.string "Falls diese Zei-\n"
	.string "chen tatsächlich  Pokémon sind, dann\n"
	.string "gibt es noch viel mehr davon.\p"
	.string "Ich weiß! Lass\n"
	.string "mich deinen Pokédex erweitern.\l"
	.string "Mir nach!$"

RuinsOfAlph_Outside_Text_SuperNerdStan_Seen::
	.string "Was willst du? Ich studiere -\n"
	.string "stör mich nicht!$"

RuinsOfAlph_Outside_Text_SuperNerdStan_Beaten::
	.string "Entschuldigung…\n"
	.string "Ich bin frustriert über unser\l"
	.string "fehlendes Verständnis…$"

RuinsOfAlph_Outside_Text_SuperNerdStan_After::
	.string "Die RUINEN sind etwa 1500 Jahre alt.\p"
	.string "Niemand weiß, wer sie erbaut hat.\p"
	.string "Auch die Bedeutung der Pokémon-\n"
	.string "Statuen ist unbekannt.\p"
	.string "Alles ist ein großes Rätsel…$"

RuinsOfAlph_Outside_Text_PsychicNathan_Seen::
	.string "Hmmm… Das ist ein seltsamer Ort.$"

RuinsOfAlph_Outside_Text_PsychicNathan_Beaten:
	.string "…$"

RuinsOfAlph_Outside_Text_PsychicNathan_After:
	.string "Hier kann ich gut nachdenken.$"

RuinsOfAlph_Outside_Text_MysteryChamberSign:
	.string "RÄTSELSTEIN PUZZLEKAMMER$"

RuinsOfAlph_Outside_Text_MainSign:
	.string "ALPH-RUINEN GÄSTE WILLKOMMEN$"

RuinsOfAlph_Outside_Text_ResearchSign:
	.string "Alph-Ruinen Forschungszentrum\p"
	.string "Die Autorität der\n"
	.string "Alph-Ruinen$"

RuinsOfAlph_Outside_Text_Fisher1:
	.string "Beim Erkunden der RUINEN haben wir\p"
	.string "plötzlich eine\n"
	.string "seltsame Gegenwart gespürt.\p"
	.string "Alle hatten Angst und liefen davon.\p"
	.string "Du solltest auch vorsichtig sein.$"

RuinsOfAlph_Outside_Text_Fisher2:
	.string "Den RUINEN wohnt\n"
	.string "ein großes Geheimnis inne!\p"
	.string "…Ich denke…$"

RuinsOfAlph_Outside_Text_Youngster1:
	.string "Es gibt viele unterschiedliche\p"
	.string "ICOGNITO, die wir\n"
	.string "für unsere Geheimcodes benötigen.$"

RuinsOfAlph_Outside_Text_Youngster2:
	.string "V… O… R… A… U… S… Hmm…\p"
	.string "Wie?\p"
	.string "Ich dechiffriere diese Nachricht!$"

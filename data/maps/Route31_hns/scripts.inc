Route31_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route31_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route31_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route31_EventScript_Bugcatcher_Wade::
	trainerbattle_single TRAINER_WADE, Route31_Text_BugCatcherWade1_Seen, Route31_Text_BugCatcherWade1_Beaten
	msgbox Route31_Text_BugCatcherWade1_After, MSGBOX_AUTOCLOSE
	end

Route31_EventScript_Youngster::
	lock
	faceplayer
	msgbox Route31_Text_CooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end

Route31_EventScript_SleepyMan::
	lock
	faceplayer
	goto_if_eq VAR_KENYA, 1, Route31_EventScript_SleepyMan_AskForKenya
	msgbox Route31_Text_SleepyMan, MSGBOX_DEFAULT
	closemessage
	release
	end

Route31_EventScript_SleepyMan_AskForKenya::
	msgbox Route31_Text_SleepyManGotMail MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route31_EventScript_SleepyMan_GiveKenya
	msgbox Route31_Text_SleepyManFail, MSGBOX_DEFAULT
	closemessage
	release
	end

Route31_EventScript_SleepyMan_GiveKenya::
	removenamedmon 1
	goto_if_eq VAR_RESULT, MON_CANT_GIVE, Route31_EventScript_SleepyMan_Fail
	msgbox Route31_Text_HandOverMailMon, MSGBOX_DEFAULT
	delay 55
	callnative UpdateFollowingPokemon
	msgbox Route31_Text_ReadingMail, MSGBOX_DEFAULT
	giveitem ITEM_TM_TORMENT
	msgbox Route31_Text_DescribeNightmare, MSGBOX_DEFAULT
	closemessage
	setvar VAR_KENYA, 2
	release
	end

Route31_EventScript_SleepyMan_Fail::
	msgbox Route31_Text_SleepyManFail, MSGBOX_DEFAULT
	release
	end


Route31_EventScript_Boy::
	lock
	faceplayer
	msgbox Route31_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Route31_EventScript_DarkCaveSign::
	lock
	msgbox Route31_Text_DarkCaveSign, MSGBOX_SIGN
	closemessage
	release
	end

Route31_EventScript_Sign::
	lock
	msgbox Route31_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route31_EventScript_ItemPokeBall::
	finditem ITEM_POKE_BALL
	end

Route31_EventScript_ItemAntidote::
	finditem ITEM_ANTIDOTE
	end

Route31_Text_CooltrainerM:
	.string "DUNKELHÖHLE…\p"
	.string "Wenn ein Pokémon\n"
	.string "für Licht sorgen könnte, würde ich sie\l"
	.string "erforschen.$"

Route31_Text_BugCatcherWade1_Seen:
	.string "Ich habe einige\n"
	.string "Pokémon gefangen. Lass uns kämpfen!$"

Route31_Text_BugCatcherWade1_Beaten:
	.string "Awwwww…$"

Route31_Text_BugCatcherWade1_After:
	.string "Du kannst Pokémon fangen, auch wenn\p"
	.string "du bereits sechs bei dir trägst.\p"
	.string "Fängst du eines,\n"
	.string "wird es automatisch auf die BOX im PC\l"
	.string "übertragen.$"

Route31_Text_SleepyMan:
	.string "…Uargh… Hä?\p"
	.string "Heute bin ich auf\n"
	.string "der Suche nach Pokémon zu viel\n"
	.string "gelaufen.\p"
	.string "Meine Füße schmer-\n"
	.string "zen und ich bin müde…\p"
	.string "Wenn ich ein wil-\n"
	.string "des Pokémon wäre, würde ich mich\n"
	.string "leicht fangen lassen…\p"
	.string "…Uargh… Hä?\p"
	.string "Heute bin ich auf\n"
	.string "der Suche nach Pokémon zu viel\n"
	.string "gelaufen.\p"
	.string "Meine Füße schmer-\n"
	.string "zen und ich bin müde…\p"
	.string "Wenn ich ein wil-\n"
	.string "des Pokémon wäre, würde ich mich\n"
	.string "leicht fangen lassen…\p"
	.string "…Zzzz…$"

Route31_Text_SleepyManGotMail:
	.string "…Zzzz… Häh?\p"
	.string "Was ist? Du hast einen BRIEF für mich?$"

Route31_Text_SleepyManFail:
	.string "…Uargh… Hä?\p"
	.string "Heute bin ich auf\n"
	.string "der Suche nach Pokémon zu viel\n"
	.string "gelaufen.\p"
	.string "Meine Füße schmer-\n"
	.string "zen und ich bin müde…\p"
	.string "Wenn ich ein wil-\n"
	.string "des Pokémon wäre, würde ich mich\n"
	.string "leicht fangen lassen…\p"
	.string "…Zzzz…$"

Route31_Text_HandOverMailMon:
	.string "{PLAYER} übergibt\n"
	.string "das Pokémon, das den BRIEF trägt.$"

Route31_Text_ReadingMail:
	.string "Mal sehen…\p"
	.string "…die DUNKELHÖHLE\n"
	.string "führt zu einem anderen Weg…\p"
	.string "Gut zu wissen.\p"
	.string "Danke, dass du mir\n"
	.string "den BRIEF brachtest.\p"
	.string "Mein Freund ist\n"
	.string "ein netter Mensch, genau wie du!\p"
	.string "Ich möchte mich\n"
	.string "bei dir dafür revanchieren!\p"
	.string "Ich hab's! Ich\n"
	.string "möchte dir das hier geben!$"

Route31_Text_DescribeNightmare:
	.string "TM50 enthält NACHTMAHR.\p"
	.string "Dies ist eine gemeine Attacke,\p"
	.string "die einem schlaf-\n"
	.string "enden Gegner kontinuierlich KP\n"
	.string "abzieht.\p"
	.string "Uuuuuuh… Das ist fies…\p"
	.string "Ich möchte nicht schlecht träumen.$"

Route31_Text_WrongMail:
	.string "Der BRIEF ist nicht für mich.$"

Route31_Text_MissingMail:
	.string "Was ist so beson-\n"
	.string "ders an diesem Pokémon?\p"
	.string "Es trägt keinen BRIEF.$"

Route31_Text_DeclinedToHandOverMail:
	.string "Was? Du möchtest nichts?$"

Route31_Text_CantTakeLastMon:
	.string "Wenn ich dir dieses Pokémon weg-\p"
	.string "nehme, womit willst du dann\p"
	.string "kämpfen?$"

Route31_Text_Youngster:
	.string "Ich habe ein gutes\n"
	.string "Pokémon in der DUNKELHÖHLE gefunden.\p"
	.string "Ich ziehe es groß,\n"
	.string "um später gegen FALK anzutreten.\p"
	.string "Er ist der ARENA-\n"
	.string "LEITER von VIOLA CITY.$"

Route31_Text_Sign:
	.string "ROUTE 31\p"
	.string "VIOLA CITY - ROSALIA CITY$"

Route31_Text_DarkCaveSign:
	.string "DUNKELHÖHLE$"

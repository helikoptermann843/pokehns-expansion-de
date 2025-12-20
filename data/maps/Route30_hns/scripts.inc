.set LOCALID_ROUTE_30_JOEY, 6

Route30_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route30_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route30_OnFrame
	.byte 0

Route30_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route30_OnFrame::
	map_script_2 VAR_CHERRYGROVE_CITY_STATE, 2, Route30_EventScript_ElmCall_Trigger
	.2byte 0
	
Route30_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, Route30_EventScript_Boy2
	msgbox Route30_Text_YoungsterDirectionsToMrPokemon, MSGBOX_DEFAULT
	closemessage
	release
	end

Route30_EventScript_Boy2::
	lock
	faceplayer
	msgbox Route30_Text_YoungsterEveryoneIsBattling, MSGBOX_DEFAULT
	closemessage
	release
	end

Route30_EventScript_Girl::
	lock
	faceplayer
	msgbox Route30_Text_CooltrainerF, MSGBOX_DEFAULT
	closemessage
	release
	end

Route30_EventScript_Youngster_Joey_Fighting::
	lock
	msgbox Route30_Text_UseTackle, 	MSGBOX_AUTOCLOSE
	waitmessage
	playse SE_PIN
	applymovement LOCALID_ROUTE_30_JOEY, Common_Movement_QuestionMark
	delay 30
	faceplayer
	msgbox Route30_Text_ThisIsABigBattle, MSGBOX_AUTOCLOSE
	waitmessage
	turnobject LOCALID_ROUTE_30_JOEY DIR_NORTH
	release
	end


Route30_EventScript_Youngster_Joey::
	trainerbattle_single TRAINER_JOEY, Route30_Text_YoungsterJoey1Seen, Route30_Text_YoungsterJoey1Beaten
	msgbox Route30_Text_YoungsterJoey1After, MSGBOX_AUTOCLOSE
	end

Route30_EventScript_Youngster_Mikey::
	trainerbattle_single TRAINER_MIKEY, Route30_Text_YoungsterMikeySeen, Route30_Text_YoungsterMikeyBeaten
	msgbox Route30_Text_YoungsterMikeyAfter, MSGBOX_AUTOCLOSE
	end
	
Route30_EventScript_Bugcatcher_Don::
	trainerbattle_single TRAINER_DON, Route30_Text_BugCatcherDonSeen, Route30_Text_BugCatcherDonBeaten
	msgbox Route30_Text_BugCatcherDonAfter, MSGBOX_AUTOCLOSE
	end

Route30_EventScript_ElmCall_Trigger::
	lock
	pokenavcall Route30_Text_Elm_Disaster
	waitmessage
	delay 30
	setvar VAR_CHERRYGROVE_CITY_STATE, 3
	release
	end

Route30_EventScript_Sign::
	lock
	msgbox Route30_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route30_EventScript_TrainerTips::
	lock
	msgbox Route30_Text_TrainerTips, MSGBOX_SIGN
	closemessage
	release
	end	

Route30_EventScript_Poliwag::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POLIWAG, CRY_MODE_NORMAL
	msgbox Route30_Text_Poliwag, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route30_EventScript_Mailbox::
	msgbox Route30_Text_Mailbox, MSGBOX_SIGN
	end

Route30_Text_Mailbox:
	.string "MR.Pokémon's Haus$"

Route30_Text_UseTackle:
	.string "Los, Rattfratz!\p"
	.string "Tackle!$"

Route30_Text_ThisIsABigBattle:
	.string "Was? Das ist ein\n"
	.string "harter Kampf! Lass mich in Ruhe!$"

Route30_Text_YoungsterJoey1Seen:
	.string "Ich habe verloren!\n"
	.string "Ich versuche, mehr Pokémon zu finden.\n"
	.string "\p"
	.string "Halt! Du siehst\n"
	.string "schwach aus! Los, lass uns kämpfen!$"

Route30_Text_YoungsterJoey1Beaten:
	.string "Ahh! Wieder verloren! Mist!$"

Route30_Text_YoungsterJoey1After:
	.string "Benötige ich noch mehr Pokémon, um\p"
	.string "noch besser zu kämpfen?\p"
	.string "Nein! Ich behalte\n"
	.string "dieses, egal, was passiert!$"

Route30_Text_YoungsterMikeySeen:
	.string "Du bist ein Pokémon-Trainer, oder?\p"
	.string "Dann musst du kämpfen!$"

Route30_Text_YoungsterMikeyBeaten:
	.string "Das ist seltsam.\n"
	.string "Davor habe ich gewonnen.$"

Route30_Text_YoungsterMikeyAfter:
	.string "Ein guter Trainer\n"
	.string "zu werden ist nicht einfach.\p"
	.string "Ich kämpfe gegen\n"
	.string "andere Trainer, um besser zu werden.$"

Route30_Text_BugCatcherDonSeen:
	.string "Anstatt eines\n"
	.string "Käfer-Pokémon traf ich auf einen\l"
	.string "Trainer!$"

Route30_Text_BugCatcherDonBeaten:
	.string "Argh! Du bist zu stark!$"

Route30_Text_BugCatcherDonAfter:
	.string "Mir sind während\n"
	.string "des Fangens die Pokébälle ausgegangen.\n"
	.string "\p"
	.string "Ich hätte mehr kaufen sollen…$"

Route30_Text_YoungsterDirectionsToMrPokemon:
	.string "Das Haus von\n"
	.string "MR. Pokémon ist gleich da vorne!$"

Route30_Text_YoungsterEveryoneIsBattling:
	.string "Jedem macht das Kämpfen Spaß!$"

Route30_Text_CooltrainerF:
	.string "Ich bin kein Trainer.\p"
	.string "Wenn du einem in\n"
	.string "die Augen siehst, dann bereite dich\l"
	.string "auf einen Kampf vor.$"

Route30_Text_Sign:
	.string "ROUTE 30\p"
	.string "VIOLA CITY - ROSALIA CITY$"

Route30_Text_MrPokemonsHouseDirectionsSign:
	.string "Das Haus von\n"
	.string "MR. Pokémon? Immer geradeaus.$"

Route30_Text_MrPokemonsHouseSign:
	.string "Das HAUS von MR. Pokémon$"

Route30_Text_TrainerTips:
	.string "TIPPS für TRAINER\p"
	.string "Du sollst keine Pokémon stehlen!\p"
	.string "Pokébälle dürfen\n"
	.string "nur bei wilden Pokémon eingesetzt\l"
	.string "werden!$"

Route30_Text_YoungsterJoeyGiveHPUp:
	.string "Ich habe schon wieder verloren…\n"
	.string "Mann, du bist echt stark!\p"
	.string "Oh ja, fast hätte ich vergessen,\n"
	.string "dir das hier zu geben.\p"
	.string "Benutz es, um noch stärker zu\n"
	.string "werden, okay?\p"
	.string "Ich werde auch stärker werden.$"

Route30_Text_Elm_Disaster:
	.string "PROF. Lind: H-hallo? {PLAYER}? Es\n"
	.string "ist eine Katastrophe!\p"
	.string "Äh, ähm, es ist einfach schrecklich!\p"
	.string "Was soll ich nur tun? Es…\n"
	.string "Oh nein…\p"
	.string "Bitte komm sofort hierher zurück!$"


Route30_Text_Poliwag:
	.string "Quapsel: Quap Quaap!$"

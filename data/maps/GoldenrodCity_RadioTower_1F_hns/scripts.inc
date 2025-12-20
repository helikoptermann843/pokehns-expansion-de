.set LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, 6
.set LOCALID_GOLDENROD_RADIOTOWER_GRUNT, 3
@ .set LOCALID_LOTTERY_CLERK, 2

GoldenrodCity_RadioTower_1F_hns_MapScripts::
	.byte 0

RadioTower1F_EventScript_Grunt::
	lock
	faceplayer
	msgbox RadioTower1F_Text_GruntM3Seen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_2,  RadioTower1F_Text_GruntM3Beaten
	msgbox RadioTower1F_Text_GruntM3After, MSGBOX_AUTOCLOSE
	turnobject LOCALID_GOLDENROD_RADIOTOWER_GRUNT, DIR_EAST
	applymovement2 LOCALID_GOLDENROD_RADIOTOWER_GRUNT, RadioTower1F_Movement_Rocket
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_GOLDENROD_RADIOTOWER_GRUNT
	setflag FLAG_HIDE_ROCKET_GOLDENROD_RADIOTOWER_1
	release
	end

RadioTower1F_Movement_Rocket::
	walk_in_place_right
	step_end

RadioTower1F_EventScript_Lass::
	lock
	faceplayer
	msgbox RadioTower1F_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_Youngster::
	lock
	faceplayer
	msgbox RadioTower1F_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_Whitney::
	lock
	faceplayer
	msgbox RadioTower1F_Text_Whitney1, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, DIR_SOUTH
	release
	end

RadioTower1F_Text_Whitney1::
	.string "Bianka: Hallo!\p"
	.string "Ich bin Bianka!\p"
	.string "Ich hörte vom Quiz, um ein RADIO\n"
	.string "zu gewinnen, also kam ich hierher\l"
	.string "…\p"
	.string "Aber dieses Quiz ist so schwer!$"

RadioTower1F_Text_Whitney2::
	.string "Bianka: Wow, du hast es geschafft!\p"
	.string "Ich dachte, die Antwort auf die\n"
	.string "dritte Frage wäre sicher Aprikorn!\l"
	.string "Ups!\p"
	.string "Jetzt geht’s zurück zur Arena!$"

RadioTower1F_EventScript_Reception::
	lock
	faceplayer
	msgbox RadioTower1F_Text_ReceptionistWelcome, MSGBOX_DEFAULT
	goto_if_unset FLAG_ENABLE_RADIO, RadioTower1F_EventScript_ReceptionOfferQuiz
	msgbox RadioTower1F_Text_ReceptionistNoTours, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionOfferQuiz::
	msgbox RadioTower1F_Text_RadioCardWomanOfferQuiz, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, RadioTower1F_EventScript_ReceptionQuiz1
	msgbox RadioTower1F_Text_DeclineQuiz, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz1::
	msgbox RadioTower1F_Text_QuizQuestion1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, RadioTower1F_EventScript_ReceptionQuiz2
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz2::
	msgbox RadioTower1F_Text_QuizQuestion2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, RadioTower1F_EventScript_ReceptionQuiz3
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz3::
	msgbox RadioTower1F_Text_QuizQuestion3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, RadioTower1F_EventScript_ReceptionQuiz4
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz4::
	msgbox RadioTower1F_Text_QuizQuestion4, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, RadioTower1F_EventScript_ReceptionQuiz5
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionQuiz5::
	msgbox RadioTower1F_Text_QuizQuestion5, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, RadioTower1F_EventScript_ReceptionGiveRadio
	msgbox RadioTower1F_Text_WrongAnswer, MSGBOX_DEFAULT
	closemessage
	release
	end

RadioTower1F_EventScript_ReceptionGiveRadio::
	msgbox RadioTower1F_Text_QuizWin, MSGBOX_DEFAULT
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_RADIO
	waitfanfare
	msgbox RadioTower1F_Text_TuneIn, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, Common_Movement_ExclamationMark
	delay 60
	turnobject LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, DIR_EAST
	delay 20
	turnobject LOCALID_PLAYER, DIR_WEST
	msgbox RadioTower1F_Text_Whitney2, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_GOLDENROD_RADIOTOWER_WHITNEY, GoldenrodCity_RadioTower_4F_Movement_WhitneyLeave
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_GOLDENROD_RADIOTOWER_WHITNEY
	setflag FLAG_ENABLE_RADIO
	setflag FLAG_HIDE_GOLDENROD_BEAUTY
	setvar VAR_GOLDENROD_CITY_STATE, 2
	release
	end

GoldenrodCity_RadioTower_4F_Movement_WhitneyLeave:
	face_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_in_place_down
	step_end

GoldenrodCity_RadioTower_1F_EventScript_Sign::
	lock
	msgbox RadioTower1F_Text_Directory, MSGBOX_SIGN
	closemessage
	release
	end

RadioTower1F_Text_ReceptionistWelcome:
	.string "Willkommen!$"

RadioTower1F_Text_ReceptionistNoTours:
	.string "Guten Tag! Leider\n"
	.string "bieten wir heute keine Führungen an.$"

RadioTower1F_Text_RadioCardWomanOfferQuiz:
	.string "Bei uns läuft\n"
	.string "momentan ein besonderes Quiz.\p"
	.string "Beantworte die\n"
	.string "fünf Fragen richtig, um ein\n"
	.string "RADIO-MODUL zu gewinnen.\p"
	.string "Stecke es in den COM, um\p"
	.string "überall und zu\n"
	.string "jeder Zeit Radio hören zu können.\p"
	.string "Möchtest du am Quiz teilnehmen?$"

RadioTower1F_Text_QuizQuestion1:
	.string "Frage 1:\p"
	.string "Gibt es ein Pokémon, das nur am\n"
	.string "Tag erscheint?$"

RadioTower1F_Text_QuizQuestion2:
	.string "Richtig! Frage 2:\p"
	.string "Ist diese Aussage korrekt?\p"
	.string "Man kann im SHOP keine Beere\n"
	.string "kaufen.$"

RadioTower1F_Text_QuizQuestion3:
	.string "Volltreffer! Frage 3:\p"
	.string "Benutzt Kurt, der Pokéball-\n"
	.string "Erbauer, Aprikoko als Zutaten?$"

RadioTower1F_Text_QuizQuestion4:
	.string "Bis hierher gut!\n"
	.string "Frage 4:\p"
	.string "Ist Falk der Leiter von\n"
	.string "VIOLA, der Vogel-Pokémon nutzt?$"

RadioTower1F_Text_QuizQuestion5:
	.string "Wow! Wieder richtig!\n"
	.string "Hier die letzte Frage:\p"
	.string "Haben die Slots im GAME CORNER\n"
	.string "Glumanda auf den Walzen?$"

RadioTower1F_Text_QuizWin:
	.string "Bingo! Volltreffer!\n"
	.string "Glückwunsch!\p"
	.string "Hier dein Preis: ein RADIO!$"

RadioTower1F_Text_PokegearRadio:
	.string "{PLAYER}s Pokécom\n"
	.string "kann jetzt Radio empfangen!$"

RadioTower1F_Text_TuneIn:
	.string "Bitte hör in unsere Radio-\n"
	.string "sendungen rein.$"

RadioTower1F_Text_WrongAnswer:
	.string "Ich liebe Margit vom POKéMON-\n"
	.string "TALK.\p"
	.string "Ich kenne aber nur ihre Stimme.$"

RadioTower1F_Text_DeclineQuiz:
	.string "Oh. Verstehe.\n"
	.string "Komm wieder, falls du es dir\l"
	.string "anders überlegst.$"

RadioTower1F_Text_Lass:
	.string "Ben ist ein großartiger DJ.\p"
	.string "Seine sonore Stimme lässt mich\n"
	.string "dahinschmelzen!$"

RadioTower1F_Text_Youngster:
	.string "Ich liebe Margit vom POKéMON-\n"
	.string "TALK.\p"
	.string "Ich kenne aber nur ihre Stimme.$"

RadioTower1F_Text_GruntM3Seen:
	.string "Wir haben endlich den\n"
	.string "Radioturm übernommen!\p"
	.string "Jetzt wird jeder die wahre Angst\n"
	.string "von TEAM ROCKET spüren!\p"
	.string "Wir zeigen dir, wie furchtbar wir\n"
	.string "sein können!$"

RadioTower1F_Text_GruntM3Beaten:
	.string "Zu stark! Tut mir leid, Boss…$"

RadioTower1F_Text_GruntM3After:
	.string "Du bist zu stark.\p"
	.string "Unser Plan könnte scheitern.\n"
	.string "Ich muss die anderen warnen…$"

RadioTower1F_Text_Directory:
	.string "EG REZEPTION 1S VERKAUF\p"
	.string "2S PERSONAL 3S PRODUKTION\p"
	.string "4S BÜRO DES INTENDANTEN$"


GoldenrodCity_RadioTower_1F_EventScript_LotteryClerk::
	lock
	faceplayer
	dotimebasedevents
	goto_if_ne VAR_POKELOT_PRIZE_ITEM, ITEM_NONE, GoldenrodCity_RadioTower_1F_EventScript_GivePrizeFromEarlier
	goto_if_set FLAG_DAILY_PICKED_LOTO_TICKET, GoldenrodCity_RadioTower_1F_EventScript_ComeBackTomorrow
	msgbox GoldenrodCity_RadioTower_1F_Text_LotteryCornerDrawTicket, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_RadioTower_1F_EventScript_PleaseVisitAgain
	setflag FLAG_DAILY_PICKED_LOTO_TICKET
	message GoldenrodCity_RadioTower_1F_Text_PleasePickTicket
	waitmessage
	special RetrieveLotteryNumber
	copyvar VAR_0x8008, VAR_RESULT
	special BufferLottoTicketNumber
	msgbox GoldenrodCity_RadioTower_1F_Text_TicketNumberIsXPleaseWait, MSGBOX_DEFAULT
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	playse SE_PC_ON
	@special DoLotteryCornerComputerEffect
	special PickLotteryCornerTicket
	delay 220
	@special EndLotteryCornerComputerEffect
	delay 10
	applymovement 4, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_0x8004, 0, GoldenrodCity_RadioTower_1F_EventScript_NoMatch
	incrementgamestat GAME_STAT_WON_POKEMON_LOTTERY
	call_if_eq VAR_0x8006, 0, GoldenrodCity_RadioTower_1F_EventScript_TicketMatchPartyMon
	call_if_eq VAR_0x8006, 1, GoldenrodCity_RadioTower_1F_EventScript_TicketMatchPCMon
	bufferitemname STR_VAR_1, VAR_0x8005
	call_if_eq VAR_0x8004, 1, GoldenrodCity_RadioTower_1F_EventScript_TwoDigitMatch
	call_if_eq VAR_0x8004, 2, GoldenrodCity_RadioTower_1F_EventScript_ThreeDigitMatch
	call_if_eq VAR_0x8004, 3, GoldenrodCity_RadioTower_1F_EventScript_FourDigitMatch
	call_if_eq VAR_0x8004, 4, GoldenrodCity_RadioTower_1F_EventScript_FullMatch
	giveitem VAR_0x8005
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_RadioTower_1F_EventScript_RecordPrizeNoRoom
	special TryPutLotteryWinnerReportOnAir
	goto GoldenrodCity_RadioTower_1F_EventScript_PleaseVisitAgain2
	end

GoldenrodCity_RadioTower_1F_EventScript_TicketMatchPartyMon::
	msgbox GoldenrodCity_RadioTower_1F_Text_TicketMatchesPartyMon, MSGBOX_DEFAULT
	return

GoldenrodCity_RadioTower_1F_EventScript_TicketMatchPCMon::
	msgbox GoldenrodCity_RadioTower_1F_Text_TicketMatchesPCMon, MSGBOX_DEFAULT
	return

GoldenrodCity_RadioTower_1F_EventScript_ComeBackTomorrow::
	msgbox GoldenrodCity_RadioTower_1F_Text_ComeBackTomorrow, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_RadioTower_1F_EventScript_PleaseVisitAgain::
	msgbox GoldenrodCity_RadioTower_1F_Text_PleaseVisitAgain, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_RadioTower_1F_EventScript_NoMatch::
	msgbox GoldenrodCity_RadioTower_1F_Text_NoNumbersMatched, MSGBOX_DEFAULT
	goto GoldenrodCity_RadioTower_1F_EventScript_PleaseVisitAgain2
	end

GoldenrodCity_RadioTower_1F_EventScript_PleaseVisitAgain2::
	msgbox GoldenrodCity_RadioTower_1F_Text_PleaseVisitAgain2, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_RadioTower_1F_EventScript_TwoDigitMatch::
	msgbox GoldenrodCity_RadioTower_1F_Text_TwoDigitsMatched, MSGBOX_DEFAULT
	return

GoldenrodCity_RadioTower_1F_EventScript_ThreeDigitMatch::
	msgbox GoldenrodCity_RadioTower_1F_Text_ThreeDigitsMatched, MSGBOX_DEFAULT
	return

GoldenrodCity_RadioTower_1F_EventScript_FourDigitMatch::
	msgbox GoldenrodCity_RadioTower_1F_Text_FourDigitsMatched, MSGBOX_DEFAULT
	return

GoldenrodCity_RadioTower_1F_EventScript_FullMatch::
	msgbox GoldenrodCity_RadioTower_1F_Text_AllFiveDigitsMatched, MSGBOX_DEFAULT
	return

GoldenrodCity_RadioTower_1F_EventScript_RecordPrizeNoRoom::
	copyvar VAR_POKELOT_PRIZE_PLACE, VAR_0x8004
	copyvar VAR_POKELOT_PRIZE_ITEM, VAR_0x8005
	goto GoldenrodCity_RadioTower_1F_EventScript_NoRoomForPrize
	end

GoldenrodCity_RadioTower_1F_EventScript_NoRoomForPrize::
	msgbox GoldenrodCity_RadioTower_1F_Text_NoRoomForThis, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_RadioTower_1F_EventScript_GivePrizeFromEarlier::
	msgbox GoldenrodCity_RadioTower_1F_Text_PrizeWeveBeenHolding, MSGBOX_DEFAULT
	giveitem VAR_POKELOT_PRIZE_ITEM
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_RadioTower_1F_EventScript_NoRoomForPrize
	copyvar VAR_0x8004, VAR_POKELOT_PRIZE_PLACE
	copyvar VAR_0x8005, VAR_POKELOT_PRIZE_ITEM
	special TryPutLotteryWinnerReportOnAir
	setvar VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
	setvar VAR_POKELOT_PRIZE_PLACE, 0
	release
	end

GoldenrodCity_RadioTower_1F_Text_LotteryCornerDrawTicket:
	.string "This is the Pokémon LOTTERY CORNER.\p"
	.string "If the LOTO TICKET's number matches\n"
	.string "the ID number of any of your Pokémon,\l"
	.string "you will receive a fabulous gift.\p"
	.string "Would you like to draw a Pokémon\n"
	.string "LOTO TICKET?$"

GoldenrodCity_RadioTower_1F_Text_ComeBackTomorrow:
	.string "Please come back tomorrow.$"

GoldenrodCity_RadioTower_1F_Text_PleaseVisitAgain:
	.string "Please do visit again.$"

GoldenrodCity_RadioTower_1F_Text_PleasePickTicket:
	.string "Bitte wähle ein LOTO TICKET.\n"
	.string "…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

GoldenrodCity_RadioTower_1F_Text_TicketNumberIsXPleaseWait:
	.string "The LOTO TICKET number is {STR_VAR_1}.\n"
	.string "\p"
	.string "I need to run a check on this number\n"
	.string "to see if it matches any of your\l"
	.string "Pokémon's ID numbers. Please wait.$"

GoldenrodCity_RadioTower_1F_Text_TicketMatchesPartyMon:
	.string "Congratulations!\p"
	.string "The ID number of your team's\n"
	.string "{STR_VAR_1} matches your\l"
	.string "LOTO TICKET's number!$"

GoldenrodCity_RadioTower_1F_Text_TicketMatchesPCMon:
	.string "Congratulations!\p"
	.string "The ID number of your PC-boxed\n"
	.string "{STR_VAR_1} matches your\l"
	.string "LOTO TICKET's number!$"

GoldenrodCity_RadioTower_1F_Text_NoNumbersMatched:
	.string "I'm sorry.\n"
	.string "None of the numbers matched.$"

GoldenrodCity_RadioTower_1F_Text_TwoDigitsMatched:
	.string "Two digits matched, so you win the\n"
	.string "third prize!\l"
	.string "You've won the {STR_VAR_1}!$"

GoldenrodCity_RadioTower_1F_Text_ThreeDigitsMatched:
	.string "Three digits matched, so you win the\n"
	.string "second prize!\l"
	.string "You've won the {STR_VAR_1}!$"

GoldenrodCity_RadioTower_1F_Text_FourDigitsMatched:
	.string "Four digits matched, so you win the\n"
	.string "first prize!\l"
	.string "You've won the {STR_VAR_1}!$"

GoldenrodCity_RadioTower_1F_Text_AllFiveDigitsMatched:
	.string "Oh, my goodness, all five digits\n"
	.string "matched!\p"
	.string "You've won the jackpot prize!\n"
	.string "You've won the {STR_VAR_1}!$"

GoldenrodCity_RadioTower_1F_Text_NoRoomForThis:
	.string "Oh?\n"
	.string "You seem to have no room for this.\p"
	.string "Please make room in your BAG and\n"
	.string "let me know.$"

GoldenrodCity_RadioTower_1F_Text_PrizeWeveBeenHolding:
	.string "{PLAYER}?\n"
	.string "Yes, I've been expecting you.\p"
	.string "This is the prize we've been holding\n"
	.string "for you.$"

GoldenrodCity_RadioTower_1F_Text_PleaseVisitAgain2:
	.string "Please do visit again.$"

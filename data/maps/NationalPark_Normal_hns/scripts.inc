NationalPark_Normal_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NationalPark_Normal_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

NationalPark_Normal_OnTransition: 
	callnative SetTimeBasedEncounters
	end

NationalPark_Normal_EventScript_Lass::
	lock
	faceplayer
	msgbox NationalPark_Normal_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_Normal_EventScript_Youngster1::
	lock
	faceplayer
	msgbox NationalPark_Normal_Text_Youngster1, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_Normal_EventScript_Youngster2::
	lock
	faceplayer
	msgbox NationalPark_Normal_Text_Youngster2, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_Normal_EventScript_Teacher2::
	lock
	faceplayer
	msgbox NationalPark_Normal_Text_Teacher2, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	release
	end

NationalPark_Normal_EventScript_TeacherQuickclaw::
	lock
	faceplayer
	goto_if_set FLAG_GOT_QUICK_CLAW, NationalPark_Normal_EventScript_TeacherQuickclaw2
	msgbox NationalPark_Normal_Text_Teacher1, MSGBOX_DEFAULT
	giveitem ITEM_QUICK_CLAW
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag FLAG_GOT_QUICK_CLAW
NationalPark_Normal_EventScript_TeacherQuickclaw2::
	msgbox NationalPark_Normal_Text_Teacher1_QuickClaw, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_Normal_EventScript_Persian::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PERSIAN, CRY_MODE_NORMAL
	msgbox NationalPark_Normal_Text_Persian, MSGBOX_DEFAULT
	waitmoncry
	release
	end



NationalPark_Normal_Text_Lass:
	.string "Sieh dir meine Tasche an!\p"
	.string "Ich habe meine Lieblinge aus dem\p"
	.string "Pokédex gedruckt\n"
	.string "und auf meine Tasche geklebt.$"

NationalPark_Normal_Text_PokefanF:
	.string "Das ist ein\n"
	.string "BRIEF von meiner Tochter. Das macht\l"
	.string "mir Freude.$"

NationalPark_Normal_Text_Teacher1:
	.string "Pass bitte auf!\p"
	.string "…Ohh, ich muss aufhören, immer\p"
	.string "wie ein Lehrer zu denken.\p"
	.string "Du musst ein Pokémon-Trainer sein.\p"
	.string "Da du so hart arbeitest, möchte\p"
	.string "ich dir dies überreichen.$"

NationalPark_Normal_Text_Teacher1_QuickClaw:
	.string "Gib die FLINKKLAUE einem Pokémon.\p"
	.string "Manchmal erhält es\n"
	.string "durch sie die Initiative.$"

NationalPark_Normal_Text_Youngster1:
	.string "Ich spiele mit\n"
	.string "Stickern, die ich aus meinem DEX\l"
	.string "gedruckt habe.$"

NationalPark_Normal_Text_Youngster2:
	.string "Falls ich gewinne,\n"
	.string "erhalte ich die DEX-Sticker meines\l"
	.string "Gegners.$"

NationalPark_Normal_Text_Teacher2:
	.string "Ich gehe oft im PARK spazieren,\p"
	.string "aber ich meide das hohe Gras.\p"
	.string "Trainer möchten immer kämpfen…$"

NationalPark_Normal_Text_Persian:
	.string "SNOBILIKAT: Fauch!$"

NationalPark_Normal_EventScript_Jack::
	trainerbattle_single TRAINER_JACK NationalPark_Normal_Text_SchoolboyJack1_Seen, NationalPark_Normal_Text_SchoolboyJack1_Beaten
	msgbox NationalPark_Normal_Text_SchoolboyJack_After, MSGBOX_AUTOCLOSE
	end

NationalPark_Normal_EventScript_Beverly::
	trainerbattle_single TRAINER_BEVERLY NationalPark_Normal_Text_PokefanFBeverly1_Seen, NationalPark_Normal_Text_PokefanFBeverly1_Beaten
	msgbox NationalPark_Normal_Text_PokefanFBeverly_After, MSGBOX_AUTOCLOSE
	end

NationalPark_Normal_EventScript_William::
	trainerbattle_single TRAINER_WILLIAM NationalPark_Normal_Text_PokefanmWilliam_Seen, NationalPark_Normal_Text_PokefanmWilliam_Beaten
	msgbox NationalPark_Normal_Text_PokefanmWilliam_After, MSGBOX_AUTOCLOSE
	end

NationalPark_Normal_EventScript_Krise::
	trainerbattle_single TRAINER_KRISE NationalPark_Normal_Text_LassKrise_Seen, NationalPark_Normal_Text_LassKrise_Beaten
	msgbox NationalPark_Normal_Text_LassKrise_After, MSGBOX_AUTOCLOSE
	end

NationalPark_Normal_EventScript_TM_Dig::
	finditem ITEM_TM_DIG
	end

NationalPark_Normal_EventScript_Item_Soothe_Bell::
	finditem ITEM_SOOTHE_BELL
	end

NationalPark_Normal_Text_SchoolboyJack1_Seen:
	.string "Die Welt der Pokémon ist weit.\p"
	.string "Es gibt noch so vieles, das wir\n"
	.string "nicht wissen.\p"
	.string "Aber ich weiß mehr als du!$"

NationalPark_Normal_Text_SchoolboyJack1_Beaten:
	.string "Wa-wa-waas?$"

NationalPark_Normal_Text_SchoolboyJack_After:
	.string "Es gibt so viel zu lernen.\p"
	.string "Zum Beispiel…\p"
	.string "Es gibt 50 verschiedene TMs.\p"
	.string "Getauschte Pokémon steigen\n"
	.string "schneller im Level.$"

NationalPark_Normal_Text_PokefanFBeverly1_Seen:
	.string "Meine Pokémon sind einfach\n"
	.string "hinreißend.\p"
	.string "Ich zeige dir, wie stolz\n"
	.string "mich meine Lieblinge machen.$"

NationalPark_Normal_Text_PokefanFBeverly1_Beaten:
	.string "Im Stolz schlag ich dich, aber…$"

NationalPark_Normal_Text_PokefanFBeverly_After:
	.string "Ich muss sagen, deine Pokémon\n"
	.string "sind auch recht niedlich.$"

NationalPark_Normal_Text_PokefanmWilliam_Seen:
	.string "Wir lieben unsere Pokémon,\n"
	.string "auch wenn sie uns nicht mögen.\p"
	.string "So sind wahre FANS eben.$"

NationalPark_Normal_Text_PokefanmWilliam_Beaten:
	.string "M-meine Pokémon!$"

NationalPark_Normal_Text_PokefanmWilliam_After:
	.string "Ich habe verloren, aber meine\n"
	.string "Pokémon gewinnen den Preis,\l"
	.string "weil sie so liebenswert sind.$"

NationalPark_Normal_Text_LassKrise_Seen:
	.string "Hallo? Warum starrst du mich\n"
	.string "so an?\p"
	.string "Oh, ein Kampf?$"

NationalPark_Normal_Text_LassKrise_Beaten:
	.string "…Hmmm…$"

NationalPark_Normal_Text_LassKrise_After:
	.string "Ich dachte, du starrst mich an,\n"
	.string "weil ich so süß bin!$"

NationalPark_Normal_Text_Sign_RelaxationSquare:
	.string "ERHOLUNGSORT NATIONALPARK$"

NationalPark_Normal_Text_Sign_BattleNotice:
	.string "Was steht denn hier?\p"
	.string "Kämpfe sind nur im Gras gestattet.\p"
	.string "NATIONALPARK BÜRO DES WÄCHTERs$"

NationalPark_Normal_Text_TrainerTips:
	.string "TIPPS für TRAINER\p"
	.string "Möchtest du deine\n"
	.string "BRIEFE drucken, öffne sie und drücke\l"
	.string "START.$"

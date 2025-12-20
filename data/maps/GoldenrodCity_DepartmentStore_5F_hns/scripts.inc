GoldenrodCity_DepartmentStore_5F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodDeptElevator_OnFrame
	.byte 0


GoldenrodDeptStore5_EventScript_Lass::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_5FLass, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore5_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_5FPokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore5_EventScript_Girl::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_Girl, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore5_EventScript_Sign::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_5FDirectory, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore5_EventScript_Receptionist::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_5FReceptionistOhYourMon, MSGBOX_DEFAULT
	closemessage
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, GoldenrodDeptStore5_EventScript_Receptionist_HighFriendship
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	goto_if_ge VAR_RESULT, FRIENDSHIP_50_TO_99, GoldenrodDeptStore5_EventScript_Receptionist_PutInEffort
	goto GoldenrodDeptStore5_EventScript_Receptionist_LowFriendship
	release
	end

GoldenrodDeptStore5_EventScript_Receptionist_HighFriendship::
	call_if_unset FLAG_GOT_RETURN, GoldenrodDeptStore5_EventScript_Receptionist_GiveReturn
	msgbox GoldenrodDeptStore_Text_5FReceptionistThisMoveShouldBePerfect, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore5_EventScript_Receptionist_LowFriendship::
	call_if_unset FLAG_GOT_FRUSTRATION, GoldenrodDeptStore5_EventScript_Receptionist_GiveFrustration
	msgbox GoldenrodDeptStore_Text_5FReceptionistItLooksEvilHowAboutThisTM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore5_EventScript_Receptionist_GiveReturn::
	giveitem ITEM_TM_RETURN
	setflag FLAG_GOT_RETURN
	return

GoldenrodDeptStore5_EventScript_Receptionist_GiveFrustration::
	giveitem ITEM_TM_FRUSTRATION
	setflag FLAG_GOT_FRUSTRATION
	return

GoldenrodDeptStore5_EventScript_Receptionist_PutInEffort::
	msgbox GoldenrodDeptStore_Text_5FReceptionistPutInSomeMoreEffort, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore5_EventScript_Receptionist_Already::
	msgbox GoldenrodDeptStore_Text_5FReceptionistWait, MSGBOX_DEFAULT
	closemessage
	release
	end



GoldenrodDeptStore_Text_5FReceptionistOhYourMon:
	.string "Hallo! Oh, dein Pokémon…$"

GoldenrodDeptStore_Text_5FReceptionistWait:
	.string "Willkommen im\n"
	.string "KAUFHAUS von DUKATIA CITY.$"

GoldenrodDeptStore_Text_5FReceptionistPutInSomeMoreEffort:
	.string "Hmm…\n"
	.string "It's not bad, but it's also not good.\n"
	.string "\p"
	.string "You, as the TRAINER, need to put in\n"
	.string "some more effort.$"


GoldenrodDeptStore_Text_5FReceptionistThisMoveShouldBePerfect:
	.string "Es hängt sehr an dir.\p"
	.string "Diese Attacke\n"
	.string "passt genau zu euch beiden.$"

GoldenrodDeptStore_Text_5FReceptionistItLooksEvilHowAboutThisTM:
	.string "Es sieht böse aus.\n"
	.string "Wie wär's mit dieser TM?$"

GoldenrodDeptStore_Text_5FReceptionistThereAreTMsPerfectForMon:
	.string "Es gibt für jedes\n"
	.string "Pokémon passende TMs.$"

GoldenrodDeptStore_Text_5FLass:
	.string "Sonntags kommt\n"
	.string "eine Dame, um nach den Pokémon zu\n"
	.string "sehen.\p"
	.string "Sie verteilt sogar TMs!$"

GoldenrodDeptStore_Text_5FPokefanM:
	.string "Ein Pokémon, das\n"
	.string "du durch Tausch erhalten hast, kannst\n"
	.string "du nicht umbenennen.\p"
	.string "Der Name spiegelt die Gefühle des\p"
	.string "Original-Trainers wieder.$"

GoldenrodDeptStore_Text_Girl:
	.string "Große Auswahl an Pokémon-Artikeln!\p"
	.string "DUKATIA CITY KAUFHAUS$"

GoldenrodDeptStore_Text_5FDirectory:
	.string "Rüste deine - MON auf.\p"
	.string "4S TM-ECKE$"

GoldenrodDeptStore_5F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart GoldenrodDeptStore_5F_Pokemart_DefenseTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
GoldenrodDeptStore_5F_Pokemart_DefenseTMs:
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_TM_REFLECT
	.2byte ITEM_TM_LIGHT_SCREEN
	pokemartlistend

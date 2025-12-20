.set LOCALID_MOM, 1
.set LOCALID_MOMS_FRIEND, 2

NewBarkTown_PlayersHouse_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewBarkTown_PlayersHouse_1F_OnTransition
	.byte 0

NewBarkTown_PlayersHouse_1F_OnTransition::
	call_if_eq VAR_NEWBARK_TOWN_STATE, 1, NewBarkTown_PlayersHouse_1F_SetMomStandingAtTable
	call_if_eq VAR_NEWBARK_TOWN_STATE, 2, NewBarkTown_PlayersHouse_1F_SetMomStandingAtTable
	call_if_eq VAR_NEWBARK_TOWN_STATE, 3, NewBarkTown_PlayersHouse_1F_SetMomStandingAtTable
	end

NewBarkTown_PlayersHouse_1F_SetMomStandingAtTable::
	setobjectxyperm LOCALID_MOM, 8, 4
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_LEFT

	@add to newgame later
	clearflag FLAG_HIDE_MOMS_FRIEND
	clearflag FLAG_MOM_VISITED
	return

NewBarkTown_PlayersHouse_1F_EventScript_Mom::
	lock
	faceplayer
	goto_if_set FLAG_MOM_VISITED, NewBarkTown_PlayersHouse_1F_EventScript_Mom_Regular
	goto_if_set FLAG_ADVENTURE_STARTED, NewBarkTown_PlayersHouse_1F_MomEventScript_GoodLuck
	msgbox NewBarkTown_PlayersHouse_1F_Text_MomHurryUpElmIsWaiting, MSGBOX_DEFAULT
	applymovement LOCALID_MOM, NewBarkTown_PlayersHouse_1F_MovementFaceLeft
	waitmovement 0
	release
	end

NewBarkTown_PlayersHouse_1F_EventScript_MomsFriend::
	lock
	faceplayer
	msgbox NewBarkTown_PlayersHouse_1F_Text_MomsFriend, MSGBOX_DEFAULT
	applymovement LOCALID_MOMS_FRIEND, NewBarkTown_PlayersHouse_1F_MovementFaceRight
	waitmovement 0
	release
	end

NewBarkTown_PlayersHouse_1F_MomEventScript_GoodLuck::
	msgbox NewBarkTown_PlayersHouse_1F_Text_MomLeaving, MSGBOX_DEFAULT
	setflag FLAG_MOM_VISITED
	clearflag FLAG_HIDE_ROUTE_30_NPCS
	setvar VAR_NEWBARK_TOWN_STATE, 5
	release
	end


NewBarkTown_PlayersHouse_1F_EventScript_Mom_Regular::
	call NewBarkTown_PlayersHouse_1F_EventScript_MomHealsParty
	release
	end

NewBarkTown_PlayersHouse_1F_EventScript_MomsIntroTrigger1::
	lock
	applymovement LOCALID_PLAYER, NewBarkTown_PlayersHouse_1F_PlayerIntroMovement1
	waitmovement 0
	goto NewBarkTown_PlayersHouse_1F_EventScript_MomsIntro
	end

NewBarkTown_PlayersHouse_1F_EventScript_MomsIntroTrigger2::
	lock
	applymovement LOCALID_PLAYER, NewBarkTown_PlayersHouse_1F_PlayerIntroMovement2
	waitmovement 0
	goto NewBarkTown_PlayersHouse_1F_EventScript_MomsIntro
	end

NewBarkTown_PlayersHouse_1F_EventScript_MomsIntro::
	playse SE_PIN
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_MOM, NewBarkTown_PlayersHouse_1F_MomMovement_1
	waitmovement 0
	msgbox NewBarkTown_PlayersHouse_1F_Text_ElmsLookingForYou, MSGBOX_DEFAULT
	call NewBarkTown_PlayersHouse_1F_EventScript_GivePokeGear
	call NewBarkTown_PlayersHouse_1F_EventScript_GiveRunningShoes
	applymovement LOCALID_MOM, NewBarkTown_PlayersHouse_1F_MomMovement_2
	waitmovement 0
	setvar VAR_NEWBARK_TOWN_STATE, 2
	setvar VAR_NEWBARKTOWN_LABSTATE, 0
	setflag FLAG_HIDE_LAB_POLICEMAN
	setflag FLAG_VISITED_NEWBARK_TOWN

	@former flagheap location

	releaseall
	end

NewBarkTown_PlayersHouse_1F_EventScript_GivePokeGear::
	playfanfare MUS_OBTAIN_ITEM
	message NewBarkTown_PlayersHouse_1F_Text_ObtainedPokeGear
	waitfanfare
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	setflag FLAG_REGISTER_RIVAL_POKENAV
	msgbox NewBarkTown_PlayersHouse_1F_Text_ExplainPokeGear, MSGBOX_DEFAULT
	closemessage
	delay 30
	return
	
NewBarkTown_PlayersHouse_1F_EventScript_GiveRunningShoes::
	msgbox NewBarkTown_PlayersHouse_1F_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
	waitmessage
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBarkTown_PlayersHouse_1F_Text_SwitchShoesWithRunningShoes, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	msgbox NewBarkTown_PlayersHouse_1F_Text_ExplainRunningShoes, MSGBOX_DEFAULT
	closemessage
	delay 30
	return

EventScript_RunningShoesManual::
	msgbox NewBarkTown_PlayersHouse_1F_Text_ExplainRunningShoes, MSGBOX_SIGN
	end

NewBarkTown_PlayersHouse_1F_EventScript_MomHealsParty::
	@ specialvar VAR_RESULT, IsPokecenterChallengeActivated
	@ goto_if_eq VAR_RESULT, TRUE, NewBarkTown_PlayersHouse_1F_EventScript_MomHealsParty_PokecenterChallenge
	msgbox NewBarkTown_PlayersHouse_1F_Text_YouShouldRestABit, MSGBOX_DEFAULT
	goto NewBarkTown_PlayersHouse_1F_EventScript_HealParty
	end

NewBarkTown_PlayersHouse_1F_EventScript_HealParty::
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	incrementgamestat GAME_STAT_RESTED_AT_HOME
	msgbox NewBarkTown_PlayersHouse_1F_Text_TakeCareHoney, MSGBOX_DEFAULT
	release
	end

NewBarkTown_PlayersHouse_1F_EventScript_MomHealsParty_PokecenterChallenge::
	msgbox NewBarkTown_PlayersHouse_1F_Text_YouShouldRestABit_PokecenterChallenge, MSGBOX_DEFAULT
	closemessage
	end

NewBarkTown_PlayersHouse_1F_Text_YouShouldRestABit_PokecenterChallenge:
	.string "MOM: Tut mir leid, du spielst\n"
	.string "mit der POKéCENTER challenge!$"

NewBarkTown_PlayersHouse_1F_Text_YouShouldRestABit:
	.string "MOM: Wie geht es dir, {PLAYER}?\n"
	.string "Du siehst müde aus.\p"
	.string "Ich denke du solltest dich ausruhen.$"

@ HnS
Common_Text_ReceivedMon:
	.string "{PLAYER} erhält {STR_VAR_1}!$"

Common_Text_PartyIsFull:
	.string "Whoa, warte. Du kannst keine weiteren\n"
	.string "Pokémon mitnehmen.$"

Common_Text_LookCloserAtMap:
	.string "{PLAYER} schaut auf die\n"
	.string "Karte.$"

NewBarkTown_PlayersHouse_1F_PlayerIntroMovement1:
	delay_8
	walk_down
	walk_right
	walk_down
	face_left
	delay_8
	step_end

NewBarkTown_PlayersHouse_1F_PlayerIntroMovement2:
	delay_8
	walk_down
	face_left
	delay_8
	step_end

NewBarkTown_PlayersHouse_1F_MomMovement_1:
	face_right
	walk_right
	step_end

NewBarkTown_PlayersHouse_1F_MomMovement_2:
	face_left
	walk_left
	delay_8
	step_end

NewBarkTown_PlayersHouse_1F_MovementFaceRight:
	face_right
	step_end

NewBarkTown_PlayersHouse_1F_MovementFaceLeft:
	face_left
	step_end

NewBarkTown_PlayersHouse_1F_Text_ElmsLookingForYou:
	.string "Oh, {PLAYER}…! Unser Nachbar,\n"
	.string "PROF.LIND, sucht nach dir.\p"
	.string "Er will, dass du ihm bei etwas\n"
	.string "hilfst.\p"
	.string "Oh! Fast vergessen! Dein\n"
	.string "POKéCOM kam fertig aus der Werkstatt.\n"
	.string "\p"
	.string "Hier, nimm ihn!$"

NewBarkTown_PlayersHouse_1F_Text_ObtainedPokeGear:
	.string "{PLAYER} erhielt das POKéCOM.$"

NewBarkTown_PlayersHouse_1F_Text_ExplainPokeGear:
	.string "MAMA: Telefonnummern befinden\n"
	.string "sich im Speicher.\p"
	.string "Wähle einfach einen Namen zum\n"
	.string "Anrufen.\p"
	.string "Wie praktisch!$"

NewBarkTown_PlayersHouse_1F_Text_WearTheseRunningShoes:
	.string "Oh, und vergiss nicht deine\n"
	.string "TURBOTRETER!$"

NewBarkTown_PlayersHouse_1F_Text_SwitchShoesWithRunningShoes:
	.string "{PLAYER} tauschte Schuhe gegen\n"
	.string "die TURBOTRETER.$"

NewBarkTown_PlayersHouse_1F_Text_ExplainRunningShoes:
	.string "MAMA: {PLAYER}, halte B gedrückt\n"
	.string "um mit diesen Schuhen zu Laufen!$"

NewBarkTown_PlayersHouse_1F_Text_MomHurryUpElmIsWaiting:
	.string "MAMA: PROF.LIND wartet auf dich.\p"
	.string "Beeil dich, Liebling!$"

NewBarkTown_PlayersHouse_1F_Text_MomsFriend:
	.string "Hi, {PLAYER}!\p"
	.string "Ich besuche euch!\p"
	.string "Hast du schon gehört?\p"
	.string "Meine Tochter will unbedingt\n"
	.string "PROF.LINDs Assistentin werden.\p"
	.string "Sie liebt POKéMON wirklich!$"

NewBarkTown_PlayersHouse_1F_Text_MomLeaving:
	.string "MAMA: Oh, was für ein süßes\n"
	.string "POKéMON!\p"
	.string "Wo hast du es her?\p"
	.string "…\p"
	.string "Du gehst also auf ein Abenteuer…\n"
	.string "Das wird bestimmt schwierig…\p"
	.string "Pass gut auf dich auf.\p"
	.string "POKéMON sind deine Freunde.\n"
	.string "Ihr müsst als Team arbeiten.\p"
	.string "Jetzt los!\n"
	.string "Ich stehe hinter dir!$"

NewBarkTown_PlayersHouse_1F_Text_TakeCareHoney:
	.string "MAMA: Pass gut auf dich auf!$"

LilycoveCity_ContestLobby_Text_PleaseDecideLinkLeader:
	.string "Entscheide, wer der GRUPPEN-Leiter\n"
	.string "wird.\p"
	.string "Die anderen Spieler müssen dann\n"
	.string "“GRUPPE BEITRETEN” wählen.$"

TrainerHill_1F_EventScript_Lost::
	trainerhill_settrainerflags
	trainerhill_lost
	setvar VAR_TEMP_1, 1
	end

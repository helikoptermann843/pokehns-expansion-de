.set LOCALID_FUCHSIAGYM_JANINE, 5
.set LOCALID_FUCHSIAGYM_ALICE_J, 1
.set LOCALID_FUCHSIAGYM_LINDA_J, 2
.set LOCALID_FUCHSIAGYM_CINDY_J, 3
.set LOCALID_FUCHSIAGYM_BARRY_J, 4

.set LOCALID_FUCHSIAGYM_ALICE, 7
.set LOCALID_FUCHSIAGYM_LINDA, 8
.set LOCALID_FUCHSIAGYM_CINDY, 9
.set LOCALID_FUCHSIAGYM_BARRY, 10

FuchsiaCity_Gym_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_Gym_OnTransition
	.byte 0

FuchsiaCity_Gym_OnTransition::
	goto_if_set FLAG_DEFEATED_JOHTO_FUCHSIA_GYM, FuchsiaCity_Gym_OnTransitionAfter
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_7
	call_if_defeated TRAINER_ALICE, FuchsiaCity_Gym_DefeatedAlice
	call_if_defeated TRAINER_LINDA, FuchsiaCity_Gym_DefeatedLinda
	call_if_defeated TRAINER_CINDY, FuchsiaCity_Gym_DefeatedCindy
	call_if_defeated TRAINER_BARRY, FuchsiaCity_Gym_DefeatedBarry
	end

FuchsiaCity_Gym_OnTransitionAfter::
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_8
	end

FuchsiaCity_Gym_DefeatedAlice::
	setflag FLAG_TEMP_2
	clearflag FLAG_TEMP_1
	return

FuchsiaCity_Gym_DefeatedLinda::
	setflag FLAG_TEMP_4
	clearflag FLAG_TEMP_3
	return

FuchsiaCity_Gym_DefeatedCindy::
	setflag FLAG_TEMP_6
	clearflag FLAG_TEMP_5
	return

FuchsiaCity_Gym_DefeatedBarry::
	setflag FLAG_TEMP_8
	clearflag FLAG_TEMP_7
	return

FuchsiaCity_Gym_EventScript_Janine::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_JOHTO_FUCHSIA_GYM, FuchsiaCity_Gym_EventScript_Janine_Defeated
	msgbox FuchsiaCity_Gym_Text_Janine_DisappointYou, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_JANINE, FuchsiaCity_Gym_Text_Janine_ToughOne
	message FuchsiaCity_Gym_Text_ReceivedSoulBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox FuchsiaCity_Gym_Text_Janine_ToxicSpeech, MSGBOX_DEFAULT
	giveitem ITEM_TM_TOXIC
	setflag FLAG_BADGE14_GET
	setflag FLAG_DEFEATED_JOHTO_FUCHSIA_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 14
	call Common_EventScript_SetGymTrainers
	removeobject LOCALID_FUCHSIAGYM_ALICE_J
	removeobject LOCALID_FUCHSIAGYM_CINDY_J
	removeobject LOCALID_FUCHSIAGYM_LINDA_J
	removeobject LOCALID_FUCHSIAGYM_BARRY_J
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_8
	addobject LOCALID_FUCHSIAGYM_ALICE
	addobject LOCALID_FUCHSIAGYM_CINDY
	addobject LOCALID_FUCHSIAGYM_LINDA
	addobject LOCALID_FUCHSIAGYM_BARRY
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_3
	clearflag FLAG_TEMP_5
	clearflag FLAG_TEMP_7
	clearflag FLAG_HIDE_ROUTE22_JANINE
	closemessage
	release
	end

FuchsiaCity_Gym_EventScript_Janine_Defeated::
	msgbox FuchsiaCity_Gym_Text_Janine_ApplyMyself, MSGBOX_DEFAULT
	closemessage
	release
	end

FuchsiaCity_Gym_Text_Janine_DisappointYou:
	.string "Fufufufu…\p"
	.string "Es tut mir leid, dich zu\n"
	.string "enttäuschen…\p"
	.string "Ich mache nur Spaß!\p"
	.string "Ich bin echt! Janina von der\n"
	.string "FUCHSANIA-Arena!$"

FuchsiaCity_Gym_Text_Janine_ToughOne:
	.string "Janina: Du bist hartnäckig.\n"
	.string "Du hast definitiv gewonnen…\p"
	.string "Hier ist der Seelenorden. Nimm ihn.$"

FuchsiaCity_Gym_Text_ReceivedSoulBadge:
	.string "{PLAYER} erhielt den Seelenorden.$"

FuchsiaCity_Gym_Text_Janine_ToxicSpeech:
	.string "Janina: Du bist wirklich stark!\n"
	.string "Ich habe ein besonderes Geschenk!\p"
	.string "Es ist Toxin, ein mächtiges Gift,\n"
	.string "das stetig die KP des Opfers senkt.$"

FuchsiaCity_Gym_Text_Janine_ApplyMyself:
	.string "Janina: Ich werde mich richtig\n"
	.string "anstrengen und meine Fähigkeiten\n"
	.string "verbessern.\p"
	.string "Ich will besser werden als Vater\n"
	.string "und du!$"

FuchsiaCity_Gym_EventScript_Alice_J::
	lock
	faceplayer
	msgbox FuchsiaCity_PokemonCenter1F_Text_JanineImpersonator1, MSGBOX_DEFAULT
	applymovement LOCALID_FUCHSIAGYM_ALICE_J, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_FUCHSIAGYM_ALICE_J
	clearflag FLAG_TEMP_1
	addobject LOCALID_FUCHSIAGYM_ALICE
	applymovement LOCALID_FUCHSIAGYM_ALICE, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_FUCHSIAGYM_ALICE, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FuchsiaCity_Gym_Text_LassAlice_Before, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ALICE, FuchsiaCity_Gym_Text_LassAlice_Beaten
	msgbox FuchsiaCity_Gym_Text_LassAlice_After, MSGBOX_DEFAULT
	closemessage
	release
	end

FuchsiaCity_Gym_EventScript_Alice::
	msgbox FuchsiaCity_Gym_Text_LassAlice_After, MSGBOX_NPC
	end


FuchsiaCity_Gym_EventScript_Linda_J::
	lock
	faceplayer
	msgbox FuchsiaCity_PokemonCenter1F_Text_JanineImpersonator1, MSGBOX_DEFAULT
	applymovement LOCALID_FUCHSIAGYM_LINDA_J, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_FUCHSIAGYM_LINDA_J
	clearflag FLAG_TEMP_3
	addobject LOCALID_FUCHSIAGYM_LINDA
	applymovement LOCALID_FUCHSIAGYM_LINDA, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_FUCHSIAGYM_LINDA, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FuchsiaCity_Gym_Text_LassLinda_Before, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LINDA, FuchsiaCity_Gym_Text_LassLinda_Beaten
	msgbox FuchsiaCity_Gym_Text_LassLinda_After, MSGBOX_DEFAULT
	closemessage
	release
	end

FuchsiaCity_Gym_EventScript_Linda::
	msgbox FuchsiaCity_Gym_Text_LassLinda_After, MSGBOX_NPC
	end

FuchsiaCity_Gym_EventScript_Cindy_J::
	lock
	faceplayer
	msgbox FuchsiaCity_PokemonCenter1F_Text_JanineImpersonator1, MSGBOX_DEFAULT
	applymovement LOCALID_FUCHSIAGYM_CINDY_J, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_FUCHSIAGYM_CINDY_J
	clearflag FLAG_TEMP_5
	addobject LOCALID_FUCHSIAGYM_CINDY
	applymovement LOCALID_FUCHSIAGYM_CINDY, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_FUCHSIAGYM_CINDY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FuchsiaCity_Gym_Text_PicnickerCindy_Before, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CINDY, FuchsiaCity_Gym_Text_PicnickerCindy_Beaten
	msgbox FuchsiaCity_Gym_Text_PicnickerCindy_After, MSGBOX_DEFAULT
	closemessage
	release
	end

FuchsiaCity_Gym_EventScript_Cindy::
	msgbox FuchsiaCity_Gym_Text_PicnickerCindy_After, MSGBOX_NPC
	end

FuchsiaCity_Gym_EventScript_Barry_J::
	lock
	faceplayer
	msgbox FuchsiaCity_PokemonCenter1F_Text_JanineImpersonator1, MSGBOX_DEFAULT
	applymovement LOCALID_FUCHSIAGYM_BARRY_J, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_FUCHSIAGYM_BARRY_J
	clearflag FLAG_TEMP_7
	addobject LOCALID_FUCHSIAGYM_BARRY
	applymovement LOCALID_FUCHSIAGYM_BARRY, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_FUCHSIAGYM_BARRY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FuchsiaCity_Gym_Text_CamperBarry_Before, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BARRY, FuchsiaCity_Gym_Text_CamperBarry_Beaten
	msgbox FuchsiaCity_Gym_Text_CamperBarry_After, MSGBOX_DEFAULT
	closemessage
	release
	end

FuchsiaCity_Gym_EventScript_Barry::
	msgbox FuchsiaCity_Gym_Text_CamperBarry_After, MSGBOX_NPC
	end

FuchsiaCity_Gym_Text_LassAlice_Before:
	.string "Fufufu!\p"
	.string "Ich bin Janina, die Arena-Leiterin!\p"
	.string "Nein, nicht wirklich! Erwischt!$"

FuchsiaCity_Gym_Text_LassAlice_Beaten:
	.string "Ich hab dich reingelegt…$"

FuchsiaCity_Gym_Text_LassAlice_After:
	.string "Wie willst du die echte Leiterin\n"
	.string "erkennen?$"

FuchsiaCity_Gym_Text_LassLinda_Before:
	.string "Reingelegt! Hahaha!$"

FuchsiaCity_Gym_Text_LassLinda_Beaten:
	.string "Ooh… ich hab verloren… Du bist\n"
	.string "nicht schwach…$"

FuchsiaCity_Gym_Text_LassLinda_After:
	.string "Na? War meine Verkleidung nicht\n"
	.string "perfekt?$"

FuchsiaCity_Gym_Text_PicnickerCindy_Before:
	.string "Ich bin Janina!\p"
	.string "Woher wusstest du, dass ich echt\n"
	.string "bin? Lass uns kämpfen!$"

FuchsiaCity_Gym_Text_PicnickerCindy_Beaten:
	.string "Mist! Ich wollte gewinnen!$"

FuchsiaCity_Gym_Text_PicnickerCindy_After:
	.string "Du musst langsam müde werden.$"

FuchsiaCity_Gym_Text_CamperBarry_Before:
	.string "Wahahaha!\p"
	.string "Jawohl! Ich bin Janina!$"

FuchsiaCity_Gym_Text_CamperBarry_Beaten:
	.string "Meine Verkleidung war perfekt!\n"
	.string "Verdammt!$"

FuchsiaCity_Gym_Text_CamperBarry_After:
	.string "Hey du. War meine Verkleidung\n"
	.string "süß oder was?$"

FuchsiaCity_Gym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_JOHTO_FUCHSIA_GYM, FuchsiaCity_Gym_EventScript_GymGuyAfter
	msgbox FuchsiaCity_Gym_Text_Guide, MSGBOX_NPC
	end

FuchsiaCity_Gym_EventScript_GymGuyAfter::
	msgbox FuchsiaCity_Gym_Text_GuideWin, MSGBOX_NPC
	end

FuchsiaCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_DEFEATED_JOHTO_FUCHSIA_GYM, FuchsiaCity_Gym_EventScript_GymStatuePostVictory
	msgbox FuchsiaCity_Gym_Text_GymStatue
	releaseall
	end

FuchsiaCity_Gym_EventScript_GymStatuePostVictory::
	msgbox FuchsiaCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

FuchsiaCity_Gym_Text_GymStatue::
	.string "FUCHSANIA Pokémon Arena\n"
	.string "Leiter: Janina\p"
	.string "GEWINNER: Blau, Rot$"

FuchsiaCity_Gym_Text_GymStatuePlayerWon::
	.string "FUCHSANIA Pokémon Arena\n"
	.string "Leiter: Janina\p"
	.string "GEWINNER: Blau, Rot, {PLAYER}$"

FuchsiaCity_Gym_Text_Guide:
	.string "He! Ein CHAMP in spe!\p"
	.string "Nanu! Sieh dich mal um. Alle\p"
	.string "Trainer sehen aus\n"
	.string "wie die ARENALEITERIN JANINA.\p"
	.string "Welche davon ist die echte JANINA?$"

FuchsiaCity_Gym_Text_GuideWin:
	.string "Das war ein\n"
	.string "hervorragender Kampf, Trainer aus\l"
	.string "JOHTO!$"


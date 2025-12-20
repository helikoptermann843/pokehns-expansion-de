PewterCity_Gym_hns_MapScripts::
	.byte 0



PewterCity_Gym_EventScript_Jerry::
	trainerbattle_single TRAINER_JERRY, PewterCity_Gym_Text_CamperJerry_Seen, PewterCity_Gym_Text_CamperJerry_Beaten
	msgbox PewterCity_Gym_Text_CamperJerry_AfterBattle, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_EventScript_Brock::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_JOHTO_PEWTER_GYM, PewterCity_Gym_EventScript_Brock_Defeated
	msgbox PewterCity_Gym_Text_Brock_Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BROCK, PewterCity_Gym_Text_Brock_WinLoss
	message PewterCity_Gym_Text_ReceivedBoulderBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox PewterCity_Gym_Text_Brock_FightDone, MSGBOX_DEFAULT
	giveitem ITEM_TM_EARTHQUAKE
	setflag FLAG_BADGE09_GET
	setflag FLAG_DEFEATED_JOHTO_PEWTER_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 9
	call Common_EventScript_SetGymTrainers
	clearflag FLAG_HIDE_DIGLETT_BROCK
	closemessage
	release
	end

PewterCity_Gym_EventScript_Brock_Defeated::
	msgbox PewterCity_Gym_Text_Brock_FightDone, MSGBOX_DEFAULT
	closemessage
	release
	end


PewterCity_Gym_Text_Brock_Intro:
	.string "Rocko: Wow, nicht oft kommt ein\n"
	.string "Herausforderer aus JOHTO.\p"
	.string "Ich bin ROCKO, der ARENALEITER\n"
	.string "von MARMORIA.\p"
	.string "Ich bin Experte für Gestein-\n"
	.string "Pokémon.\p"
	.string "Meine Pokémon trotzen den\n"
	.string "meisten physischen Angriffen.\p"
	.string "Du wirst es schwer haben,\n"
	.string "Schaden zu verursachen.\p"
	.string "Komm schon!$"

PewterCity_Gym_Text_Brock_WinLoss:
	.string "Rocko: Die starken Angriffe\n"
	.string "deiner Pokémon durchbrachen\n"
	.string "meine harte Gesteinsabwehr…\p"
	.string "Du bist stärker als gedacht…\p"
	.string "Nimm diesen ORDEN.$"

PewterCity_Gym_Text_ReceivedBoulderBadge:
	.string "{PLAYER} erhält den Felsorden.$"

PewterCity_Gym_Text_Brock_BoulderBadge:
	.string "Rocko: {PLAYER}, danke.\n"
	.string "Der Kampf hat mir gefallen,\n"
	.string "auch wenn ich etwas enttäuscht bin.\p"
	.string "Der FELSORDEN macht deine\n"
	.string "Pokémon noch stärker.$"

PewterCity_Gym_Text_Brock_FightDone:
	.string "Rocko: Die Welt ist riesig.\n"
	.string "Es gibt noch viele starke\n"
	.string "Trainer wie dich.\p"
	.string "Warte nur ab. Auch ich werde\n"
	.string "noch viel stärker.$"

PewterCity_Gym_Text_CamperJerry_Seen:
	.string "Die Trainer dieser ARENA\n"
	.string "nutzen Gestein-Pokémon.\p"
	.string "Der Gestein-Typ hat hohe\n"
	.string "VERTEIDIGUNG.\p"
	.string "Kämpfe können lange dauern.\n"
	.string "Bist du bereit?$"

PewterCity_Gym_Text_CamperJerry_Beaten:
	.string "Ich muss diese Kämpfe\n"
	.string "gewinnen…$"

PewterCity_Gym_Text_CamperJerry_AfterBattle:
	.string "Hey, du! Trainer aus JOHTO!\n"
	.string "Rocko ist hart.\p"
	.string "Er wird dich bestrafen,\n"
	.string "wenn du ihn unterschätzt.$"

PewterCity_Gym_Text_Guide:
	.string "He! Ein CHAMP in spe!\p"
	.string "Das ist cool! Kämpfst du gegen\p"
	.string "die ARENALEITER in KANTO?\p"
	.string "Sie sind stark und ambitioniert, wie\p"
	.string "die ARENALEITER in JOHTO.$"

PewterCity_Gym_Text_Guide_Win:
	.string "He! Ein CHAMP in spe!\p"
	.string "Diese PKMN-ARENA stellte kein\p"
	.string "Problem für dich dar.\p"
	.string "Dein Einsatz ist wirklich\p"
	.string "beeindruckend. Das meine ich ehrlich.$"

PewterCity_Gym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_JOHTO_PEWTER_GYM, PewterCity_Gym_EventScript_GymGuyAfter
	msgbox PewterCity_Gym_Text_Guide, MSGBOX_NPC
	end

PewterCity_Gym_EventScript_GymGuyAfter::
	msgbox PewterCity_Gym_Text_Guide_Win, MSGBOX_NPC
	end


PewterCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE09_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
	msgbox PewterCity_Gym_Text_GymStatue
	releaseall
	end

PewterCity_Gym_EventScript_GymStatuePostVictory::
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

PewterCity_Gym_Text_GymStatue::
	.string "Marmoria Pokémon Arena\n"
	.string "Leiter: Rocko\p"
	.string "GEWINNER: Blau, Rot$"

PewterCity_Gym_Text_GymStatuePlayerWon::
	.string "Marmoria Pokémon Arena\n"
	.string "Leiter: Rocko\p"
	.string "GEWINNER: Blau, Rot, {PLAYER}$"



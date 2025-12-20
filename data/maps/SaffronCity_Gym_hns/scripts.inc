SaffronCity_Gym_hns_MapScripts::
	.byte 0

SaffronCity_Gym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_JOHTO_SAFFRON_GYM, SaffronCity_Gym_EventScript_GymGuy2
	msgbox SaffronCity_Gym_Text_GymGuideIntro, MSGBOX_NPC
	end

SaffronCity_Gym_EventScript_GymGuy2::
	msgbox SaffronCity_Gym_Text_GymGuideWin, MSGBOX_NPC
	end

SaffronCity_Gym_EventScript_Rebecca::
	trainerbattle_single TRAINER_REBECCA SaffronCity_Gym_Text_MediumRebeccaSeen, SaffronCity_Gym_Text_MediumRebeccaBeaten
	msgbox SaffronCity_Gym_Text_MediumRebeccaAfter, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Franklin::
	trainerbattle_single TRAINER_FRANKLIN SaffronCity_Gym_Text_PsychicFranklinSeen, SaffronCity_Gym_Text_PsychicFranklinBeaten
	msgbox SaffronCity_Gym_Text_PsychicFranklinAfter, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Doris::
	trainerbattle_single TRAINER_DORIS SaffronCity_Gym_Text_MediumDorisSeen, SaffronCity_Gym_Text_MediumDorisBeaten
	msgbox SaffronCity_Gym_Text_MediumDorisAfter, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Jared::
	trainerbattle_single TRAINER_JARED SaffronCity_Gym_Text_PsychicJaredSeen, SaffronCity_Gym_Text_PsychicJaredBeaten
	msgbox SaffronCity_Gym_Text_PsychicJaredAfter, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Sabrina::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_JOHTO_SAFFRON_GYM, SaffronCity_Gym_EventScript_Sabrina_Defeated
	msgbox SaffronCity_Gym_Text_SabrinaIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SABRINA, SaffronCity_Gym_Text_SabrinaWinLoss
	message SaffronCity_Gym_Text_ReceivedMarshBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SaffronCity_Gym_Text_MarshBadgeInfo, MSGBOX_DEFAULT
	setflag FLAG_BADGE13_GET
	setflag FLAG_DEFEATED_JOHTO_SAFFRON_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 13
	call Common_EventScript_SetGymTrainers
	closemessage
	clearflag FLAG_HIDE_OLIVINE_SABRINA
	release
	end

SaffronCity_Gym_EventScript_Sabrina_Defeated::
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_Gym_Text_SabrinaIntro::
	.string "Sabrina: Ich wusste, dass du\n"
	.string "kommst…\p"
	.string "Vor drei Jahren sah ich dich\n"
	.string "in einer Vision.\p"
	.string "Du willst meinen Orden.\p"
	.string "Kämpfe bereiten mir keine Freude,\n"
	.string "doch als Arenaleiterin ist es\n"
	.string "meine Pflicht, ORDEN an jene zu\l"
	.string "vergeben, die sich würdig zeigen.\p"
	.string "Da du es wünschst, zeige ich dir\n"
	.string "meine Psychokinese-Kräfte!$"

SaffronCity_Gym_Text_SabrinaWinLoss::
	.string "Sabrina: Deine Kraft…\p"
	.string "Sie übertrifft alles, was ich\n"
	.string "vorausgesehen habe…\p"
	.string "Vielleicht lässt sich die Zukunft\n"
	.string "doch nicht völlig vorhersagen…\p"
	.string "Gut. Du hast gewonnen.\p"
	.string "Du erhältst den SUMPFORDEN.$"

SaffronCity_Gym_Text_ReceivedMarshBadge::
	.string "{PLAYER} erhält den SUMPFORDEN.$"

SaffronCity_Gym_Text_MarshBadgeInfo::
	.string "Sabrina: Der Sumpforden weckt\n"
	.string "verborgene Kräfte in dir…\p"
	.string "Auch wenn ich deine Macht nicht\n"
	.string "korrekt vorhersehen konnte,\l"
	.string "weiß ich eines ganz sicher.\p"
	.string "Du wirst ein gefeierter und\n"
	.string "geliebter CHAMPION sein!$"

SaffronCity_Gym_Text_SabrinaPostBattle::
	.string "Sabrina: Deine Liebe zu deinen\n"
	.string "Pokémon überwand meine Psycho-\l"
	.string "kinese…\p"
	.string "Liebe ist vielleicht ebenfalls\n"
	.string "eine Form von Psychokinese…$"

SaffronCity_Gym_Text_SabrinaRematch::
	.string "Sabrina: Ah, der KANTO-CHAMPION.\p"
	.string "Ich spürte deine Rückkehr.\p"
	.string "Deine Kraft ist enorm gewachsen.\p"
	.string "Selbst jetzt fühle ich deine Aura.\p"
	.string "Willst du einen Rückkampf?$"

SaffronCity_Gym_Text_SabrinaRematchDefeat::
	.string "Sabrina: Deine Liebe zu deinen\n"
	.string "Pokémon überwand erneut meine\l"
	.string "Psychokinese…$"

SaffronCity_Gym_Text_MediumRebeccaSeen::
	.string "Die Kraft all jener, die du\n"
	.string "besiegt hast, fließt mir zu!$"

SaffronCity_Gym_Text_MediumRebeccaBeaten::
	.string "Stark… Viel zu stark…$"

SaffronCity_Gym_Text_MediumRebeccaAfter::
	.string "Was ist die Quelle deiner Kraft?$"

SaffronCity_Gym_Text_PsychicFranklinSeen::
	.string "Psychokinese ist die Kraft\n"
	.string "deiner Seele.$"

SaffronCity_Gym_Text_PsychicFranklinBeaten::
	.string "Deine Seele ist stärker\n"
	.string "als meine!$"

SaffronCity_Gym_Text_PsychicFranklinAfter::
	.string "Du hast deine Seele gestärkt,\n"
	.string "nicht nur deine Fähigkeiten.$"

SaffronCity_Gym_Text_MediumDorisSeen::
	.string "Fufufufu… Ich sehe es klar.\p"
	.string "Ich blicke in deine Seele!$"

SaffronCity_Gym_Text_MediumDorisBeaten::
	.string "Obwohl ich dich las, verlor ich…$"

SaffronCity_Gym_Text_MediumDorisAfter::
	.string "Mist! Ich vergaß, dass ich meine\n"
	.string "Niederlage vorhergesagt habe.$"

SaffronCity_Gym_Text_PsychicJaredSeen::
	.string "Das Kampf-DOJO nebenan war einst\n"
	.string "die Arena dieser Stadt.$"

SaffronCity_Gym_Text_PsychicJaredBeaten::
	.string "Ich hatte keine Chance…$"

SaffronCity_Gym_Text_PsychicJaredAfter::
	.string "Der KARATE-MEISTER, Leiter des\n"
	.string "Kampf-DOJOs, wurde von Sabrina\l"
	.string "vernichtend geschlagen.$"

SaffronCity_Gym_Text_GymGuideIntro::
	.string "Yo! Baldiger CHAMPION!\p"
	.string "Ein Trainer wie du braucht wohl\n"
	.string "keine Tipps gegen Psycho-Pokémon,\l"
	.string "oder?\p"
	.string "Ich erwarte Großes von dir!\p"
	.string "Viel Glück!$"

SaffronCity_Gym_Text_GymGuideWin:
	.string "Das war wieder ein\n"
	.string "fantastischer Kampf!$"

SaffronCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE13_GET, SaffronCity_Gym_EventScript_GymStatuePostVictory
	msgbox SaffronCity_Gym_Text_GymStatue
	releaseall
	end

SaffronCity_Gym_EventScript_GymStatuePostVictory::
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end


SaffronCity_Gym_Text_GymStatue::
	.string "SAFFRONIA Pokémon Arena\n"
	.string "Leiter: Sabrina\p"
	.string "GEWINNER: Blau, Rot$"

SaffronCity_Gym_Text_GymStatuePlayerWon::
	.string "SAFFRONIA Pokémon Arena\n"
	.string "Leiter: Sabrina\p"
	.string "GEWINNER: Blau, Rot, {PLAYER}$"

EcruteakCity_Gym_hns_MapScripts::
	.byte 0

EcruteakCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ECRUTEAK_CITY_GYM, EcruteakCity_Gym_EventScript_GymGuy2
	msgbox EcruteakCity_GymGuideText, MSGBOX_DEFAULT
	closemessage
	release
	end
	
EcruteakCity_Gym_EventScript_GymGuy2::
	msgbox EcruteakCity_GymGuideWinText, MSGBOX_DEFAULT
	release
	end	

EcruteakCity_Gym_EventScript_Jeffrey::
	trainerbattle_single TRAINER_JEFFREY SageJeffreySeenText, SageJeffreyBeatenText
	msgbox SageJeffreyAfterBattleText, MSGBOX_AUTOCLOSE
	end
EcruteakCity_Gym_EventScript_Ping::
	trainerbattle_single TRAINER_PING SagePingSeenText, SagePingBeatenText
	msgbox SagePingAfterBattleText, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Gym_EventScript_Martha::
	trainerbattle_single TRAINER_MARTHA MediumMarthaSeenText, MediumMarthaBeatenText
	msgbox MediumMarthaAfterBattleText, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Gym_EventScript_Grace::
	trainerbattle_single TRAINER_GRACE MediumGraceSeenText, MediumGraceBeatenText
	msgbox MediumGraceAfterBattleText, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Gym_EventScript_Morty::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ECRUTEAK_CITY_GYM, EcruteakCity_Gym_EventScript_Morty_Defeated
	msgbox MortyIntroText, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MORTY_1, MortyWinLossText
	message Text_ReceivedFogBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MortyText_FogBadgeSpeech, MSGBOX_DEFAULT
	setflag FLAG_BADGE04_GET
	setflag FLAG_DEFEATED_ECRUTEAK_CITY_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers
	giveitem ITEM_TM_SHADOW_BALL
	msgbox MortyText_ShadowBallSpeech, MSGBOX_DEFAULT
	setvar VAR_ECRUTEAK_CITY_STATE, 4
	closemessage
	release
	end

EcruteakCity_Gym_EventScript_Morty_Defeated::
	msgbox MortyFightDoneText, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Gym_EventScript_Statue::
	lock
	goto_if_set FLAG_DEFEATED_ECRUTEAK_CITY_GYM, EcruteakCity_Gym_EventScript_Statue2
	msgbox EcruteakCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Gym_EventScript_Statue2::
	msgbox EcruteakCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Gym_Text_GymStatue:
	.string "Teak City Pokémon Arena$"

EcruteakCity_Gym_Text_GymStatueCertified:
	.string "Teak City Pokémon Arena\p"
	.string "Jens's zertifizierte Trainer:\n"
	.string "{PLAYER}$"

MortyIntroText:
	.string "Gut, dass du gekommen bist.\p"
	.string "Hier in TEAK CITY\n"
	.string "werden Pokémon verehrt.\p"
	.string "Man sagt, dass legendäre Pokémon\p"
	.string "nur wahrlich star-\n"
	.string "ken Trainern erscheinen werden.\p"
	.string "Ich glaube an diese Legende. Daher\p"
	.string "habe ich mein ganzes Leben lang im\p"
	.string "Geheimen trainiert.\p"
	.string "Als Resultat kann ich nun Dinge\p"
	.string "sehen, die andere\n"
	.string "nicht sehen können.\p"
	.string "Noch ein wenig…\p"
	.string "Mit ein wenig Mehr könnte ich eine\p"
	.string "Zukunft sehen, in\n"
	.string "der ich das legendäre\n"
	.string "regenbogenfarbene Pokémon treffe.\p"
	.string "Du könntest mir dabei helfen!$"

MortyWinLossText:
	.string "Ich bin noch nicht gut genug…\p"
	.string "Dieser ORDEN soll dir gehören.$"

Text_ReceivedFogBadge:
	.string "{PLAYER} erhält PHANTOMORDEN.$"

MortyText_FogBadgeSpeech:
	.string "Durch den PHANTOMORDEN gehorchen\p"
	.string "dir Pokémon bis zu LV 50.\p"
	.string "Außerdem können\n"
	.string "Pokémon, die SURFER beherrschen,\p"
	.string "diesen auch außer-\n"
	.string "halb eines Kampfes einsetzen.\p"
	.string "Bitte nimm auch dies an.$"

MortyText_ShadowBallSpeech:
	.string "Das ist SPUKBALL. Er verursacht\p"
	.string "Schaden und ver-\n"
	.string "ringert die SPEZIAL-VERT.\p"
	.string "Setze ihn ein, wenn er dir gefällt.$"

MortyFightDoneText:
	.string "Ich verstehe…\p"
	.string "Deine Reise hat\n"
	.string "dich an die entlegensten Orte geführt.\n"
	.string "\p"
	.string "Du hast viel mehr gesehen als ich.\p"
	.string "Dafür beneide ich dich…$"

MortyRematchText:
	.string "Ah, the JOHTO CHAMPION!\n"
	.string "Good of you to come.\p"
	.string "You've shown Stärke and skill,\n"
	.string "but have you grown since we\l"
	.string "last battled?\p"
	.string "I've trained with my Geist-type\n"
	.string "Pokémon ever since.\p"
	.string "Let's see if you can overcome\n"
	.string "the shadows again.\p"
	.string "Want to have a rematch?$"

Morty_RematchDefeatText:
	.string "I'm not good enough yet...\p"
	.string "You've witnessed more than I\n"
	.string "ever have.\p"
	.string "I envy you for that...$"

SageJeffreySeenText:
	.string "Ich habe den Frühling mit meinen\p"
	.string "Pokémon verbracht. Dann den Sommer,\p"
	.string "den Herbst und den Winter…\p"
	.string "Dann kam wieder der Frühling. Wir\p"
	.string "haben viel Zeit\n"
	.string "miteinander verbracht.$"

SageJeffreyBeatenText:
	.string "Siege und Nieder-\n"
	.string "lagen - ich hatte beides.$"

SageJeffreyAfterBattleText:
	.string "Woher kommen Pokémon?$"

SagePingSeenText:
	.string "Hältst du unseren Pokémon stand?$"

SagePingBeatenText:
	.string "Ah! Gut gemacht!$"

SagePingAfterBattleText:
	.string "Wir setzen nur Geist-Pokémon ein.\p"
	.string "Normal-Attacken\n"
	.string "zeigen bei ihnen keine Wirkung!$"

MediumMarthaSeenText:
	.string "Ich werde siegen!$"

MediumMarthaBeatenText:
	.string "I-I-Ich habe verloren!$"

MediumMarthaAfterBattleText:
	.string "Wer siegen will, wird es auch tun!$"

MediumGraceSeenText:
	.string "Verwirrt dich unser unsichtbarer\p"
	.string "Boden? Besiege\n"
	.string "mich und ich gebe dir einen Tipp!$"

MediumGraceBeatenText:
	.string "W-Was?$"

MediumGraceAfterBattleText:
	.string "Gut, ich verrate dir das Geheimnis\p"
	.string "des unsichtbaren Bodens.\p"
	.string "Der Weg liegt vor unseren Augen!$"

EcruteakCity_GymGuideText:
	.string "Die Trainer hier\n"
	.string "haben geheime Motive.\p"
	.string "Gewinnst du, so verraten sie dir\p"
	.string "vielleicht ein\n"
	.string "paar Geheimnisse über TEAK CITY.$"

EcruteakCity_GymGuideWinText:
	.string "Wow, {PLAYER}. Du warst großartig!\p"
	.string "Vor lauter Angst\n"
	.string "habe ich mich in die Ecke gekauert!$"

EcruteakCity_GymClosedText:
	.string "JENS, der ARENA-\n"
	.string "LEITER ist nicht hier.\p"
	.string "Du musst leider wieder gehen.\p"
	.string "Hohohoho.$"

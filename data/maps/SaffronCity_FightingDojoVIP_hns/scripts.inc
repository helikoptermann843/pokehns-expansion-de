SaffronCity_FightingDojoVIP_hns_MapScripts::
	.byte 0

SaffronCity_FightingDojoVIP_EventScript_Declined::
	closemessage
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Falkner::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Falkner_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_FALKNER_2, SaffronCity_FightingDojoVIP_Text_Falkner_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Bugsy::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Bugsy_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_BUGSY_2, SaffronCity_FightingDojoVIP_Text_Bugsy_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Whitney::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Whitney_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_WHITNEY_2, SaffronCity_FightingDojoVIP_Text_Whitney_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Morty::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Morty_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_MORTY_2, SaffronCity_FightingDojoVIP_Text_Morty_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Chuck::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Chuck_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_CHUCK_2, SaffronCity_FightingDojoVIP_Text_Chuck_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Jasmine::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Jasmine_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_JASMINE_2, SaffronCity_FightingDojoVIP_Text_Jasmine_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Pryce::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Pryce_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_PRYCE_2, SaffronCity_FightingDojoVIP_Text_Pryce_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Clair::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Clair_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_CLAIR_2, SaffronCity_FightingDojoVIP_Text_Clair_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Brock::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Brock_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_BROCK, SaffronCity_FightingDojoVIP_Text_Brock_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Misty::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Misty_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_MISTY, SaffronCity_FightingDojoVIP_Text_Misty_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Surge::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Surge_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_LTSURGE, SaffronCity_FightingDojoVIP_Text_Surge_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Erika::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Erika_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_ERIKA, SaffronCity_FightingDojoVIP_Text_Erika_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Janine::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Janine_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_JANINE, SaffronCity_FightingDojoVIP_Text_Janine_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Sabrina::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Sabrina_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_SABRINA, SaffronCity_FightingDojoVIP_Text_Sabrina_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Blaine::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Blaine_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_BLAINE, SaffronCity_FightingDojoVIP_Text_Blaine_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_FightingDojoVIP_EventScript_Blue::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojoVIP_Text_Blue_Rematch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojoVIP_EventScript_Declined
	closemessage
	trainerbattle_no_intro TRAINER_BLUE, SaffronCity_FightingDojoVIP_Text_Blue_RematchDefeat
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	givebp 10
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_DEFAULT
	closemessage
	release
	end

@===============MONS===============================================================================================================

SaffronCity_FightingDojoVIP_EventScript_Scizor::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SCIZOR, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Scizor, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Scizor:
	.string "Scherox: Schee-Rox!$"

SaffronCity_FightingDojoVIP_EventScript_Miltank::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Miltank, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Miltank:
	.string "Miltank: MuuhHHO!$"

SaffronCity_FightingDojoVIP_EventScript_Poliwhirl::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POLIWHIRL, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Poliwhirl, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Poliwhirl:
	.string "Quaputzi: Whirl-whirl!$"

SaffronCity_FightingDojoVIP_EventScript_Dewgong::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DEWGONG, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Dewgong, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Dewgong:
	.string "Jugong: Goooooong!$"

SaffronCity_FightingDojoVIP_EventScript_Steelix::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_STEELIX, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Steelix, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Steelix:
	.string "Stahlos: GraaAAANk!$"

SaffronCity_FightingDojoVIP_EventScript_Kingdra::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KINGDRA, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Kingdra, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Kingdra:
	.string "Seedraking: Draaa...$"

SaffronCity_FightingDojoVIP_EventScript_Onix::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Onix, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Onix:
	.string "Onix: Oooonix!$"

SaffronCity_FightingDojoVIP_EventScript_Starmie::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_STARMIE, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Starmie, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Starmie:
	.string "Starmie: Hyaaa!$"

SaffronCity_FightingDojoVIP_EventScript_Victreebel::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VICTREEBEL, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Victreebel, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Victreebel:
	.string "Sarzenia: Vreeee!$"

SaffronCity_FightingDojoVIP_EventScript_Muk::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MUK, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Muk, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Muk:
	.string "Sleimok: Muuuk...$"

SaffronCity_FightingDojoVIP_EventScript_Kadabra::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KADABRA, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Kadabra, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Kadabra:
	.string "Kadabra: Kadabra!$"

SaffronCity_FightingDojoVIP_EventScript_Magmar::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAGMAR, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Magmar, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Magmar:
	.string "Magmar: Magmaaaar!$"

SaffronCity_FightingDojoVIP_EventScript_Raichu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_RAICHU, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Raichu, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Raichu:
	.string "Raichu: Rai-CHU!$"

SaffronCity_FightingDojoVIP_EventScript_Machamp::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojoVIP_Text_Machamp, MSGBOX_DEFAULT
	waitmoncry
	applymovement2 VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
SaffronCity_FightingDojoVIP_Text_Machamp:
	.string "Machomei: Maa-champ!$"

SaffronCity_FightingDojo_EventScript_Chased::
	msgbox SaffronCity_FightingDojoVIP_Text_Chased, MSGBOX_NPC
	end

SaffronCity_FightingDojoVIP_Text_Chased:
	.string "Help!$"

SaffronCity_FightingDojoVIP_EvetScript_Statue::
	msgbox SaffronCity_FightingDojoVIP_Text_Statue, MSGBOX_SIGN
	end

SaffronCity_FightingDojoVIP_Text_Statue:
	.string "Kampf DOJO VIP LOUNGE$"

SaffronCity_FightingDojoVIP_Text_Falkner_Rematch::
	.string "Glückwunsch zum Sieg über die\n"
	.string "TOP VIER!\p"
	.string "Ich habe meine Flug-Pokémon\n"
	.string "noch härter trainiert.\p"
	.string "Bezwingst du die Macht des\n"
	.string "Himmels erneut?$"

SaffronCity_FightingDojoVIP_Text_Falkner_RematchDefeat::
	.string "Wow… Du hast mich wieder besiegt.\p"
	.string "Ich werde noch härter trainieren,\n"
	.string "um der beste Vogelmeister zu sein!$"

SaffronCity_FightingDojoVIP_Text_Bugsy_Rematch::
	.string "Wow, du bist jetzt der\n"
	.string "JOHTO-CHAMPION!\p"
	.string "Deine Fähigkeiten sind beeindruckend!\n"
	.string "\p"
	.string "Ich habe viel geforscht.\p"
	.string "Ich zeige dir meine neuen\n"
	.string "Erkenntnisse.\p"
	.string "Willst du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Bugsy_RematchDefeat::
	.string "Wow, du bist ein wahrer\n"
	.string "Top-Trainer.\p"
	.string "Meine Forschung ist wohl noch\n"
	.string "nicht abgeschlossen…$"

SaffronCity_FightingDojoVIP_Text_Whitney_Rematch::
	.string "Hi! Du bist es!\p"
	.string "JOHTO-CHAMPION?\p"
	.string "Du bist echt unglaublich!\p"
	.string "Zeig mir, wie stark du bist!\p"
	.string "Lust auf einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Whitney_RematchDefeat::
	.string "Wäääh!\p"
	.string "Wäääh!\p"
	.string "…Schnief… Du bist gemein!$"

SaffronCity_FightingDojoVIP_Text_Morty_Rematch::
	.string "Ah, der JOHTO-CHAMPION.\p"
	.string "Du hast Stärke bewiesen, doch\n"
	.string "bist du gewachsen seit damals?\p"
	.string "Ich trainierte meine Geist-\n"
	.string "Pokémon unermüdlich.\p"
	.string "Kannst du die Schatten erneut\n"
	.string "überwinden?\p"
	.string "Willst du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Morty_RematchDefeat::
	.string "Ich bin noch nicht so weit…\p"
	.string "Du hast mehr gesehen als ich.\p"
	.string "Darum beneide ich dich…$"

SaffronCity_FightingDojoVIP_Text_Chuck_Rematch::
	.string "WAHAHAHA! JOHTO-CHAMPION!\p"
	.string "Du willst mehr, was?\p"
	.string "Deine Technik ist besser geworden!\p"
	.string "Na los! Wer ist stärker?$"

SaffronCity_FightingDojoVIP_Text_Chuck_RematchDefeat::
	.string "Was?! Hä?! Ich hab verloren?\p"
	.string "Schon wieder?$"

SaffronCity_FightingDojoVIP_Text_Jasmine_Rematch::
	.string "…Glückwunsch, JOHTO-\n"
	.string "CHAMPION.\p"
	.string "Du bist so stark geworden…\p"
	.string "Ob ich mich wohl verbessert habe?\p"
	.string "Möchtest du das prüfen?\p"
	.string "Lust auf einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Jasmine_RematchDefeat::
	.string "…Du bist mir überlegen,\p"
	.string "an Stärke und Güte.$"

SaffronCity_FightingDojoVIP_Text_Pryce_Rematch::
	.string "Ah, JOHTO-CHAMPION!\p"
	.string "Deine Fähigkeiten sind beachtlich.\p"
	.string "Das beeindruckt mich sehr.\p"
	.string "Doch wir können stets lernen.\p"
	.string "Ich, Norbert, der Wintertrainer,\p"
	.string "habe noch Tricks parat.\p"
	.string "Willst du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Pryce_RematchDefeat::
	.string "Erneut beeindruckst du mich.\p"
	.string "Mit deinem Willen wirst du\n"
	.string "jedes Hindernis überwinden.$"

SaffronCity_FightingDojoVIP_Text_Clair_Rematch::
	.string "Du hast es geschafft, hm?\p"
	.string "JOHTO-CHAMPION also.\p"
	.string "Deine Stärke ist bewiesen,\n"
	.string "doch schaffst du mich erneut?\p"
	.string "Als Drachenmeister halte ich\n"
	.string "mich nicht zurück.\p"
	.string "Diesmal nicht.\p"
	.string "Willst du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Clair_RematchDefeat::
	.string "Ich habe verloren?\p"
	.string "Schon wieder?\p"
	.string "Das kann nicht sein…$"

SaffronCity_FightingDojoVIP_Text_Brock_Rematch::
	.string "Rocko: Hey, {PLAYER}!\p"
	.string "Du bist jetzt KANTO-CHAMPION?\p"
	.string "Unglaublich!\p"
	.string "Du bist noch stärker geworden.\p"
	.string "Lust auf einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Brock_RematchDefeat::
	.string "Rocko: Deine Pokémon haben meine\n"
	.string "steinharte Abwehr erneut besiegt…$"

SaffronCity_FightingDojoVIP_Text_Misty_Rematch::
	.string "Misty: Wow, KANTO-CHAMPION!\p"
	.string "Das ist unglaublich, {PLAYER}.\p"
	.string "Du hast dich weit entwickelt.\p"
	.string "Aber ich gebe nicht auf!\p"
	.string "Lust auf einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Misty_RematchDefeat::
	.string "Misty: Du bist wirklich gut…$"

SaffronCity_FightingDojoVIP_Text_Surge_Rematch::
	.string "SURGE: KANTO-CHAMPION also!\p"
	.string "Starke Leistung, Kleiner!\p"
	.string "Aber ich bin noch nicht fertig!\p"
	.string "Wie wär's mit Runde zwei?$"

SaffronCity_FightingDojoVIP_Text_Surge_RematchDefeat::
	.string "SURGE: Arrrgh!\p"
	.string "Du bist immer noch knallhart!$"

SaffronCity_FightingDojoVIP_Text_Erika_Rematch::
	.string "Erika: Oh, hallo.\p"
	.string "Was für eine Überraschung,\n"
	.string "CHAMPION!\p"
	.string "Es ist schön, dich zu sehen.\p"
	.string "Deine Reise war sicher spannend.\p"
	.string "Auch Champs lieben Prüfungen.\p"
	.string "Willst du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Erika_RematchDefeat::
	.string "Erika: Verlieren hinterlässt\n"
	.string "einen bitteren Nachklang…\p"
	.string "Doch starke Trainer treiben\n"
	.string "mich zu mehr an…$"

SaffronCity_FightingDojoVIP_Text_Sabrina_Rematch::
	.string "Sabrina: Ah, der CHAMPION.\p"
	.string "Ich spürte deine Rückkehr.\p"
	.string "Deine Aura ist enorm gewachsen.\p"
	.string "Selbst jetzt fühle ich sie.\p"
	.string "Willst du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Sabrina_RematchDefeat::
	.string "Sabrina: Deine Liebe zu Pokémon\n"
	.string "überwältigte erneut meine\l"
	.string "Psychokinese…$"

SaffronCity_FightingDojoVIP_Text_Janine_Rematch::
	.string "Fufufufu…\p"
	.string "Wow, du hast es geschafft!\p"
	.string "Du bist jetzt CHAMPION!\p"
	.string "Ich bin stolz auf dich, aber\n"
	.string "ich halte mich nicht zurück.\p"
	.string "Willst du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Janine_RematchDefeat::
	.string "Janina: Du bist immer noch\n"
	.string "knallhart!\p"
	.string "Der Sieg gehört dir…$"

SaffronCity_FightingDojoVIP_Text_Blaine_Rematch::
	.string "Pyro: Wow!\p"
	.string "Du bist jetzt KANTO-CHAMPION!\p"
	.string "Das ist echt heiß!\p"
	.string "Deine Technik ist erstklassig.\p"
	.string "Ich bin immer kampfbereit.\p"
	.string "Willst du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Blaine_RematchDefeat::
	.string "Pyro: Deine Stärke ist wahrlich\n"
	.string "feurig!\p"
	.string "Du hast meine Abwehr verbrannt.$"

SaffronCity_FightingDojoVIP_Text_Blue_Rematch::
	.string "Blau: Na sieh mal einer.\p"
	.string "Der CHAMPION.\p"
	.string "Du bist weit gekommen.\p"
	.string "Den Titel hatte ich auch mal.\p"
	.string "Doch ich schone dich nicht.\p"
	.string "Zeig, ob du ihn verdienst.\p"
	.string "Willst du einen Rückkampf?$"

SaffronCity_FightingDojoVIP_Text_Blue_RematchDefeat::
	.string "Blau: Was?!\p"
	.string "Wie hab ich schon wieder verloren?$"


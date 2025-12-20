BattleTower_Outside_hns_MapScripts::
	.byte 0

BattleTower_Outside_EventScript_BattleTowerSign::
	lock
	msgbox BattleTowerOutsideSignText, MSGBOX_SIGN	
	closemessage	
	release
	end
	
BattleTower_Outside_EventScript_Engineer::
	lock
	faceplayer
	msgbox BattleTowerOutsideText_Closed, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_EventScript_Youngster::
	lock
	faceplayer
	msgbox BattleTowerOutsideYoungsterText, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_EventScript_Beauty::
	lock
	faceplayer
	msgbox BattleTowerOutsideBeautyText, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTower_Outside_EventScript_Sailor::
	lock
	faceplayer
	msgbox BattleTowerOutsideSailorText, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTowerOutsideYoungsterText:
	.string "Wow, the Duellturm is huge!\p"
	.string "There must be many kinds of\n"
	.string "Pokémon in there!$"

BattleTowerOutsideBeautyText:
	.string "You can use only three Pokémon.\p"
	.string "It's so hard to decide which\n"
	.string "three should go into battle…$"

BattleTowerOutsideSailorText:
	.string "Hehehe, I snuck out from work.\p"
	.string "I can't bail out until I've won!\p"
	.string "I have to win it all. That I must!$"

BattleTowerOutsideSignText:
	.string "Duellturm\p"
	.string "Take the Ultimate Trainer\n"
	.string "Challenge!$"

BattleTowerOutsideText_Closed:
	.string "The Duellturm is currently\n"
	.string "closed for repairs.$"


BattleTower_Outside_EventScript_LeftMoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleTower_Outside_EventScript_AlreadyMetLeftTutor
	msgbox BattleTower_Outside_Text_LeftTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto BattleTower_Outside_EventScript_ChooseLeftTutorMove
	end

BattleTower_Outside_EventScript_AlreadyMetLeftTutor::
	msgbox BattleTower_Outside_Text_LeftTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleTower_Outside_EventScript_ChooseLeftTutorMove
	end

BattleTower_Outside_EventScript_ChooseLeftTutorMove::
	message BattleTower_Outside_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_Softboiled
	case 1, BattleTower_Outside_EventScript_SeismicToss
	case 2, BattleTower_Outside_EventScript_DreamEater
	case 3, BattleTower_Outside_EventScript_MegaPunch
	case 4, BattleTower_Outside_EventScript_MegaKick
	case 5, BattleTower_Outside_EventScript_BodySlam
	case 6, BattleTower_Outside_EventScript_RockSlide
	case 7, BattleTower_Outside_EventScript_Counter
	case 8, BattleTower_Outside_EventScript_ThunderWave
	case 9, BattleTower_Outside_EventScript_SwordsDance
	case 10, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	end

BattleTower_Outside_EventScript_ChooseNewLeftTutorMove::
	message BattleTower_Outside_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_Softboiled
	case 1, BattleTower_Outside_EventScript_SeismicToss
	case 2, BattleTower_Outside_EventScript_DreamEater
	case 3, BattleTower_Outside_EventScript_MegaPunch
	case 4, BattleTower_Outside_EventScript_MegaKick
	case 5, BattleTower_Outside_EventScript_BodySlam
	case 6, BattleTower_Outside_EventScript_RockSlide
	case 7, BattleTower_Outside_EventScript_Counter
	case 8, BattleTower_Outside_EventScript_ThunderWave
	case 9, BattleTower_Outside_EventScript_SwordsDance
	case 10, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	end

BattleTower_Outside_EventScript_Softboiled::
	setvar VAR_0x8008, 16
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_SeismicToss::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_DreamEater::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_MegaPunch::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_MegaKick::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_BodySlam::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_RockSlide::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_Counter::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_ThunderWave::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_SwordsDance::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_RightMoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_2
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleTower_Outside_EventScript_AlreadyMetRightTutor
	msgbox BattleTower_Outside_Text_RightTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
	goto BattleTower_Outside_EventScript_ChooseRightTutorMove
	end

BattleTower_Outside_EventScript_AlreadyMetRightTutor::
	msgbox BattleTower_Outside_Text_RightTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleTower_Outside_EventScript_ChooseRightTutorMove
	end

BattleTower_Outside_EventScript_ChooseRightTutorMove::
	message BattleTower_Outside_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_DefenseCurl
	case 1, BattleTower_Outside_EventScript_Snore
	case 2, BattleTower_Outside_EventScript_MudSlap
	case 3, BattleTower_Outside_EventScript_Swift
	case 4, BattleTower_Outside_EventScript_IcyWind
	case 5, BattleTower_Outside_EventScript_Endure
	case 6, BattleTower_Outside_EventScript_PsychUp
	case 7, BattleTower_Outside_EventScript_IcePunch
	case 8, BattleTower_Outside_EventScript_ThunderPunch
	case 9, BattleTower_Outside_EventScript_FirePunch
	case 10, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	end

BattleTower_Outside_EventScript_ChooseNewRightTutorMove::
	message BattleTower_Outside_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_DefenseCurl
	case 1, BattleTower_Outside_EventScript_Snore
	case 2, BattleTower_Outside_EventScript_MudSlap
	case 3, BattleTower_Outside_EventScript_Swift
	case 4, BattleTower_Outside_EventScript_IcyWind
	case 5, BattleTower_Outside_EventScript_Endure
	case 6, BattleTower_Outside_EventScript_PsychUp
	case 7, BattleTower_Outside_EventScript_IcePunch
	case 8, BattleTower_Outside_EventScript_ThunderPunch
	case 9, BattleTower_Outside_EventScript_FirePunch
	case 10, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	end

BattleTower_Outside_EventScript_DefenseCurl::
	setvar VAR_0x8008, 16
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_Snore::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_MudSlap::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_Swift::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_IcyWind::
	setvar VAR_0x8008, 24
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_Endure::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_PsychUp::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_IcePunch::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_ThunderPunch::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_FirePunch::
	setvar VAR_0x8008, 48
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_ElementalMoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_3
	goto_if_set FLAG_MET_FRONTIER_ELEMENTAL_MOVE_TUTOR, BattleTower_Outside_EventScript_AlreadyMetElementalTutor
	msgbox BattleTower_Outside_Text_ElementalTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_ELEMENTAL_MOVE_TUTOR
	goto BattleTower_Outside_EventScript_ChooseElementalTutorMove
	end

BattleTower_Outside_EventScript_AlreadyMetElementalTutor::
	msgbox BattleTower_Outside_Text_ElementalTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleTower_Outside_EventScript_ChooseElementalTutorMove
	end

BattleTower_Outside_EventScript_ChooseElementalTutorMove::
	message BattleTower_Outside_Text_TeachWhichMoveElemental
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 2
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_3
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_FrenzyPlant
	case 1, BattleTower_Outside_EventScript_BlastBurn
	case 2, BattleTower_Outside_EventScript_HydroCannon
	case 3, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	end

BattleTower_Outside_EventScript_ChooseNewElementalTutorMove::
	message BattleTower_Outside_Text_TeachWhichMoveElemental
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 2
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_3
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleTower_Outside_EventScript_FrenzyPlant
	case 1, BattleTower_Outside_EventScript_BlastBurn
	case 2, BattleTower_Outside_EventScript_HydroCannon
	case 3, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleTower_Outside_EventScript_ExitTutorMoveSelect
	end

BattleTower_Outside_EventScript_FrenzyPlant::
	setvar VAR_0x8008, 64
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_BlastBurn::
	setvar VAR_0x8008, 64
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_HydroCannon::
	setvar VAR_0x8008, 64
	goto BattleTower_Outside_EventScript_ConfirmMoveSelection
	end

BattleTower_Outside_EventScript_ExitTutorMoveSelect::
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox BattleTower_Outside_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

BattleTower_Outside_EventScript_CancelChooseMon::
	msgbox BattleTower_Outside_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

@ VAR_0x8008 is the price
@ VAR_TEMP_C is the scroll multichoice ID
@ VAR_TEMP_FRONTIER_TUTOR_SELECTION is the move selection
@ VAR_TEMP_FRONTIER_TUTOR_ID is which move tutor was spoken to
BattleTower_Outside_EventScript_ConfirmMoveSelection::
	copyvar VAR_0x8004, VAR_TEMP_FRONTIER_TUTOR_SELECTION
	copyvar VAR_0x8005, VAR_TEMP_FRONTIER_TUTOR_ID
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	copyvar VAR_0x8004, VAR_TEMP_C
	msgbox BattleTower_Outside_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_EventScript_ChooseNewMove
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleTower_Outside_EventScript_TeachTutorMove
	msgbox BattleTower_Outside_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto BattleTower_Outside_EventScript_ChooseNewMove
	end

BattleTower_Outside_EventScript_TeachTutorMove::
	msgbox BattleTower_Outside_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	special GetBattleFrontierTutorMoveIndex
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, BattleTower_Outside_EventScript_CancelChooseMon
	msgbox BattleTower_Outside_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end

BattleTower_Outside_EventScript_ChooseNewMove::
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, BattleTower_Outside_EventScript_ChooseNewLeftTutorMove
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 2, BattleTower_Outside_EventScript_ChooseNewElementalTutorMove
	goto BattleTower_Outside_EventScript_ChooseNewRightTutorMove
	end

BattleTower_Outside_Text_LeftTutorIntro:
	.string "Buhahaha!\p"
	.string "You couldn't tell it from looking now,\n"
	.string "but I used to be one tough TRAINER.\p"
	.string "I had a reputation as the toughest\n"
	.string "BEAUTY around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What is it now?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that blowhard woman over\n"
	.string "there. I'm actually talented!\p"
	.string "Let me prove it to you.\n"
	.string "I can teach your Pokémon special and\l"
	.string "yet cute moves.\p"
	.string "But my lessons don't come free.\n"
	.string "How about paying for the moves I teach\l"
	.string "with a wee bit of Battle Points?$"

BattleTower_Outside_Text_LeftTutorWelcomeBack:
	.string "Buhahaha!\p"
	.string "Are you back to learn special and\n"
	.string "yet cute Pokémon moves?$"

BattleTower_Outside_Text_TeachWhichMove:
	.string "Fine, fine, look here!\n"
	.string "Which Attacke should I teach?$"

BattleTower_Outside_Text_MoveWillBeXBattlePoints:
	.string "The Attacke {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle\l"
	.string "Points, okay?$"

BattleTower_Outside_Text_TeachMoveToWhichMon:
	.string "Fine, fine, now pick the Pokémon\n"
	.string "I should teach the Attacke to.$"

BattleTower_Outside_Text_HaventGotEnoughPoints:
	.string "What the…\n"
	.string "You haven't got enough Battle Points!$"

BattleTower_Outside_Text_IllTakeBattlePoints:
	.string "Do you see how skilled I am now?\n"
	.string "I'll take your Battle Points, thanks!$"

BattleTower_Outside_Text_YouDontWantTo:
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

BattleTower_Outside_Text_RightTutorIntro:
	.string "Ihihihi!\p"
	.string "I know it's hard to see now, but I\n"
	.string "used to be one fantastic TRAINER.\p"
	.string "I had a reputation as the most\n"
	.string "invincible SWIMMER around, I tell you!\n"
	.string "\p"
	.string "… … … … … …\p"
	.string "What's wrong?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that buffoonish woman\n"
	.string "over\n"
	.string "there. I'm actually experienced!\p"
	.string "I can prove it to you.\n"
	.string "I can teach your Pokémon hard and\l"
	.string "yet pretty moves.\p"
	.string "But my lessons don't come free.\n"
	.string "How about paying for the moves I teach\l"
	.string "with a wee bit of Battle Points?$"

BattleTower_Outside_Text_RightTutorWelcomeBack:
	.string "Ihihihi!\p"
	.string "Have you come to learn hard and\n"
	.string "yet pretty Pokémon moves?$"

BattleTower_Outside_Text_ThinkLadiesDontGetAlong:
	.string "Those ladies, the way they bad-mouth\n"
	.string "each other, you probably think that\l"
	.string "they don't get along.\p"
	.string "But if that were true, they wouldn't\n"
	.string "stay out here together, would they?$"

BattleTower_Outside_Text_LadiesWereStrongAndBeautiful:
	.string "When I was just a wee YOUNGSTER,\n"
	.string "those ladies were strong and\n"
	.string "beautiful.\p"
	.string "They were idols among us TRAINERS.\p"
	.string "Even now, age hasn't dulled their\n"
	.string "abilities.\p"
	.string "In fact, their Pokémon moves have\n"
	.string "grown even more polished.\p"
	.string "But… For some reason, I can't help\n"
	.string "but feel this…\p"
	.string "Time is so cruel…$"

BattleTower_Outside_Text_SoftboiledDesc::
	.string "Recovers up to\n"
	.string "half the user's\l"
	.string "maximum HP.$"

BattleTower_Outside_Text_SeismicTossDesc::
	.string "Inflicts damage\n"
	.string "identical to the\l"
	.string "user's level.$"

BattleTower_Outside_Text_DreamEaterDesc::
	.string "Recovers half the\n"
	.string "damage inflicted\l"
	.string "on a sleeping foe.$"

BattleTower_Outside_Text_MegaPunchDesc::
	.string "A strong punch\n"
	.string "thrown with\l"
	.string "incredible power.$"

BattleTower_Outside_Text_MegaKickDesc::
	.string "An extremely\n"
	.string "powerful kick with\l"
	.string "intense force.$"

BattleTower_Outside_Text_BodySlamDesc::
	.string "A full-Bodyslam\n"
	.string "that Maike cause\l"
	.string "paralysis.$"

BattleTower_Outside_Text_RockSlideDesc::
	.string "Large boulders\n"
	.string "are hurled. Maike\l"
	.string "cause flinching.$"

BattleTower_Outside_Text_CounterDesc::
	.string "Retaliates any\n"
	.string "physical hit with\l"
	.string "double the power.$"

BattleTower_Outside_Text_ThunderWaveDesc::
	.string "A weak jolt of\n"
	.string "electricity that\l"
	.string "paralyzes the foe.$"

BattleTower_Outside_Text_SwordsDanceDesc::
	.string "A Kampf dance\n"
	.string "that sharply\l"
	.string "raises ATTACK.$"

BattleTower_Outside_Text_DefenseCurlDesc::
	.string "Curls up to con-\n"
	.string "ceal weak spots\l"
	.string "and raise DEFENSE.$"

BattleTower_Outside_Text_SnoreDesc::
	.string "A loud attack\n"
	.string "that can be used\l"
	.string "only while asleep.$"

BattleTower_Outside_Text_MudSlapDesc::
	.string "Hurls mud in the\n"
	.string "foe's face to re-\l"
	.string "duce its accuracy.$"

BattleTower_Outside_Text_SwiftDesc::
	.string "Sprays star-\n"
	.string "shaped rays\l"
	.string "that never miss.$"

BattleTower_Outside_Text_IcyWindDesc::
	.string "A chilling attack\n"
	.string "that lowers the\l"
	.string "foe's SPEED.$"

BattleTower_Outside_Text_EndureDesc::
	.string "Endures any at-\n"
	.string "tack for 1 turn,\l"
	.string "leaving 1HP.$"

BattleTower_Outside_Text_PsychUpDesc::
	.string "Copies the foe's\n"
	.string "effect(s) and\l"
	.string "gives to the user.$"

BattleTower_Outside_Text_IcePunchDesc::
	.string "An icy punch\n"
	.string "that Maike\l"
	.string "freeze the foe.$"

BattleTower_Outside_Text_ThunderPunchDesc::
	.string "An electrified\n"
	.string "punch that Maike\l"
	.string "paralyze the foe.$"

BattleTower_Outside_Text_FirePunchDesc::
	.string "A fiery punch\n"
	.string "that Maike burn\l"
	.string "the foe.$"

BattleTower_Outside_Text_ElementalTutorIntro::
	.string "Zzzzzz…\p"
	.string "What, how, what?\p"
	.string "Oh, sorry, I was snoozing a bit.\p"
	.string "I'm the ELEMENTAL TUTOR.\p"
	.string "I have the power to teach the most\n"
	.string "powerful moves to Pflanze, Feuer and\l"
	.string "Wasser TYPE Pokémon.\p"
	.string "Did you come to learn such a strong\n"
	.string "power?$"

BattleTower_Outside_Text_ElementalTutorWelcomeBack:
	.string "Zzzzzz…\p"
	.string "What, how, what, who?\p"
	.string "Oh, did you come to learn the\n"
	.string "power of my strongest moves?$"

BattleTower_Outside_Text_TeachWhichMoveElemental::
	.string "Which Attacke do you think is suitable\n"
	.string "for your Pokémon?$"

BattleTower_Outside_Text_StrongElementalMoveDesc::
	.string "Powerful, but\n"
	.string "leaves the user\l"
	.string "immobile one turn.$"

BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkWelcome::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	return

BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ThankYouVisitWithPoints, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGivePrize
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGivePrize::
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGiveItem
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGiveDecor::
	checkdecorspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleTower_Outside_ExchangeServiceCorner_EventScript_NoRoomForDecor
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	adddecoration VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_WellSendItToPC, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_NoRoomForDecor::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_PCIsFull, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_TryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleTower_Outside_ExchangeServiceCorner_EventScript_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_HereIsYourPrize, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_BagFull::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_DecorClerk1::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
	call BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleTower_Outside_ExchangeServiceCorner_EventScript_KissPoster
	case 1, BattleTower_Outside_ExchangeServiceCorner_EventScript_KissCushion
	case 2, BattleTower_Outside_ExchangeServiceCorner_EventScript_SmoochumDoll
	case 3, BattleTower_Outside_ExchangeServiceCorner_EventScript_TogepiDoll
	case 4, BattleTower_Outside_ExchangeServiceCorner_EventScript_MeowthDoll
	case 5, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClefairyDoll
	case 6, BattleTower_Outside_ExchangeServiceCorner_EventScript_DittoDoll
	case 7, BattleTower_Outside_ExchangeServiceCorner_EventScript_CyndaquilDoll
	case 8, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChikoritaDoll
	case 9, BattleTower_Outside_ExchangeServiceCorner_EventScript_TotodileDoll
	case 10, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_KissPoster::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmKissPoster, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, DECOR_KISS_POSTER
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_KissCushion::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmKissCushion, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 32
	setvar VAR_0x8009, DECOR_KISS_CUSHION
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_SmoochumDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmSmoochumDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 32
	setvar VAR_0x8009, DECOR_SMOOCHUM_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_TogepiDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmTogepiDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, DECOR_TOGEPI_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_MeowthDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmMeowthDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, DECOR_MEOWTH_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ClefairyDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmClefairyDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, DECOR_CLEFAIRY_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_DittoDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmDittoDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, DECOR_DITTO_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_CyndaquilDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCyndaquilDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 80
	setvar VAR_0x8009, DECOR_CYNDAQUIL_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ChikoritaDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmChikoritaDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 80
	setvar VAR_0x8009, DECOR_CHIKORITA_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_TotodileDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmTotodileDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 80
	setvar VAR_0x8009, DECOR_TOTODILE_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_DecorClerk2::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK
	call BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleTower_Outside_ExchangeServiceCorner_EventScript_LaprasDoll
	case 1, BattleTower_Outside_ExchangeServiceCorner_EventScript_SnorlaxDoll
	case 2, BattleTower_Outside_ExchangeServiceCorner_EventScript_VenusaurDoll
	case 3, BattleTower_Outside_ExchangeServiceCorner_EventScript_CharizardDoll
	case 4, BattleTower_Outside_ExchangeServiceCorner_EventScript_BlastoiseDoll
	case 5, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_LaprasDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmLaprasDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 128
	setvar VAR_0x8009, DECOR_LAPRAS_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_SnorlaxDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmSnorlaxDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 128
	setvar VAR_0x8009, DECOR_SNORLAX_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_VenusaurDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmVenusaurDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 256
	setvar VAR_0x8009, DECOR_VENUSAUR_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_CharizardDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCharizardDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 256
	setvar VAR_0x8009, DECOR_CHARIZARD_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_BlastoiseDoll::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmBlastoiseDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 256
	setvar VAR_0x8009, DECOR_BLASTOISE_DOLL
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_VitaminClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
	call BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleTower_Outside_ExchangeServiceCorner_EventScript_Protein
	case 1, BattleTower_Outside_ExchangeServiceCorner_EventScript_Calcium
	case 2, BattleTower_Outside_ExchangeServiceCorner_EventScript_Iron
	case 3, BattleTower_Outside_ExchangeServiceCorner_EventScript_Zinc
	case 4, BattleTower_Outside_ExchangeServiceCorner_EventScript_Carbos
	case 5, BattleTower_Outside_ExchangeServiceCorner_EventScript_HpUp
	case 6, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_YouAlreadyHaveThis::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_YouAlreadyHaveThis, MSGBOX_DEFAULT
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	release
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Protein::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmProtein, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_PROTEIN
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Calcium::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCalcium, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_CALCIUM
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Iron::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmIron, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_IRON
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Zinc::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmZinc, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_ZINC
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Carbos::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCarbos, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_CARBOS
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_HpUp::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmHpUp, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, ITEM_HP_UP
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_HoldItemClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK
	call BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleTower_Outside_ExchangeServiceCorner_EventScript_Leftovers
	case 1, BattleTower_Outside_ExchangeServiceCorner_EventScript_WhiteHerb
	case 2, BattleTower_Outside_ExchangeServiceCorner_EventScript_QuickClaw
	case 3, BattleTower_Outside_ExchangeServiceCorner_EventScript_MentalHerb
	case 4, BattleTower_Outside_ExchangeServiceCorner_EventScript_Brightpowder
	case 5, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChoiceBand
	case 6, BattleTower_Outside_ExchangeServiceCorner_EventScript_KingsRock
	case 7, BattleTower_Outside_ExchangeServiceCorner_EventScript_FocusBand
	case 8, BattleTower_Outside_ExchangeServiceCorner_EventScript_ScopeLens
	case 9, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleTower_Outside_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Leftovers::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmLeftovers, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_LEFTOVERS
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_WhiteHerb::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmWhiteHerb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_WHITE_HERB
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_QuickClaw::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmQuickClaw, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_QUICK_CLAW
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_MentalHerb::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmMentalHerb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_MENTAL_HERB
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Brightpowder::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmBrightpowder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_BRIGHT_POWDER
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ChoiceBand::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmChoiceBand, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_CHOICE_BAND
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_KingsRock::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmKingsRock, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_KINGS_ROCK
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_FocusBand::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmFocusBand, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_FOCUS_BAND
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_ScopeLens::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmScopeLens, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleTower_Outside_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_SCOPE_LENS
	goto BattleTower_Outside_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Man::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Sailor::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_PokefanF::
	lock
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
	release
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_RichBoy::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_Girl::
	msgbox BattleTower_Outside_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
	end

BattleTower_Outside_ExchangeServiceCorner_EventScript_OldWTMan::
	msgbox BattleTower_Outside_ExchangeServiceCorner_EventScript_OldWTMan_Text, MSGBOX_NPC
	end

BattleTower_Outside_ExchangeServiceCorner_Text_YouAlreadyHaveThis:
	.string "Dieses Item hast du bereits.$"

BattleTower_Outside_ExchangeServiceCorner_EventScript_OldWTMan_Text:
	.string "Hi! falls du den\n"
	.string "WONDERTRADE, suchst, den findest du\l"
	.string "jetzt in jedem Pokémon CENTER. Viel\n"
	.string "Spaß!$"

BattleTower_Outside_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize:
	.string "Hallo, das ist der EXCHANGE SERVICE\n"
	.string "CORNER.\p"
	.string "Wir tauschen Battle Points gegen\n"
	.string "wunderschöne Preise.\p"
	.string "Bitte suche dir einen Preis von der\n"
	.string "Liste aus.$"

@ Unused
BattleTower_Outside_ExchangeServiceCorner_Text_PleaseChoosePrize:
	.string "Bitte suche dir einen Preis von der\n"
	.string "Liste aus.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmKissPoster:
	.string "Du möchtest das KISS POSTER.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmKissCushion:
	.string "Du möchtest das KISS CUSHION.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmSmoochumDoll:
	.string "Du möchtest das Kussilla PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmTogepiDoll:
	.string "Du möchtest das Togepi PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmMeowthDoll:
	.string "Du möchtest das Mauzi PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmClefairyDoll:
	.string "Du möchtest das Piepi PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmDittoDoll:
	.string "Du möchtest das Ditto PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCyndaquilDoll:
	.string "Du möchtest das Feurigel PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmChikoritaDoll:
	.string "Du möchtest das Endivie PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmTotodileDoll:
	.string "Du möchtest das Karnimani PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmLaprasDoll:
	.string "Du möchtest das Lapras PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmSnorlaxDoll:
	.string "Du möchtest das Relaxo PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmVenusaurDoll:
	.string "Du möchtest das Bisaflor PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCharizardDoll:
	.string "Du möchtest das Glurak PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmBlastoiseDoll:
	.string "Du möchtest das Turtok PUPPE.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmProtein:
	.string "Du möchtest das Protein.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCalcium:
	.string "Du möchtest das Kalzium.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmIron:
	.string "Du möchtest das Eisen.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmZinc:
	.string "Du möchtest das Zink.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmCarbos:
	.string "Du möchtest das Carbon.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmHpUp:
	.string "Du möchtest das KP-Plus.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmBrightpowder:
	.string "Du möchtest das BRIGHTPOWDER.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmWhiteHerb:
	.string "Du möchtest das Schlohkraut.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmQuickClaw:
	.string "Du möchtest das Flinkklaue.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmMentalHerb:
	.string "Du möchtest das Mentalkraut.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmChoiceBand:
	.string "Du möchtest das Wahlband.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmKingsRock:
	.string "Du möchtest das KING'S Gestein.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmFocusBand:
	.string "Du möchtest das Fokus-Band.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmScopeLens:
	.string "Du möchtest das Scope-Linse.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_ConfirmLeftovers:
	.string "Du möchtest das Überreste.\n"
	.string "Ist das richtig?$"

BattleTower_Outside_ExchangeServiceCorner_Text_WellSendItToPC:
	.string "Vielen Dank!\n"
	.string "Wir senden es an deinen PC.$"

BattleTower_Outside_ExchangeServiceCorner_Text_HereIsYourPrize:
	.string "Hier ist dein Preis!$"

BattleTower_Outside_ExchangeServiceCorner_Text_DontHaveEnoughPoints:
	.string "Es tut mir sehr leid…\n"
	.string "Du hast nicht genügend Battle Points…$"

BattleTower_Outside_ExchangeServiceCorner_Text_PCIsFull:
	.string "Es tut mir sehr leid…\n"
	.string "Dein PC hat keinen Platz…$"

BattleTower_Outside_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt:
	.string "Es tut mir sehr leid…\n"
	.string "Du hast keinen Platz dafür…$"

BattleTower_Outside_ExchangeServiceCorner_Text_ThankYouVisitWithPoints:
	.string "Vielen Dank.\p"
	.string "Bitte besuche uns wenn\n"
	.string "du genug Battle Points hast.$"

BattleTower_Outside_ExchangeServiceCorner_Text_WishIHadAllDolls:
	.string "Oh, die sind so schön!\n"
	.string "Ich wünschte ich hätte sie!\l"
	.string "Süße Kissen!\l"
	.string "Große Plüschpuppen!\l"
	.string "Kleine Puppen!\l"
	.string "Ich wünschte ich hätte alle!$"

BattleTower_Outside_ExchangeServiceCorner_Text_GetYouAnythingYouWant:
	.string "Lass Mutti nur machen!\p"
	.string "wenn du etwas möchtest\n"
	.string "dann bekommst du es auch!$"

BattleTower_Outside_ExchangeServiceCorner_Text_ItemsWillGetMonTougher:

BattleTower_Outside_ExchangeServiceCorner_Text_GoGetYourOwnDoll:

BattleTower_Outside_ExchangeServiceCorner_Text_MoreBattlePointsForRecord:
	.string "Wusstest du schon?\p"
	.string "Wenn du deine Bilanz in den\n"
	.string "Kampfeinrichtungen verbesserst,\l"
	.string "geben sie dir mehr und mehr Battle\n"
	.string "Points.$"

BattleTower_Outside_ExchangeServiceCorner_Text_KissPosterDesc::
	.string "Ein großes Poster mit Kussilla.$"

BattleTower_Outside_ExchangeServiceCorner_Text_KissCushionDesc::
	.string "Ein Kussilla Kissen.\n"
	.string "Platzier es auf einem Teppich oder\l"
	.string "Tisch.$"

BattleTower_Outside_ExchangeServiceCorner_Text_SmoochumDollDesc::
	.string "Ein Kussilla PUPPE.\n"
	.string "Platzier es auf einem Teppich oder\l"
	.string "Tisch.$"

BattleTower_Outside_ExchangeServiceCorner_Text_TogepiDollDesc::
	.string "Ein Togepi PUPPE.\n"
	.string "Platzier es auf einem Teppich oder\l"
	.string "Tisch.$"

BattleTower_Outside_ExchangeServiceCorner_Text_MeowthDollDesc::
	.string "Ein Mauzi PUPPE.\n"
	.string "Platzier es auf einem Teppich oder\l"
	.string "Tisch.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ClefairyDollDesc::
	.string "Ein Piepi PUPPE.\n"
	.string "Platzier es auf einem Teppich oder\l"
	.string "Tisch.$"

BattleTower_Outside_ExchangeServiceCorner_Text_DittoDollDesc::
	.string "Ein Ditto PUPPE.\n"
	.string "Platzier es auf einem Teppich oder\l"
	.string "Tisch.$"

BattleTower_Outside_ExchangeServiceCorner_Text_CyndaquilDollDesc::
	.string "Ein Feurigel PUPPE.\n"
	.string "Platzier es auf einem Teppich oder\l"
	.string "Tisch.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ChikoritaDollDesc::
	.string "Ein Endivie PUPPE.\n"
	.string "Platzier es auf einem Teppich oder\l"
	.string "Tisch.$"

BattleTower_Outside_ExchangeServiceCorner_Text_TotodileDollDesc::
	.string "Ein Karnimani PUPPE.\n"
	.string "Platzier es auf einem Teppich oder\l"
	.string "Tisch.$"

BattleTower_Outside_ExchangeServiceCorner_Text_LargeDollDesc::
	.string "Ein large PUPPE.\n"
	.string "Platzier es auf einem Teppich oder\l"
	.string "Tisch.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ProteinDesc::
	.string "Ein seltsames ticket welches dich\n"
	.string "zu einer einsamen Insel bringt.$"

BattleTower_Outside_ExchangeServiceCorner_Text_CalciumDesc::
	.string "Ein seltsames ticket welches dich\n"
	.string "zu einer einsamen Insel bringt.$"

BattleTower_Outside_ExchangeServiceCorner_Text_IronDesc::
	.string "Ein seltsames ticket welches dich\n"
	.string "zu einer einsamen Insel bringt.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ZincDesc::
	.string "Eine… Alte Karte? Vielleicht\n"
	.string "bringt sie mich irgendwo hin.$"

BattleTower_Outside_ExchangeServiceCorner_Text_CarbosDesc::
	.string "x10 EV wachstum, aber halbiert\n"
	.string "geschwindigkeit.$"

BattleTower_Outside_ExchangeServiceCorner_Text_HPUpDesc::
	.string "Ein eigenartige Box\n"
	.string "von SILPH CO.$"

BattleTower_Outside_ExchangeServiceCorner_Text_LeftoversDesc::
	.string "Ein Item das im Kampf\n"
	.string "langsam die KP regeneriert.$"

BattleTower_Outside_ExchangeServiceCorner_Text_WhiteHerbDesc::
	.string "Ein Item das alle verringerten\n"
	.string "Werte wiederherstellt.$"

BattleTower_Outside_ExchangeServiceCorner_Text_QuickClawDesc::
	.string "Ein Item was einem manchmal den\n"
	.string "ersten Treffer garantiert.$"

BattleTower_Outside_ExchangeServiceCorner_Text_MentalHerbDesc::
	.string "Ein Item was das Pokémon von\n"
	.string "verliebtheit befreien kann.$"

BattleTower_Outside_ExchangeServiceCorner_Text_BrightpowderDesc::
	.string "Ein Item was die Genauigkeit\n"
	.string "des Gegners reduziert.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ChoiceBandDesc::
	.string "Erhöht Stärke einer Attacke,\n"
	.string "aber kann nur diese wirken.$"

BattleTower_Outside_ExchangeServiceCorner_Text_KingsRockDesc::
	.string "Ein Item was den Gegner manchmal\n"
	.string "bei Treffer zurückschrecken lässt.$"

BattleTower_Outside_ExchangeServiceCorner_Text_FocusBandDesc::
	.string "Ein Item was manchmal\n"
	.string "Kampfunfähigkeit verhindert.$"

BattleTower_Outside_ExchangeServiceCorner_Text_ScopeLensDesc::
	.string "Ein Item welches die\n"
	.string "Kritische Trefferchance erhöht.$"

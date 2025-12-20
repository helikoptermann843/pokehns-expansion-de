.set LOCALID_R39_SHADOW, 17
.set LOCALID_R39_BAOBA, 2

Route39_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route39_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route39_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route39_EventScript_Item_TM::
	finditem ITEM_TM_BRICK_BREAK
	end

Route39_EventScript_Item_Nugget::
	finditem ITEM_BIG_NUGGET
	end

Route39_EventScript_LegendaryTrigger::
	lock
	clearflag FLAG_HIDE_ROUTE39_SHADOW
	addobject LOCALID_R39_SHADOW
	playse SE_M_RAZOR_WIND
	applymovement LOCALID_R39_SHADOW, Route39_Movement_ShadowSlideDown
	waitmovement 0
	setflag FLAG_HIDE_ROUTE39_SHADOW
	removeobject LOCALID_R39_SHADOW
	playse SE_PIN
	applymovement LOCALID_R39_BAOBA, Common_Movement_QuestionMark
	applymovement LOCALID_PLAYER, Common_Movement_QuestionMark
	turnobject LOCALID_R39_BAOBA DIR_SOUTH
	turnobject LOCALID_PLAYER DIR_SOUTH
	delay 60

	getplayerxy VAR_TEMP_0, VAR_TEMP_1

	call_if_eq VAR_TEMP_1, 20, Route39_EventScript_BaobaMovement1
	call_if_eq VAR_TEMP_1, 21, Route39_EventScript_BaobaMovement2
	call_if_eq VAR_TEMP_1, 22, Route39_EventScript_BaobaMovement3
	call_if_eq VAR_TEMP_1, 23, Route39_EventScript_BaobaMovement4

	turnobject LOCALID_R39_BAOBA DIR_EAST
	turnobject LOCALID_PLAYER DIR_WEST
Route39_EventScript_ChooseLegend::
	msgbox Route39_Text_ChooseLegend, MSGBOX_DEFAULT
	multichoice 20, 8, MULTI_GOLDSILVER, FALSE
	switch VAR_RESULT
	case 0, Route39_EventScript_LegendaryTriggerGold
	case 1, Route39_EventScript_LegendaryTriggerSilver
	case MULTI_B_PRESSED, Route39_EventScript_ChooseLegend
	release
	end

Route39_EventScript_BaobaMovement1::
	applymovement LOCALID_R39_BAOBA, Route39_Movement_Baoba1
	waitmovement 0
	return
Route39_EventScript_BaobaMovement2::
	applymovement LOCALID_R39_BAOBA, Route39_Movement_Baoba2
	waitmovement 0
	return
Route39_EventScript_BaobaMovement3::
	applymovement LOCALID_R39_BAOBA, Route39_Movement_Baoba3
	waitmovement 0
	return
Route39_EventScript_BaobaMovement4::
	applymovement LOCALID_R39_BAOBA, Route39_Movement_Baoba4
	waitmovement 0
	return

Route39_Movement_Baoba1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end
Route39_Movement_Baoba2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end
Route39_Movement_Baoba3:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end
Route39_Movement_Baoba4:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

Route39_EventScript_LegendaryTriggerGold::
	setvar VAR_LUGIA_OR_HOOH, 2
	goto Route39_EventScript_BaobaIntro

Route39_EventScript_LegendaryTriggerSilver::
	setvar VAR_LUGIA_OR_HOOH, 1
	goto Route39_EventScript_BaobaIntro

Route39_EventScript_BaobaIntro::
	msgbox Route39_Text_BaobaIntro, MSGBOX_DEFAULT
	playse MUS_HG_POKEGEAR_REGISTERED
	msgbox Route39_Text_Registered, MSGBOX_DEFAULT
	waitse
	msgbox Route39_Text_WillCall, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_R39_BAOBA, Route39_Movement_BaobaLeave
	waitmovement 0
	setflag FLAG_ENABLE_BAOBA_MATCH_CALL
	removeobject LOCALID_R39_BAOBA
	release
	end

Route39_Text_ChooseLegend::
	.string "Baoba: Grundgütiger!\n"
	.string "Gehört dieser Schatten etwa\n"
	.string "zu einem Pokémon?\p"
	.string "Hast du es genau gesehen?\n"
	.string "Ich kann seine Farbe nicht\l"
	.string "erkennen...$"

Route39_Text_BaobaIntro::
	.string "Wie seltsam...\p"
	.string "...Ohh! Was du da in den Händen hältst\n"
	.string "ist... das, was man einen\p"
	.string "POKéDEX nennt!\p"
	.string "So einen habe ich schon lange\n"
	.string "nicht mehr gesehen.\p"
	.string "Ich heiße Baoba! Früher leitete ich\l"
	.string "die Safari-Zone\n"
	.string "in Fuchsania City, aber sie ist\p"
	.string "langsam veraltet, da neue\n"
	.string "Unterhaltungsmöglichkeiten\n"
	.string "entstanden waren.\p"
	.string "Also ging ich ins Ausland, um die\l"
	.string "neueste Technik zu lernen und\n"
	.string "eine hochmoderne Safari-Zone\p"
	.string "in Anemonia zu eröffnen.\p"
	.string "Es ist vielleicht kein Zufall, dass\n"
	.string "wir uns gerade unterhalten.\p"
	.string "Warum registrieren wir nicht\n"
	.string "unsere Nummern im Pokécom?\p"
	.string "Ich rufe dich an, sobald die\n"
	.string "Safari-Zone öffnet, noch bevor ich\l"
	.string "jemand anderen kontaktiere!$"

Route39_Text_Registered:
	.string "{PLAYER} registriert Baoba\n"
	.string "im POKéCOM!$"


Route39_Text_WillCall:
	.string "Baoba: Ich gebe dir demnächst\n"
	.string "auf dem POKéCOM bescheid!$"

Route39_Movement_BaobaLeave:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route39_Movement_ShadowSlideDown:
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	step_end

Route39_EventScript_Woman::
	lock
	faceplayer
	msgbox Route39_Text_Woman, MSGBOX_DEFAULT
	closemessage
	release
	end

Route39_Text_Woman:
	.string "Dieser Schatten... war das ein\n"
	.string "riesiges Taubsi?$"

Route39_EventScript_Miltank::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox Route39_Text_Miltank, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route39_Text_Miltank:
	.string "MILTANK: Muh!$"

Route39_EventScript_Eugene::
	trainerbattle_single TRAINER_EUGENE, Route39_Text_SailorEugeneSeen, Route39_Text_SailorEugeneBeaten
	msgbox Route39_Text_SailorEugeneAfter, MSGBOX_AUTOCLOSE
	end

Route39_Text_SailorEugeneSeen:
	.string "Ich bin gerade\n"
	.string "wieder in OLIVIANA angekommen.\p"
	.string "Wie steht es nun\n"
	.string "mit dem PokémonKampf?$"

Route39_Text_SailorEugeneBeaten:
	.string "Aah!$"

Route39_Text_SailorEugeneAfter::
	.string "Meine Pokémon wurden im Ausland\n"
	.string "gefangen und aufgezogen.\p"
	.string "Sie sind meine Begleiter auf\n"
	.string "langen Reisen.$"

Route39_EventScript_Derek::
	trainerbattle_single TRAINER_DEREK, Route39_Text_PokefanMDerekSeen, Route39_Text_PokefanMDerekBeaten
	msgbox Route39_Text_PokefanMDerekAfter, MSGBOX_AUTOCLOSE
	end

Route39_Text_PokefanMDerekSeen:
	.string "Genau der richtige\n"
	.string "Moment, um mit PIKACHU anzugeben!$"

Route39_Text_PokefanMDerekBeaten:
	.string "Ich hatte keine\n"
	.string "Zeit, mit PIKACHU zu prahlen…$"

Route39_Text_PokefanMDerekAfter::
	.string "Ich höre nicht darauf\n"
	.string "wenn du nur Angeben willst!\p"
	.string "Wir POKé-FANS haben die Regel,\n"
	.string "nicht auf Angeber zu hören!$"

Route39_EventScript_Ruth::
	trainerbattle_single TRAINER_RUTH, Route39_Text_PokefanFRuthSeen, Route39_Text_PokefanFRuthBeaten
	msgbox Route39_Text_PokefanFRuthAfter, MSGBOX_AUTOCLOSE
	end

Route39_Text_PokefanFRuthSeen:
	.string "Was für süße Pokémon!\p"
	.string "Zeigen wir uns\n"
	.string "gegenseitig unsere Pokémon, und zwar\l"
	.string "gleichzeitig!$"

Route39_Text_PokefanFRuthBeaten:
	.string "Mir macht es nichts aus, zu verlieren.$"

Route39_Text_PokefanFRuthAfter:
	.string "Kennst du Baby-\n"
	.string "Pokémon?\p"
	.string "Sie sind unfassbar süß!$"

Route39_EventScript_Norman::
	trainerbattle_single TRAINER_NORMAN, Route39_Text_PsychicNormanSeen, Route39_Text_PsychicNormanBeaten
	msgbox Route39_Text_PsychicNormanAfter, MSGBOX_AUTOCLOSE
	end

Route39_Text_PsychicNormanSeen:
	.string "Zeig doch mal, was\n"
	.string "deine Pokémon drauf haben.$"

Route39_Text_PsychicNormanBeaten:
	.string "He, deine Pokémon sind sehr fähig!$"

Route39_Text_PsychicNormanAfter::
	.string "Weißt du, dass Pokémon\n"
	.string "verschiedene Fähigkeiten haben?\p"
	.string "Menschen sind genauso.\n"
	.string "Jeder hat ein anderes\l"
	.string "Potenzial.$"

Route39_EventScript_Jamie::
	trainerbattle_single TRAINER_JAMIE, Route39_Text_PokefanFJaimeSeen, Route39_Text_PokefanFJaimeBeaten
	msgbox Route39_Text_PokefanFJaimeAfter, MSGBOX_AUTOCLOSE
	end

Route39_Text_PokefanFJaimeSeen:
	.string "Du kommst gerade recht.\p"
	.string "Auf in den Kampf.$"

Route39_Text_PokefanFJaimeBeaten:
	.string "Oh, wie ernüchternd…$"

Route39_Text_PokefanFJaimeAfter::
	.string "Ich habe Nachtara heute Nacht\n"
	.string "genau hier auf ROUTE 39 getroffen.\p"
	.string "Ich weiß nicht warum, aber es\n"
	.string "scheint zu mögen, wenn ich hier\l"
	.string "trainiere.\p"
	.string "Es wird hier freundlicher, als\n"
	.string "irgendwo sonst.$"


Route39_EventScript_Sign1::
	lock
	msgbox Route39_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route39_Text_Sign:
	.string "ROUTE 39\p"
	.string "OLIVIANA CITY - TEAK CITY$"

Route39_EventScript_Sign2::
	lock
	msgbox Route39_Text_MoomooFarmSign, MSGBOX_SIGN
	closemessage
	release
	end

Route39_Text_MoomooFarmSign:
	.string "Kuhmuh-Farm\p"
	.string "Genießt unsere leckere Milch!$"

Route39_EventScript_Sign3::
	lock
	msgbox Route39_Text_TrainerTips, MSGBOX_SIGN
	closemessage
	release
	end

Route39_Text_TrainerTips:
	.string "TIPPS für TRAINER Benutze KOPFNUSS,\p"
	.string "um Pokémon\n"
	.string "aus den Bäumen zu schütteln.\p"
	.string "Auf den Bäumen\n"
	.string "leben verschiedene Arten von Pokémon.\n"
	.string "\p"
	.string "Benutze KOPFNUSS\n"
	.string "an jedem Baum, den du siehst!$"

.set LOCALID_BURNED_TOWER_SILVER, 3
.set LOCALID_BURNED_TOWER_EUSINE, 1

BurnedTower_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, BurnedTower_1F_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BurnedTower_1F_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, BurnedTower_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

BurnedTower_1F_OnTransition: 
	callnative SetTimeBasedEncounters
	end

BurnedTower_1F_OnLoad::
	goto_if_ge VAR_ECRUTEAK_CITY_STATE, 4, BurnedTower_1F_MapScript_CreateHole
	end

BurnedTower_1F_MapScript_CreateHole::
	setmetatile 16, 12, 0x37E, FALSE
	end

BurnedTower_1F_OnFrame::
	map_script_2 VAR_ECRUTEAK_CITY_STATE, 1, BurnedTower_1F_EventScript_MeetEusine
	.2byte 0

BurnedTower_1F_EventScript_MeetEusine::
	lock
	playse SE_PIN
	applymovement LOCALID_BURNED_TOWER_EUSINE, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_BURNED_TOWER_EUSINE, BurnedTower_Movement_Eusine1
	waitmovement 0
	msgbox BurnedTower_1FEusineIntroText, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BURNED_TOWER_EUSINE, BurnedTower_Movement_Eusine2
	waitmovement 0
	setvar VAR_ECRUTEAK_CITY_STATE, 2
	release
	end

BurnedTower_Movement_Eusine1:
	walk_down
	walk_down
	step_end

BurnedTower_Movement_Eusine2:
	walk_up
	walk_up
	step_end


BurnedTower_1FEusineIntroText:
	.string "Eusin: Ich heiße Eusin.\p"
	.string "Ich bin auf der Spur eines Pokémon\n"
	.string "namens Suicune.\p"
	.string "Und du bist...?\p"
	.string "{PLAYER}? Freut mich, dich zu treffen!\n"
	.string "\p"
	.string "Ich habe gehört, dass Suicune in\n"
	.string "diesem BRANDSCHACHT sein könnte, also\n"
	.string "kam ich,\l"
	.string "um es mir anzusehen.\p"
	.string "Aber wo genau könnte es sein?$"

BurnedTower_1F_EventScript_Item_HpUp::
	finditem ITEM_HP_UP
	end

BurnedTower_1F_EventScript_Item_Ether::
	finditem ITEM_ETHER
	end

BurnedTower_1F_EventScript_Eusine::
	lock
	faceplayer
	msgbox BurnedTower_1FEusineText, MSGBOX_DEFAULT
	closemessage
	release
	end

BurnedTower_1F_EventScript_Morty::
	lock
	faceplayer
	msgbox BurnedTower_1FMortyText, MSGBOX_DEFAULT
	closemessage
	release
	end

BurnedTower_1FEusineText:
	.string "Eusin: Ich hörte, dass Suicune\n"
	.string "in dieser Turmruine sein könnte, also\n"
	.string "kam ich,\l"
	.string "um ihn mir anzusehen.\p"
	.string "Aber wo genau könnte es sein?$"

BurnedTower_1FMortyText:
	.string "Jens: Der Arenaleiter von TEAK CITY\n"
	.string "muss die sogenannten legendären\n"
	.string "Pokémon erforschen\l"
	.string "Suicune, Entei und Raikou.\p"
	.string "Da Eusin hier ist, habe ich\n"
	.string "beschlossen,\l"
	.string "den Turm mit ihm zu untersuchen.$"

BurnedTower_1F_EventScript_Silver::
	lock
	playse SE_PIN
	applymovement LOCALID_BURNED_TOWER_SILVER, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	applymovement LOCALID_BURNED_TOWER_SILVER, Common_Movement_WalkLeft
	waitmovement 0
	waitmovement 0
	msgbox BurnedTowerSilver_BeforeText, MSGBOX_DEFAULT
	call_if_eq VAR_STARTER_MON, 0, BurnedTower_1F_Silver_Battle_Cyndaquil
	call_if_eq VAR_STARTER_MON, 1, BurnedTower_1F_Silver_Battle_Totodile
	call_if_eq VAR_STARTER_MON, 2, BurnedTower_1F_Silver_Battle_Chikorita
	playbgm MUS_HG_RIVAL_EXIT, TRUE
	msgbox BurnedTowerSilver_AfterText1, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	playse SE_CLICK
	setmetatile 16, 12, 0x37E, FALSE
	special DrawWholeMapView
	waitse
	delay 60
	special SpawnCameraObject
	removeobject LOCALID_PLAYER
	playse SE_FALL
	delay 60
	msgbox BurnedTowerSilver_AfterText2, MSGBOX_AUTOCLOSE
	waitmessage
	warphole MAP_BURNED_TOWER_B1F
	setvar VAR_ECRUTEAK_CITY_STATE, 3
	release
	end

BurnedTower_1F_Silver_Battle_Cyndaquil::
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_3, BurnedTowerSilver_WinText
	return

BurnedTower_1F_Silver_Battle_Totodile::
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_3, BurnedTowerSilver_WinText
	return

BurnedTower_1F_Silver_Battle_Chikorita::
	trainerbattle_no_intro TRAINER_RIVAL_CHIKORITA_3, BurnedTowerSilver_WinText
	return

BurnedTowerSilver_BeforeText:
	.string "..............................\p"
	.string "...Ah, du bist es.\p"
	.string "Ich kam, um einige legendäre Pokémon\n"
	.string "zu suchen, die hier angeblich\l"
	.string "ruhen sollen.\p"
	.string "Aber hier ist nichts!\p"
	.string "Nichts, nach all der Mühe,\n"
	.string "dieses Loch zu besuchen?\l"
	.string "Unmöglich!\p"
	.string "Alles deine Schuld!$"

BurnedTowerSilver_WinText:
	.string "...Humph!\p"
	.string "Ich habe nur verloren, weil meine\n"
	.string "Pokémon unglaublich schwach sind.\p"
	.string "Wie armselig.$"

BurnedTowerSilver_AfterText1:
	.string "...Ach, egal.\p"
	.string "Du würdest sowieso niemals ein\n"
	.string "legendäres Pokémon fangen.$"

BurnedTowerSilver_LossText:
	.string "...Humph!\p"
	.string "Darum hasse ich es, gegen Schwächlinge\n"
	.string "zu kämpfen. Zeitverschwendung.$"

BurnedTowerSilver_AfterText2:
	.string "Humph!\p"
	.string "Was tust du da und fällst in ein Loch?\n"
	.string "Ein richtiges Genie!\p"
	.string "Selbst schuld!$"

BurnedTower_1F_EventScript_Nard::
	trainerbattle_single TRAINER_NARD BurnedTower_Text_NardSeen, BurnedTower_Text_NardBeaten
	msgbox BurnedTower_Text_NardAfter, MSGBOX_AUTOCLOSE
	end

BurnedTower_1F_EventScript_Richardo::
	trainerbattle_single TRAINER_RICHARDO BurnedTower_Text_RichardoSeen, BurnedTower_Text_RichardoBeaten
	msgbox BurnedTower_Text_RichardoAfter, MSGBOX_AUTOCLOSE
	end

BurnedTower_Text_NardSeen:
	.string "Keine Sorge!\p"
	.string "Wir Feuerspucker kennen die wahre\n"
	.string "Stärke von Feuer besser als alle\l"
	.string "anderen!$"
BurnedTower_Text_NardBeaten:
	.string "Danke für den hitzigen Kampf!$"
BurnedTower_Text_NardAfter:
	.string "Der Grund, warum dieser Turm verbrannt\l"
	.string "ist,\n"
	.string "ist, dass er vom Blitz getroffen\p"
	.string "wurde.\p"
	.string "Mein Feuer ist im Vergleich dazu\n"
	.string "winzig...$"
BurnedTower_Text_RichardoSeen:
	.string "Ich übe das Stehlen in der\n"
	.string "Turmruine! Versuch das nicht\p"
	.string "Zuhause!$"
BurnedTower_Text_RichardoBeaten:
	.string "Pfffffffffffffff.$"
BurnedTower_Text_RichardoAfter:
	.string "Vielleicht ist ein Leben als\n"
	.string "Verbrecher doch nichts für mich...$"

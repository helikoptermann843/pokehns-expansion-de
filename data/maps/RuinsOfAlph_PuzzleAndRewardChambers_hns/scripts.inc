RuinsOfAlph_PuzzleAndRewardChambers_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, RuinsOfAlph_PuzzleAndRewardChambers_OnLoad
	.byte 0

RuinsOfAlph_PuzzleAndRewardChambers_OnLoad::
	call_if_set FLAG_COMPLETED_KABUTO_PUZZLE, RuinsOfAlph_PuzzleAndRewardChambers_MapScript_KabutoHole
	call_if_set FLAG_COMPLETED_OMANYTE_PUZZLE, RuinsOfAlph_PuzzleAndRewardChambers_MapScript_OmanyteHole
	call_if_set FLAG_COMPLETED_AERODACTYL_PUZZLE, RuinsOfAlph_PuzzleAndRewardChambers_MapScript_AerodactylHole
	call_if_set FLAG_COMPLETED_HOOH_PUZZLE, RuinsOfAlph_PuzzleAndRewardChambers_MapScript_HoohHole

	call_if_set FLAG_KABUTO_BROUGHT, RuinsOfAlph_PuzzleAndRewardChambers_MapScript_KabutoDoor
	call_if_set FLAG_OMANYTE_BROUGHT, RuinsOfAlph_PuzzleAndRewardChambers_MapScript_OmanyteDoor
	call_if_set FLAG_AERODACTYL_BROUGHT, RuinsOfAlph_PuzzleAndRewardChambers_MapScript_AerodactylDoor
	call_if_set FLAG_HOOH_BROUGHT, RuinsOfAlph_PuzzleAndRewardChambers_MapScript_HoohDoor
	end

RuinsOfAlph_PuzzleAndRewardChambers_MapScript_KabutoHole::
	setmetatile 20, 5, 0x302, FALSE
	setmetatile 21, 5, 0x303, FALSE
	return
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_OmanyteHole::
	setmetatile 4, 22, 0x302, FALSE
	setmetatile 5, 22, 0x303, FALSE
	return
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_AerodactylHole::
	setmetatile 20, 22, 0x302, FALSE
	setmetatile 21, 22, 0x303, FALSE
	return
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_HoohHole::
	setmetatile 4, 5, 0x302, FALSE
	setmetatile 5, 5, 0x303, FALSE
	return


RuinsOfAlph_PuzzleAndRewardChambers_MapScript_KabutoDoor::
	setmetatile 21, 1, 0x308, FALSE 
	return
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_OmanyteDoor::
	setmetatile 5, 18, 0x308, FALSE 
	return
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_AerodactylDoor::
	setmetatile 21, 18, 0x308, FALSE 
	return
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_HoohDoor::
	setmetatile 5, 1, 0x308, FALSE 
	return


RuinsOfAlph_PuzzleAndRewardChambers_MapScript_KabutoDescripton::
	lock
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Kabuto, MSGBOX_DEFAULT
	release
	end
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_OmanyteDescription::
	lock
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Omanyte, MSGBOX_DEFAULT
	release
	end
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_AerodactylDescription::
	lock
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Aerodactyl, MSGBOX_DEFAULT
	release
	end
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_HoohDescription::
	lock
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Hooh, MSGBOX_DEFAULT
	release
	end
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_StatueDescription::
	lock
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Statue, MSGBOX_DEFAULT
	release
	end
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_UnownText::
	lock
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_UnownText, MSGBOX_DEFAULT
	release
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_Receptionist::
	lock
	faceplayer
	goto_if_set FLAG_KABUTO_BROUGHT, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_Receptionist3
	goto_if_set FLAG_COMPLETED_KABUTO_PUZZLE, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_Receptionist2
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Receptionist1, MSGBOX_DEFAULT
	closemessage
	release
	end
RuinsOfAlph_PuzzleAndRewardChambers_EventScript_Receptionist2::
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Receptionist2, MSGBOX_DEFAULT
	closemessage
	release
	end
RuinsOfAlph_PuzzleAndRewardChambers_EventScript_Receptionist3::
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Receptionist3, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_KabutoPuzzle::
	fadescreen FADE_TO_BLACK
	setvar VAR_0x8004, SLIDING_PUZZLE_KABUTO
	goto_if_set FLAG_COMPLETED_KABUTO_PUZZLE, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_KabutoPuzzleCompleted
	setvar VAR_0x8005, FALSE // or TRUE if you want to display the solved puzzle
	special DoSlidingPuzzle
	waitstate
	goto_if_eq VAR_RESULT, TRUE, RuinsOfAlph_PuzzleAndRewardChambers_MapScript_KabutoSuccess
	end
RuinsOfAlph_PuzzleAndRewardChambers_EventScript_KabutoPuzzleCompleted::
	setvar VAR_0x8005, TRUE // or TRUE if you want to display the solved puzzle
	special DoSlidingPuzzle
	waitstate
	end
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_KabutoSuccess::
	setflag FLAG_COMPLETED_KABUTO_PUZZLE
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	setmetatile 20, 5, 0x302, FALSE
	setmetatile 21, 5, 0x303, FALSE
	playse SE_CLICK
	special DrawWholeMapView
	delay 30
	clearflag FLAG_ITEM_DOME_FOSSIL
	setvar VAR_RUINSOFALPH_STATE, 1
	applymovement LOCALID_PLAYER, RuinsOfAlph_PuzzleAndRewardChambers_Movement_Fall
	delay 30
	special SpawnCameraObject
	removeobject LOCALID_PLAYER
	playse SE_FALL
	delay 60
	warphole MAP_RUINS_OF_ALPH_B1F
	release
	end


RuinsOfAlph_PuzzleAndRewardChambers_Movement_Fall:
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	step_end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_OmanytePuzzle::
	fadescreen FADE_TO_BLACK
	setvar VAR_0x8004, SLIDING_PUZZLE_OMANYTE
	goto_if_set FLAG_COMPLETED_OMANYTE_PUZZLE, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_OmanytePuzzleCompleted
	setvar VAR_0x8005, FALSE // or TRUE if you want to display the solved puzzle
	special DoSlidingPuzzle
	waitstate
	goto_if_eq VAR_RESULT, TRUE, RuinsOfAlph_PuzzleAndRewardChambers_MapScript_OmanyteSuccess
	end
RuinsOfAlph_PuzzleAndRewardChambers_EventScript_OmanytePuzzleCompleted::
	setvar VAR_0x8005, TRUE // or TRUE if you want to display the solved puzzle
	special DoSlidingPuzzle
	waitstate
	end
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_OmanyteSuccess::
	setflag FLAG_COMPLETED_OMANYTE_PUZZLE
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	setmetatile 4, 22, 0x302, FALSE
	setmetatile 5, 22, 0x303, FALSE
	playse SE_CLICK
	special DrawWholeMapView
	delay 30
	clearflag FLAG_ITEM_HELIX_FOSSIL
	applymovement LOCALID_PLAYER, RuinsOfAlph_PuzzleAndRewardChambers_Movement_Fall
	delay 30
	special SpawnCameraObject
	removeobject LOCALID_PLAYER
	playse SE_FALL
	delay 60
	warphole MAP_RUINS_OF_ALPH_B1F
	release
	end


RuinsOfAlph_PuzzleAndRewardChambers_EventScript_AerodactylPuzzle::
	fadescreen FADE_TO_BLACK
	setvar VAR_0x8004, SLIDING_PUZZLE_AERODACTYL
	goto_if_set FLAG_COMPLETED_AERODACTYL_PUZZLE, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_AerodactylPuzzleCompleted
	setvar VAR_0x8005, FALSE // or TRUE if you want to display the solved puzzle
	special DoSlidingPuzzle
	waitstate
	goto_if_eq VAR_RESULT, TRUE, RuinsOfAlph_PuzzleAndRewardChambers_MapScript_AerodactylSuccess
	end
RuinsOfAlph_PuzzleAndRewardChambers_EventScript_AerodactylPuzzleCompleted::
	setvar VAR_0x8005, TRUE // or TRUE if you want to display the solved puzzle
	special DoSlidingPuzzle
	waitstate
	end
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_AerodactylSuccess::
	setflag FLAG_COMPLETED_AERODACTYL_PUZZLE
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	setmetatile 20, 22, 0x302, FALSE
	setmetatile 21, 22, 0x303, FALSE
	playse SE_CLICK
	special DrawWholeMapView
	delay 30
	clearflag FLAG_ITEM_OLD_AMBER
	applymovement LOCALID_PLAYER, RuinsOfAlph_PuzzleAndRewardChambers_Movement_Fall
	delay 30
	special SpawnCameraObject
	removeobject LOCALID_PLAYER
	playse SE_FALL
	delay 60
	warphole MAP_RUINS_OF_ALPH_B1F
	release
	end


RuinsOfAlph_PuzzleAndRewardChambers_EventScript_HooHPuzzle::
	fadescreen FADE_TO_BLACK
	setvar VAR_0x8004, SLIDING_PUZZLE_HO_OH
	goto_if_set FLAG_COMPLETED_HOOH_PUZZLE, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_HoohPuzzleCompleted
	setvar VAR_0x8005, FALSE // or TRUE if you want to display the solved puzzle
	special DoSlidingPuzzle
	waitstate
	goto_if_eq VAR_RESULT, TRUE, RuinsOfAlph_PuzzleAndRewardChambers_MapScript_HoohSuccess
	end
RuinsOfAlph_PuzzleAndRewardChambers_EventScript_HoohPuzzleCompleted::
	setvar VAR_0x8005, TRUE // or TRUE if you want to display the solved puzzle
	special DoSlidingPuzzle
	waitstate
	end
RuinsOfAlph_PuzzleAndRewardChambers_MapScript_HoohSuccess::
	setflag FLAG_COMPLETED_HOOH_PUZZLE
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	setmetatile 4, 5, 0x302, FALSE
	setmetatile 5, 5, 0x303, FALSE
	playse SE_CLICK
	special DrawWholeMapView
	delay 30
	clearflag FLAG_ITEM_GS_BALL
	applymovement LOCALID_PLAYER, RuinsOfAlph_PuzzleAndRewardChambers_Movement_Fall
	delay 30
	special SpawnCameraObject
	removeobject LOCALID_PLAYER
	playse SE_FALL
	delay 60
	warphole MAP_RUINS_OF_ALPH_B1F
	release
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_CheckHooh::
	lock
	goto_if_set FLAG_HOOH_BROUGHT, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardGotten
	specialvar VAR_RESULT, CheckHooh
	goto_if_eq VAR_RESULT, TRUE, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardHooh
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Mon, MSGBOX_SIGN
	closemessage
	release
	end
RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardHooh::
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Reward, MSGBOX_DEFAULT
	closemessage
	playse SE_CLICK
	setmetatile 5, 1, 0x308, FALSE 
	special DrawWholeMapView
	setflag FLAG_HOOH_BROUGHT
	release
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_CheckAerodactyl::
	lock
	goto_if_set FLAG_AERODACTYL_BROUGHT, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardGotten
	specialvar VAR_RESULT, CheckAerodactyl
	goto_if_eq VAR_RESULT, TRUE, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardAerodactyl
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Mon, MSGBOX_SIGN
	closemessage
	release
	end
RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardAerodactyl::
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Reward, MSGBOX_DEFAULT
	closemessage
	playse SE_CLICK
	setmetatile 21, 18, 0x308, FALSE 
	special DrawWholeMapView
	setflag FLAG_AERODACTYL_BROUGHT
	release
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_CheckKabuto::
	lock
	goto_if_set FLAG_KABUTO_BROUGHT, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardGotten
	specialvar VAR_RESULT, CheckKabuto
	goto_if_eq VAR_RESULT, TRUE, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardKabuto
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Mon, MSGBOX_SIGN
	closemessage
	release
	end
RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardKabuto::
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Reward, MSGBOX_DEFAULT
	closemessage
	playse SE_CLICK
	setmetatile 21, 1, 0x308, FALSE 
	special DrawWholeMapView
	setflag FLAG_KABUTO_BROUGHT
	release
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_CheckOmanyte::
	lock
	goto_if_set FLAG_OMANYTE_BROUGHT, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardGotten
	specialvar VAR_RESULT, CheckOmanyte
	goto_if_eq VAR_RESULT, TRUE, RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardOmanyte
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Mon, MSGBOX_SIGN
	closemessage
	release
	end
RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardOmanyte::
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Reward, MSGBOX_DEFAULT
	closemessage
	playse SE_CLICK
	setmetatile 5, 18, 0x308, FALSE 
	special DrawWholeMapView
	setflag FLAG_OMANYTE_BROUGHT
	release
	end

RuinsOfAlph_PuzzleAndRewardChambers_EventScript_RewardGotten::
	msgbox RuinsOfAlph_PuzzleAndRewardChambers_Text_Solved, MSGBOX_DEFAULT
	closemessage
	release
	end

RuinsOfAlph_PuzzleAndRewardChambers_Text_Reward::
	.string "Die Kammer reagiert!\n"
	.string "Der Weg ist frei.$"

RuinsOfAlph_PuzzleAndRewardChambers_Text_Mon::
	.string "Eine Art alter Sensor.\n"
	.string "Wonach sucht er?$"

RuinsOfAlph_PuzzleAndRewardChambers_Text_Solved::
	.string "Der Weg ist frei.$"

RuinsOfAlph_PuzzleAndRewardChambers_Text_Receptionist1::
	.string "Willkommen in dieser Kammer.\p"
	.string "Es gibt Schiebepanels, die ein\n"
	.string "Pokémon der Alten zeigen.\p"
	.string "Schiebe die Panels, um das Bild\n"
	.string "zu vervollständigen.\p"
	.string "Links steht eine Beschreibung\n"
	.string "des Pokémon.\p"
	.string "Wissenschaftler im Labor untersuchen\n"
	.string "neu gefundene Muster.$"

RuinsOfAlph_PuzzleAndRewardChambers_Text_Receptionist2::
	.string "Ein Loch öffnete sich im Boden!\n"
	.string "Ich sollte den anderen Bescheid sagen.$"

RuinsOfAlph_PuzzleAndRewardChambers_Text_Receptionist3::
	.string "Jetzt auch ein Loch in der Wand?!\n"
	.string "Das wird unheimlich.$"

RuinsOfAlph_PuzzleAndRewardChambers_Text_Kabuto::
	.string "Ein Pokémon, das sich am Meeresgrund\n"
	.string "versteckte. Augen auf dem Rücken\l"
	.string "scannten die Umgebung.$"

RuinsOfAlph_PuzzleAndRewardChambers_Text_UnownText::
	.string "Das ist Icognito-Schrift!$"

RuinsOfAlph_PuzzleAndRewardChambers_Text_Statue::
	.string "Eine Nachbildung eines alten\n"
	.string "Pokémon.$"

RuinsOfAlph_PuzzleAndRewardChambers_Text_Aerodactyl::
	.string "Dieses Flug-Pokémon griff seine\n"
	.string "Beute mit sägeartigen Zähnen an.$"

RuinsOfAlph_PuzzleAndRewardChambers_Text_Omanyte::
	.string "Dieses Pokémon trieb im Meer,\n"
	.string "indem es seine zehn Tentakel drehte.$"

RuinsOfAlph_PuzzleAndRewardChambers_Text_Hooh::
	.string "Ein Pokémon, das anmutig mit\n"
	.string "regenbogenfarbenen Flügeln flog.$"

@==========================================================================================================================================================
@ Hooh
RuinsOfAlph_EventScript_Item_LumBerry1::
	finditem ITEM_LUM_BERRY
	end

RuinsOfAlph_EventScript_Item_Charcoal::
	finditem ITEM_CHARCOAL
	end

RuinsOfAlph_EventScript_Item_MaxRevive1::
	finditem ITEM_MAX_REVIVE
	end

RuinsOfAlph_EventScript_Item_SacredAsh::
	finditem ITEM_SACRED_ASH
	end

@ Aero
RuinsOfAlph_EventScript_Item_HealPowder1::
	finditem ITEM_HEAL_POWDER
	end

RuinsOfAlph_EventScript_Item_EnergyRoot::
	finditem ITEM_ENERGY_ROOT
	end

RuinsOfAlph_EventScript_Item_SitrusBerry2::
	finditem ITEM_SITRUS_BERRY
	end

RuinsOfAlph_EventScript_Item_MoonStone::
	finditem ITEM_MOON_STONE
	end

@ Kabuto
RuinsOfAlph_EventScript_Item_HealPowder2::
	finditem ITEM_HEAL_POWDER
	end

RuinsOfAlph_EventScript_Item_EnergyPowder::
	finditem ITEM_ENERGY_POWDER
	end

RuinsOfAlph_EventScript_Item_OranBerry::
	finditem ITEM_ORAN_BERRY
	end

RuinsOfAlph_EventScript_Item_PechaBerry::
	finditem ITEM_PECHA_BERRY
	end

@ Omanyte
RuinsOfAlph_EventScript_Item_Stardust::
	finditem ITEM_STARDUST
	end

RuinsOfAlph_EventScript_Item_StarPiece::
	finditem ITEM_STAR_PIECE
	end

RuinsOfAlph_EventScript_Item_LumBerry2::
	finditem ITEM_LUM_BERRY
	end

RuinsOfAlph_EventScript_Item_WaterStone::
	finditem ITEM_WATER_STONE
	end

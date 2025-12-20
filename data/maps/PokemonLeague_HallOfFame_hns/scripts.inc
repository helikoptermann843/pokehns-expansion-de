.set LOCALID_HALLOFFAME_LANCE, 1

PokemonLeague_HallOfFame_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_HallOfFame_OnFrame
	.byte 0

PokemonLeague_HallOfFame_OnFrame::
	map_script_2 VAR_LEAGUE_STATE, 6, PokemonLeague_HallOfFame_EventScript_Cutscene
	.2byte 0

PokemonLeague_HallOfFame_EventScript_Cutscene::
	lock
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_HallOfFame_EventScript_CutsceneKantoChamp
	applymovement LOCALID_HALLOFFAME_LANCE, PokemonLeague_HallOfFame_Movement_LanceEnter
	applymovement LOCALID_PLAYER, PokemonLeague_HallOfFame_Movement_PlayerEnter
	waitmovement LOCALID_PLAYER
	waitmovement LOCALID_HALLOFFAME_LANCE
	msgbox PokemonLeague_HallOfFame_LanceText, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 20
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
	delay 40
	setvar VAR_TEMP_1, 1
	call PokemonLeague_HallOfFame_EventScript_SetFirstGameClearFlags
	setrespawn HEAL_LOCATION_NEW_BARK_TOWN
	fadescreenspeed FADE_TO_BLACK, 24
	special GameClear
	waitstate
	releaseall
	end

PokemonLeague_HallOfFame_EventScript_CutsceneKantoChamp::
	applymovement LOCALID_HALLOFFAME_LANCE, PokemonLeague_HallOfFame_Movement_LanceEnter
	applymovement LOCALID_PLAYER, PokemonLeague_HallOfFame_Movement_PlayerEnter
	waitmovement LOCALID_PLAYER
	waitmovement LOCALID_HALLOFFAME_LANCE
	msgbox PokemonLeague_HallOfFame_Rematch_LanceText, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 20
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
	delay 40
	setvar VAR_TEMP_1, 1
	call PokemonLeague_HallOfFame_EventScript_SetGameClearFlags
	setrespawn HEAL_LOCATION_NEW_BARK_TOWN
	fadescreenspeed FADE_TO_BLACK, 24
	special GameClear
	waitstate
	releaseall
	end

PokemonLeague_HallOfFame_EventScript_SetFirstGameClearFlags::
	clearflag FLAG_HIDE_LEAGUE_BLACKBELT
	setflag FLAG_IS_CHAMPION
	setflag FLAG_HIDE_BATTLEFRONTIER_ENGINEER
	setvar VAR_SHUCKIE, 2
	setvar VAR_LEAGUE_STATE, 1
	setvar VAR_NEWBARK_TOWN_STATE, 6
	setvar VAR_SSAQUA_STATE, 0
	return

PokemonLeague_HallOfFame_EventScript_SetGameClearFlags::
	clearflag FLAG_HIDE_LATIOS
	clearflag FLAG_HIDE_LATIAS
	clearflag FLAG_HIDE_RAYQUAZA
	clearflag FLAG_HIDE_GROUDON
	clearflag FLAG_HIDE_KYOGRE
	clearflag FLAG_HIDE_MEWTWO
	clearflag FLAG_HIDE_VERMILION_SNORLAX
	clearflag FLAG_HIDE_UNION_CAVE_LAPRAS
	clearflag FLAG_HIDE_SUDOWOODO
	clearflag FLAG_HIDE_ZAPDOS
	clearflag FLAG_HIDE_ARTICUNO
	clearflag FLAG_HIDE_MOLTRES
	clearflag FLAG_ITEM_GS_BALL
	setflag FLAG_HIDE_BATTLEFRONTIER_ENGINEER
	setflag FLAG_IS_KANTO_CHAMPION
	setvar VAR_COMPLETED_LUGIA, 4
	clearflag FLAG_HIDE_LUGIA
	setvar VAR_COMPLETED_HO_OH, 4
	clearflag FLAG_HIDE_HO_OH
	call_if_set FLAG_CAUGHT_RAIKOU, PokemonLeague_HallOfFame_EventScript_SpawnRoamers
	call_if_ge VAR_SUICUNE_ENCOUNTERS, 8, PokemonLeague_HallOfFame_EventScript_SpawnSuicune
	call_if_set FLAG_CAUGHT_CELEBI, PokemonLeague_HallOfFame_EventScript_SpawnSecondCelebi
	clearflag FLAG_DEFEATED_MEW
	clearflag FLAG_CAUGHT_MEW
	clearflag FLAG_BATTLED_DEOXYS
	clearflag FLAG_DEFEATED_DEOXYS
	setvar VAR_LEAGUE_STATE, 1
	return

@ HnS TODO - fix roamers
PokemonLeague_HallOfFame_EventScript_SpawnRoamers::
	setvar VAR_0x8004, 1
	special InitRoamer
	return

PokemonLeague_HallOfFame_EventScript_SpawnSuicune::
	clearflag FLAG_HIDE_ROUTE25_SUICUNE
	return

PokemonLeague_HallOfFame_EventScript_SpawnSecondCelebi::
	clearflag FLAG_HIDE_ILEX_FOREST_SECOND_CELEBI
	return

PokemonLeague_HallOfFame_Movement_LanceEnter:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	face_left
	step_end

PokemonLeague_HallOfFame_Movement_PlayerEnter:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_right
	step_end

PokemonLeague_HallOfFame_LanceText:
	.string "Siegfried: Es ist lange her,\n"
	.string "seit ich zuletzt hier war.\p"
	.string "Dies ist der Ort, an dem wir die\n"
	.string "LIGA-CHAMPIONS für alle Ewigkeit\n"
	.string "ehren.\p"
	.string "Auch ihre mutigen Pokémon werden\n"
	.string "hier verewigt.\p"
	.string "Heute haben wir den Aufstieg eines\n"
	.string "neuen LIGA-CHAMPIONS erlebt-\p"
	.string "eines Trainers, der Mitgefühl\n"
	.string "und Vertrauen in seine Pokémon\n"
	.string "zeigt.\p"
	.string "Eines Trainers, der durch\n"
	.string "Ausdauer und Entschlossenheit\n"
	.string "Erfolg hatte.\p"
	.string "Der neue LIGA-CHAMPION, der alle\n"
	.string "Anlagen zur Größe besitzt!\p"
	.string "{PLAYER}, erlaube mir, dich und\n"
	.string "deine Partner als CHAMPIONS\l"
	.string "einzutragen!$"

PokemonLeague_HallOfFame_Rematch_LanceText:
	.string "Siegfried: Ich erinnere mich gut-\n"
	.string "es ist noch gar nicht lange her,\p"
	.string "dass ich hier stand und dich als\n"
	.string "CHAMPION von JOHTO begrüßte.\p"
	.string "Und nun sind wir wieder hier,\p"
	.string "an diesem heiligen Ort, an dem wir\n"
	.string "die besten Trainer und ihre Pokémon\n"
	.string "ehren.\p"
	.string "Heute hast du bewiesen, dass du\n"
	.string "nicht nur JOHTO, sondern auch KANTO\n"
	.string "gemeistert hast,\p"
	.string "indem du sogar mein stärkstes Team\n"
	.string "besiegt hast.\p"
	.string "Du hast außergewöhnliches Mitgefühl\n"
	.string "und tiefes Vertrauen zu deinen\n"
	.string "Pokémon gezeigt,\p"
	.string "ein Band, das dich immer wieder zum\n"
	.string "Sieg getragen hat.\p"
	.string "Deine Reise, geprägt von Ausdauer\n"
	.string "und unerschütterlicher\n"
	.string "Entschlossenheit,\p"
	.string "zeigt deinen wahren Geist als\n"
	.string "Trainer.\p"
	.string "Du besitzt alles, was einen wahrhaft\n"
	.string "Großen ausmacht-vielleicht sogar\n"
	.string "den Größten.\p"
	.string "{PLAYER}, es ist mir eine Ehre,\p"
	.string "dich und deine treuen Partner\n"
	.string "erneut als CHAMPIONS\l"
	.string "einzutragen.$"

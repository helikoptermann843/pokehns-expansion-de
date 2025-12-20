Route17_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route17_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route17_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route17_EventScript_Riley::
	trainerbattle_single TRAINER_RILEY Route17_Text_BikerRileySeen, Route17_Text_BikerRileyBeaten
	msgbox Route17_Text_BikerRileyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_Joel::
	trainerbattle_single TRAINER_JOEL Route17_Text_BikerJoelSeen, Route17_Text_BikerJoelBeaten
	msgbox Route17_Text_BikerJoelAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_Glenn::
	trainerbattle_single TRAINER_GLENN Route17_Text_BikerGlennSeen, Route17_Text_BikerGlennBeaten
	msgbox Route17_Text_BikerGlennAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_Charles::
	trainerbattle_single TRAINER_CHARLES Route17_Text_BikerCharlesSeen, Route17_Text_BikerCharlesBeaten
	msgbox Route17_Text_BikerCharlesAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_Text_BikerRileySeen:
	.string "Hey, du! Du bist aus JOHTO, oder?$"

Route17_Text_BikerRileyBeaten:
	.string "Boah, du legst aber los!$"

Route17_Text_BikerRileyAfterBattle:
	.string "Werd' nicht frech, du Null aus JOHTO!$"

Route17_Text_BikerJoelSeen:
	.string "Wow, cooles Fahrrad!$"

Route17_Text_BikerJoelBeaten:
	.string "Aber du siehst nicht nur cool aus…$"

Route17_Text_BikerJoelAfterBattle:
	.string "Ich sehe zwar cool\n"
	.string "aus, bin aber schwach, also bin ich\n"
	.string "nicht wirklich cool.\p"
	.string "Ich muss härter trainieren…$"

Route17_Text_BikerGlennSeen:
	.string "Hey! Schneller Kampf gefällig?$"

Route17_Text_BikerGlennBeaten:
	.string "Ups! Du hast ganz schön Kraft!$"

Route17_Text_BikerGlennAfterBattle:
	.string "Freihändig fahren\n"
	.string "gilt als cool auf dem RADWEG.$"

Route17_Text_BikerCharlesSeen:
	.string "Wir sind die\n"
	.string "furchtlosen Helden des RADWEGs!$"

Route17_Text_BikerCharlesBeaten:
	.string "Argh! Bumm und krach!$"

Route17_Text_BikerCharlesAfterBattle:
	.string "Durch rücksichts-\n"
	.string "loses Fahren passieren viele Unfälle!\l"
	.string "Bleib locker!$"


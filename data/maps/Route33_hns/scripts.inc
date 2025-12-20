Route33_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route33_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route33_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route33_EventScript_HikerAnthony::
	trainerbattle_single TRAINER_ANTHONY, Route33_Text_HikerAnthony2Seen, Route33_Text_HikerAnthony2Beaten
	msgbox Route33_Text_HikerAnthony2After, MSGBOX_AUTOCLOSE
	end

Route33_EventScript_Lass::
	lock
	faceplayer
	msgbox Route33_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

Route33_Text_HikerAnthony2Seen:
	.string "Ich bin durch den\n"
	.string "Tunnel gegangen, aber ich habe noch\p"
	.string "viel Energie übrig.$"

Route33_Text_HikerAnthony2Beaten:
	.string "Wow! Du hast mehr Mumm als ich!$"

Route33_Text_HikerAnthony2After:
	.string "In den Bergen sind\n"
	.string "wir WANDERER in unserem Element.$"

Route33_Text_HikerAnthonyDunsparce:
	.string "Heh, hast du ein DUMMISEL?\p"
	.string "Ich habe eines.\p"
	.string "Sieh es dir im Licht an. Es hat\p"
	.string "ein lustiges Gesicht!$"

Route33_Text_Lass:
	.string "Hechel, keuch…\p"
	.string "Endlich habe ich\n"
	.string "es durch diese Höhle geschafft!\p"
	.string "Sie war größer, als ich annahm.\p"
	.string "Ich war zu erschöpft, um alles\p"
	.string "zu erkunden, also habe ich sie\p"
	.string "verlassen.$"

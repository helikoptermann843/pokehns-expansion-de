PewterCity_Museum_2F_hns_MapScripts::
	.byte 0


PewterCity_Museum_2F_EventScript_Nerd::
	msgbox PewterCity_Museum_2F_Text_Nerd, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_Daughter::
	lock
	msgbox PewterCity_Museum_2F_Text_AskedDaddyToCatchPikachu, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_EventScript_Dad::
	lock
	msgbox PewterCity_Museum_2F_Text_PikachuSoonIPromise, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_EventScript_Meteor::
	msgbox PewterCity_Museum_2F_Text_MeteoriteThatFellOnMtMoon, MSGBOX_SIGN
	end

PewterCity_Museum_2F_Text_Nerd:
	.string "Man sagt, dass Meteoriten auf\n"
	.string "die ENTSTEHUNGSINSEL fielen.\p"
	.string "Wir würden sie gern hier im\n"
	.string "Museum ausstellen, aber...\p"
	.string "Diese Meteoriten sollen seltsame\n"
	.string "Energie ausstrahlen und lassen\l"
	.string "sich nicht wegtragen...$"

PewterCity_Museum_2F_Text_AskedDaddyToCatchPikachu::
	.string "Ich will ein Pikachu!\n"
	.string "Es ist sooo niedlich!\p"
	.string "Ich habe Papa gebeten, mir\n"
	.string "eines zu fangen!$"

PewterCity_Museum_2F_Text_PikachuSoonIPromise::
	.string "Ja, bald ein Pikachu,\n"
	.string "das verspreche ich!$"

PewterCity_Museum_2F_Text_SpaceShuttle::
	.string "Raumfähre$"

PewterCity_Museum_2F_Text_MeteoriteThatFellOnMtMoon::
	.string "Ein Meteorit, der auf den\n"
	.string "MONDBERG fiel.\p"
	.string "Man glaubt, es sei ein\n"
	.string "Mondstein.$"

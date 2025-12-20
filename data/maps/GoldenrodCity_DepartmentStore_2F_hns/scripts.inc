GoldenrodCity_DepartmentStore_2F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodDeptElevator_OnFrame
	.byte 0

GoldenrodDeptStore2_EventScript_Youngster::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_2FYoungster, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore2_EventScript_CooltrainerF::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_2FCooltrainerF, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore2_EventScript_Gent::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_2FGentleman, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore2_EventScript_Sign::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_2FDirectory, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore_Text_2FYoungster:
	.string "Der COM kann\n"
	.string "bis zu zehn Nummern speichern.\p"
	.string "Es ist schwer zu\n"
	.string "entscheiden, welche Nummer man\l"
	.string "behalten soll.$"

GoldenrodDeptStore_Text_2FCooltrainerF:
	.string "Ich habe mein ABRA in der SPIELHALLE\p"
	.string "gewonnen. Jetzt ist es mein bester\p"
	.string "Partner.$"

GoldenrodDeptStore_Text_2FGentleman:
	.string "Dieses KAUFHAUS zeigt mir, dass\p"
	.string "DUKATIA CITY eine\n"
	.string "sehr große Stadt ist.\p"
	.string "Dieses Angebot ist unübertrefflich!$"

GoldenrodDeptStore_Text_2FDirectory:
	.string "Ihr Reisebegleiter\p"
	.string "1S TRAINERMARKT$"

LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

@	.align 2
@LilycoveCity_DepartmentStore_2F_Pokemart1:
@	.2byte ITEM_POKE_BALL
@	.2byte ITEM_GREAT_BALL
@	.2byte ITEM_ULTRA_BALL
@	.2byte ITEM_ESCAPE_ROPE
@	.2byte ITEM_FULL_HEAL
@	.2byte ITEM_ANTIDOTE
@	.2byte ITEM_PARALYZE_HEAL
@	.2byte ITEM_BURN_HEAL
@	.2byte ITEM_ICE_HEAL
@	.2byte ITEM_AWAKENING
@	.2byte ITEM_FLUFFY_TAIL
@	pokemartlistend


GoldenrodCity_FlowerShop_hns_MapScripts::
	.byte 0

GoldenrodCity_FlowerShop_EventScript_Owner::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SUDOWOODO, GoldenrodCity_FlowerShop_EventScript_Normal
	goto_if_set FLAG_RECEIVED_SQUIRTBOTTLE, GoldenrodCity_FlowerShop_EventScript_GotSquirtBottle
	goto_if_set FLAG_BADGE03_GET, GoldenrodCity_FlowerShop_EventScript_GiveSquirtBottle
	msgbox GoldenrodCity_FlowerShop_Text_Owner1, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_FlowerShop_EventScript_GiveSquirtBottle::
	lock
	faceplayer
	msgbox GoldenrodCity_FlowerShop_Text_Owner2, MSGBOX_DEFAULT
	giveitem ITEM_SQUIRT_BOTTLE
	setflag FLAG_RECEIVED_SQUIRTBOTTLE
	closemessage
	release
	end

GoldenrodCity_FlowerShop_EventScript_GotSquirtBottle::
	lock
	faceplayer
	msgbox GoldenrodCity_FlowerShop_Text_Owner3, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_FlowerShop_EventScript_Normal::
	lock
	faceplayer
	msgbox GoldenrodCity_FlowerShop_Text_Owner4, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_FlowerShop_EventScript_Floria1::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SUDOWOODO, GoldenrodCity_FlowerShop_EventScript_Floria3
	goto_if_set FLAG_BADGE03_GET, GoldenrodCity_FlowerShop_EventScript_Floria2
	msgbox GoldenrodCity_FlowerShop_Text_Floria, MSGBOX_DEFAULT
	closemessage
	release
	end
	
GoldenrodCity_FlowerShop_EventScript_Floria2::
	msgbox GoldenrodCity_FlowerShop_Text_FloriaYouBeatWhitney, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_FlowerShop_EventScript_RandomBerryGirl::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, GoldenrodCity_FlowerShop_EventScript_AlreadyReceivedBerry
	msgbox GoldenrodCity_FlowerShop_Text_ImGrowingFlowers, MSGBOX_DEFAULT
	random 8
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
	msgbox GoldenrodCity_FlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_FlowerShop_EventScript_AlreadyReceivedBerry::
	msgbox GoldenrodCity_FlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
	release
	end


GoldenrodCity_FlowerShop_EventScript_Floria3::
	msgbox GoldenrodCity_FlowerShop_Text_FloriaItWasAMon, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_FlowerShop_EventScript_MintOwner::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE04_GET, GoldenrodCity_FlowerShop_EventScript_NoSellMints
	msgbox GoldenrodCity_FlowerShop_Text_Mints1, MSGBOX_DEFAULT
	waitmessage
	pokemart GoldenrodCity_FlowerShop_MintShop
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_FlowerShop_Text_Mints1:
	.string "Wesen MINZE wieder im Angebot!$"

GoldenrodCity_FlowerShop_Text_Mints2:
	.string "Hallo, lieber Trainer. Wenn du\l"
	.string "WESEN-MINZEN kaufen willst, hättest\n"
	.string "du früher kommen sollen. Ich habe\p"
	.string "die letzte gerade verkauft.\n"
	.string "Komm später wieder.$"

	.align 2
GoldenrodCity_FlowerShop_MintShop:
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_BRAVE_MINT
	.2byte ITEM_CALM_MINT
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_GENTLE_MINT
	.2byte ITEM_HASTY_MINT
	.2byte ITEM_IMPISH_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_LAX_MINT
	.2byte ITEM_LONELY_MINT
	.2byte ITEM_MILD_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_RASH_MINT
	.2byte ITEM_RELAXED_MINT
	.2byte ITEM_SASSY_MINT
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_NONE
	release
	end

GoldenrodCity_FlowerShop_EventScript_NoSellMints::
	msgbox GoldenrodCity_FlowerShop_Text_Mints2, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_FlowerShop_Text_ImGrowingFlowers:
	.string "Ich will wie meine großen\n"
	.string "Schwestern sein.\p"
	.string "Ich züchte auch Blumen!\p"
	.string "Hier, für dich!$"

GoldenrodCity_FlowerShop_Text_MachineMixesBerries:
	.string "Ein Pokémon kann eine Beere essen\n"
	.string "und sich heilen, oder man lässt\n"
	.string "ein Pokémon sie halten.\p"
	.string "In einer weit entfernten Region, die\l"
	.string "ich besuchte, gab es eine\n"
	.string "Maschine, die Beeren mischt und\p"
	.string "Bonbons für Pokémon herstellt.\p"
	.string "Ich will auch Bonbons.$"

GoldenrodCity_FlowerShop_Text_Floria:
	.string "Als ich meiner Schwester vom\n"
	.string "wackeligen Baum erzählte, sagte\n"
	.string "sie, das sei gefährlich.\p"
	.string "Wenn ich Bianka besiege, leiht\n"
	.string "sie mir vielleicht ihre\l"
	.string "Gießkanne…$"

GoldenrodCity_FlowerShop_Text_Owner1:
	.string "Anscheinend gibt es einen seltsamen\n"
	.string "Baum auf Route 36.\p"
	.string "Er soll tanzen, wenn man ihn\n"
	.string "gießt…\p"
	.string "Natürlich nicht!\p"
	.string "Dies ist ein Blumenladen, wir\n"
	.string "haben Gießkannen…\p"
	.string "Aber du darfst keine haben!\n"
	.string "Zu gefährlich!\p"
	.string "Vielleicht, wenn du Arena Leiter\n"
	.string "Bianka besiegst, ist es okay.$"

GoldenrodCity_FlowerShop_Text_Owner2:
	.string "Anscheinend gibt es einen seltsamen\n"
	.string "Baum auf Route 36.\p"
	.string "Er soll tanzen, wenn man ihn gießt…\p"
	.string "Oh, das ist ein Normalorden von\n"
	.string "der GOLDENROD Arena!\p"
	.string "Hast du Bianka besiegt?!\p"
	.string "Dann ist alles in Ordnung.\p"
	.string "Ich gebe dir kurz diese\n"
	.string "SCHIGGYKANNE.\l"
	.string "…\p"
	.string "Ach, egal. Behalte sie!$"

GoldenrodCity_FlowerShop_Text_Owner3:
	.string "Der seltsame Baum steht auf Route 36.\n"
	.string "Bitte sei vorsichtig!$"

GoldenrodCity_FlowerShop_Text_Owner4:
	.string "Lalala lalalala. Trinke viel\n"
	.string "Wasser, meine Liebe!$"

GoldenrodCity_FlowerShop_Text_FloriaYouBeatWhitney:
	.string "Wow, du hast Bianka besiegt? Super!$"

GoldenrodCity_FlowerShop_Text_FloriaItWasAMon:
	.string "Also war es wirklich ein Pokémon!$"

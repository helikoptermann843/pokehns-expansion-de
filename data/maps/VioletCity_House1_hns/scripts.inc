VioletCity_House1_hns_MapScripts::
	.byte 0

VioletCity_House1_EventScript_Kyle::
	lock
	faceplayer
	msgbox VioletCity_House1_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_House1_EventScript_Rudy::
	lock
	faceplayer
	goto_if_set FLAG_VIOLET_NPC_TRADE_COMPLETED, VioletCity_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_ONIX
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox VioletCity_House1_Text_YouWillTradeWontYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VioletCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, VioletCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, VioletCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox VioletCity_House1_Text_MonYouTakeCare, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_VIOLET_NPC_TRADE_COMPLETED
	release
	end

VioletCity_House1_EventScript_DeclineTrade::
	msgbox VioletCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

VioletCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox VioletCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

VioletCity_House1_EventScript_TradeCompleted::
	msgbox VioletCity_House1_Text_After, MSGBOX_DEFAULT
	release
	end

VioletCity_House1_Text_YouWillTradeWontYou:
	.string "Ich sammle Pokémon!\n"
	.string "Hast du ein {STR_VAR_1}?\p"
	.string "Willst du es gegen mein\n"
	.string "{STR_VAR_2} tauschen?$"

VioletCity_House1_Text_MonYouTakeCare:
	.string "Juhu! Ich habe {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, mach es gut!$"

VioletCity_House1_Text_ThisIsntAMon:
	.string "Äh, nein, glaube ich nicht.\n"
	.string "Das ist kein {STR_VAR_1}.$"

VioletCity_House1_Text_YouWontTradeMe:
	.string "Du willst nicht tauschen? Oh…$"

VioletCity_House1_Text_After:
	.string "Hi, wie geht es meinem alten\n"
	.string "Onix?$"

VioletCity_House1_Text_PokefanM:
	.string "Ein Pokémon, das\n"
	.string "du durch Tausch erhalten hast, wird\n"
	.string "schneller wachsen.\p"
	.string "Aber wenn du nicht\n"
	.string "im Besitz des passenden ORDENs\p"
	.string "bist, gehorchen\n"
	.string "sie dir vielleicht nicht.$"

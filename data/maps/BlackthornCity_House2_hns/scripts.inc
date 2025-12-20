BlackthornCity_House2_hns_MapScripts::
	.byte 0

BlackthornCity_House2_EventScript_Emy::
	lock
	faceplayer
	goto_if_set FLAG_BLACKTHORN_NPC_TRADE_COMPLETED, BlackthornCity_House2_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_MR_MIME
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox BlackthornCity_House2_Text_YouWillTradeWontYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BlackthornCity_House2_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BlackthornCity_House2_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, BlackthornCity_House2_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox BlackthornCity_House2_Text_MonYouTakeCare, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_BLACKTHORN_NPC_TRADE_COMPLETED
	releaseall
	end

BlackthornCity_House2_EventScript_DeclineTrade::
	msgbox BlackthornCity_House2_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

BlackthornCity_House2_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox BlackthornCity_House2_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

BlackthornCity_House2_EventScript_TradeCompleted::
	msgbox BlackthornCity_House2_Text_After, MSGBOX_DEFAULT
	release
	end

BlackthornCity_House2_Text_YouWillTradeWontYou:
	.string "Ich sammle Pokémon!\n"
	.string "Hast du ein {STR_VAR_1}?\p"
	.string "Willst du es gegen mein\n"
	.string "{STR_VAR_2} tauschen?$"

BlackthornCity_House2_Text_MonYouTakeCare:
	.string "Juhu! Ich habe jetzt {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, gib gut Acht!$"

BlackthornCity_House2_Text_ThisIsntAMon:
	.string "Äh, nein, ich glaube nicht.\n"
	.string "Das ist kein {STR_VAR_1}.$"

BlackthornCity_House2_Text_YouWontTradeMe:
	.string "Du willst nicht tauschen? Oh...$"

BlackthornCity_House2_Text_After:
	.string "Hi, wie geht es meinem alten Pantimos?$"

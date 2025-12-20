BattleFrontier_ExchangeServiceCorner_hns_MapScripts::
	.byte 0

BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	return

BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize::
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor::
	checkdecorspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	adddecoration VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	end

BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_PCIsFull, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleFrontier_ExchangeServiceCorner_EventScript_BagFull::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk1::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll
	case 10, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmKissPoster, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, DECOR_KISS_POSTER
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmKissCushion, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 32
	setvar VAR_0x8009, DECOR_KISS_CUSHION
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmSmoochumDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 32
	setvar VAR_0x8009, DECOR_SMOOCHUM_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmTogepiDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, DECOR_TOGEPI_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmMeowthDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, DECOR_MEOWTH_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmClefairyDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, DECOR_CLEFAIRY_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmDittoDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, DECOR_DITTO_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmCyndaquilDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 80
	setvar VAR_0x8009, DECOR_CYNDAQUIL_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmChikoritaDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 80
	setvar VAR_0x8009, DECOR_CHIKORITA_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmTotodileDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	setvar VAR_0x8008, 80
	setvar VAR_0x8009, DECOR_TOTODILE_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk2::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmLaprasDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 128
	setvar VAR_0x8009, DECOR_LAPRAS_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmSnorlaxDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 128
	setvar VAR_0x8009, DECOR_SNORLAX_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmVenusaurDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 256
	setvar VAR_0x8009, DECOR_VENUSAUR_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmCharizardDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 256
	setvar VAR_0x8009, DECOR_CHARIZARD_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmBlastoiseDoll, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	setvar VAR_0x8008, 256
	setvar VAR_0x8009, DECOR_BLASTOISE_DOLL
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_VitaminClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_EonTicket
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_MysticTicket
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_AuroraTicket
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_OldMap
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_Brace
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_Upgrade
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleFrontier_ExchangeServiceCorner_EventScript_YouAlreadyHaveThis::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_YouAlreadyHaveThis, MSGBOX_DEFAULT
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_EonTicket::
	checkitem ITEM_EON_TICKET, 1
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_ExchangeServiceCorner_EventScript_YouAlreadyHaveThis
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmEonTicket, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_EON_TICKET
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_MysticTicket::
	checkitem ITEM_MYSTIC_TICKET, 1
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_ExchangeServiceCorner_EventScript_YouAlreadyHaveThis
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmMysticTicket, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 96
	setvar VAR_0x8009, ITEM_MYSTIC_TICKET
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_AuroraTicket::
	checkitem ITEM_AURORA_TICKET, 1
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_ExchangeServiceCorner_EventScript_YouAlreadyHaveThis
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmAuroraTicket, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 96
	setvar VAR_0x8009, ITEM_AURORA_TICKET
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_OldMap::
	checkitem ITEM_OLD_SEA_MAP, 1
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_ExchangeServiceCorner_EventScript_YouAlreadyHaveThis
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmOldMap, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 96
	setvar VAR_0x8009, ITEM_OLD_SEA_MAP
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Brace::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmBrace, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 4
	setvar VAR_0x8009, ITEM_MACHO_BRACE
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Upgrade::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmUpgrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	setvar VAR_0x8008, 16
	setvar VAR_0x8009, ITEM_UP_GRADE
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_HoldItemClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_QuickClaw
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_Brightpowder
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_KingsRock
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_FocusBand
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ScopeLens
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmLeftovers, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_LEFTOVERS
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmWhiteHerb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_WHITE_HERB
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_QuickClaw::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmQuickClaw, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_QUICK_CLAW
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmMentalHerb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 48
	setvar VAR_0x8009, ITEM_MENTAL_HERB
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Brightpowder::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmBrightpowder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_BRIGHT_POWDER
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmChoiceBand, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_CHOICE_BAND
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_KingsRock::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmKingsRock, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_KINGS_ROCK
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_FocusBand::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmFocusBand, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_FOCUS_BAND
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ScopeLens::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmScopeLens, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	setvar VAR_0x8008, 64
	setvar VAR_0x8009, ITEM_SCOPE_LENS
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Man::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Sailor::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_EventScript_PokefanF::
	lock
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_RichBoy::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Girl::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_EventScript_OldWTMan::
	msgbox BattleFrontier_ExchangeServiceCorner_EventScript_OldWTMan_Text, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_Text_YouAlreadyHaveThis:
	.string "You already have this item.$"

BattleFrontier_ExchangeServiceCorner_EventScript_OldWTMan_Text:
	.string "Hi! If you are looking for the\n"
	.string "WONDERTRADE, they're now located in\l"
	.string "every POKéMON CENTER. Have fun!$"

BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize:
	.string "Hallo, dies ist die TAUSCHECKE.\p"
	.string "Wir tauschen deine Gewinnpunkte gegen\n"
	.string "großartige Preise ein.\p"
	.string "Bitte such dir einen Preis von dieser\n"
	.string "Liste aus.$"

@ Unused
BattleFrontier_ExchangeServiceCorner_Text_PleaseChoosePrize:
	.string "Please choose a prize from this list.$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmKissPoster:
	.string "Du möchtest das KUSS-POSTER\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmKissCushion:
	.string "Du möchtest das KUSS-KISSEN\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmSmoochumDoll:
	.string "Du möchtest die KUSSILLA-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmTogepiDoll:
	.string "Du möchtest die TOGEPI-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmMeowthDoll:
	.string "Du möchtest die MAUZI-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmClefairyDoll:
	.string "Du möchtest die PIEPI-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmDittoDoll:
	.string "Du möchtest die DITTO-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmCyndaquilDoll:
	.string "Du möchtest die FEURIGEL-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmChikoritaDoll:
	.string "Du möchtest die ENDIVIE-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmTotodileDoll:
	.string "Du möchtest die KARNIMANI-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmLaprasDoll:
	.string "Du möchtest die LAPRAS-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmSnorlaxDoll:
	.string "Du möchtest die RELAXO-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmVenusaurDoll:
	.string "Du möchtest die BISAFLOR-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmCharizardDoll:
	.string "Du möchtest die GLURAK-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmBlastoiseDoll:
	.string "Du möchtest die TURTOK-PUPPE\n"
	.string "haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmEonTicket:
	.string "You've chosen the EON TICKET.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmMysticTicket:
	.string "You've chosen the MYSTIC\n"
	.string "TICKET. Is that correct?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmAuroraTicket:
	.string "You've chosen the AURORA\n"
	.string "TICKET Is that correct?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmOldMap:
	.string "You've chosen the OLD MAP.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmBrace:
	.string "You've chosen the MACHO\n"
	.string "BRACE. Is that correct?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmUpgrade:
	.string "You've chosen the UP GRADE.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmBrightpowder:
	.string "Du möchtest das BLENDPUDER haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmWhiteHerb:
	.string "Du möchtest das SCHLOHKRAUT haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmQuickClaw:
	.string "Du möchtest die FLINKKLAUE haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmMentalHerb:
	.string "Du möchtest das MENTALKRAUT haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmChoiceBand:
	.string "Du möchtest das WAHLBAND haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmKingsRock:
	.string "Du möchtest den KING-STEIN haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmFocusBand:
	.string "Du möchtest das FOKUS-BAND haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmScopeLens:
	.string "Du möchtest die SCOPE-LINSE haben?$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmLeftovers:
	.string "Du möchtest die ÜBERRESTE haben?$"

BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC:
	.string "Danke! Wir senden das auf deinen PC.$"

BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize:
	.string "Bitte, hier ist dein Preis.$"

BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints:
	.string "Es tut mir sehr Leid… Aber\n"
	.string "du hast nicht genug Gewinnpunkte…$"

BattleFrontier_ExchangeServiceCorner_Text_PCIsFull:
	.string "Es tut mir sehr Leid…\n"
	.string "Aber dein PC ist voll…$"

BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt:
	.string "Es tut mir sehr Leid…\n"
	.string "Aber du hast keinen Platz dafür…$"

BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints:
	.string "Vielen Dank.\p"
	.string "Bitte komm wieder, wenn du \n"
	.string "dich entschieden hast.$"

BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls:
	.string "Oh, die sind so hübsch.\n"
	.string "Die hätte ich auch gerne!\l"
	.string "Niedliche Kissen!\l"
	.string "Große, fluffige PUPPEn!\l"
	.string "Kleine, fluffige PUPPEn!\l"
	.string "Ich würde sie am liebsten alle nehmen!$"

BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant:
	.string "Überlass das deiner Mami!\p"
	.string "Möchtest du irgendetwas haben, werde\n"
	.string "ich alles tun, damit du es bekommst.$"

BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher:
	.string "Hätte ich nur eines dieser Items hier,\n"
	.string "würden meine POKéMON viel stärker!\p"
	.string "Mit Sicherheit! Darauf kannst du\n"
	.string "wetten! Das steht fest!$"

BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll:
	.string "Häh? Was glotzt du denn so doof?\p"
	.string "Ich mag es nicht, wie du meine\n"
	.string "Plüschpuppe anstarrst!\p"
	.string "Wenn du auch so eine haben willst,\n"
	.string "besorg dir eine! Nicht wahr, KUSSILLA?$"

BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord:
	.string "Weißt du was?\n"
	.string "Wenn du deine Ergebnisse hier in den\p"
	.string "KAMPF-Einrichtungen stetig\n"
	.string "verbesserst, geben sie dir mehr\l"
	.string "Gewinnpunkte.$"

BattleFrontier_ExchangeServiceCorner_Text_KissPosterDesc::
	.string "A large poster with a SMOOCHUM print.$"

BattleFrontier_ExchangeServiceCorner_Text_KissCushionDesc::
	.string "A SMOOCHUM cushion.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_SmoochumDollDesc::
	.string "A SMOOCHUM DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_TogepiDollDesc::
	.string "A TOGEPI DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_MeowthDollDesc::
	.string "A MEOWTH DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_ClefairyDollDesc::
	.string "A CLEFAIRY DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_DittoDollDesc::
	.string "A DITTO DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_CyndaquilDollDesc::
	.string "A CYNDAQUIL DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_ChikoritaDollDesc::
	.string "A CHIKORITA DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_TotodileDollDesc::
	.string "A TOTODILE DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc::
	.string "A large DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_ProteinDesc::
	.string "Raises the stat ATTACK of one\n"
	.string "POKéMON.$"

BattleFrontier_ExchangeServiceCorner_Text_CalciumDesc::
	.string "Raises the stat SP. ATK of one\n"
	.string "POKéMON.$"

BattleFrontier_ExchangeServiceCorner_Text_IronDesc::
	.string "Raises the stat DEFENSE of one\n"
	.string "POKéMON.$"

BattleFrontier_ExchangeServiceCorner_Text_ZincDesc::
	.string "Raises the stat SP. DEF of one\n"
	.string "POKéMON.$"

BattleFrontier_ExchangeServiceCorner_Text_CarbosDesc::
	.string "Raises the stat SPEED of one\n"
	.string "POKéMON.$"

BattleFrontier_ExchangeServiceCorner_Text_HPUpDesc::
	.string "Raises the HP of one POKéMON.$"

BattleFrontier_ExchangeServiceCorner_Text_LeftoversDesc::
	.string "A hold item that gradually restores\n"
	.string "HP in battle.$"

BattleFrontier_ExchangeServiceCorner_Text_WhiteHerbDesc::
	.string "A hold item that restores any\n"
	.string "lowered stat.$"

BattleFrontier_ExchangeServiceCorner_Text_QuickClawDesc::
	.string "A hold item that occasionally allows\n"
	.string "the first strike.$"

BattleFrontier_ExchangeServiceCorner_Text_MentalHerbDesc::
	.string "A hold item that snaps POKéMON out\n"
	.string "of infatuation.$"

BattleFrontier_ExchangeServiceCorner_Text_BrightpowderDesc::
	.string "A hold item that casts a glare to\n"
	.string "reduce accuracy.$"

BattleFrontier_ExchangeServiceCorner_Text_ChoiceBandDesc::
	.string "Raises a move's power, but permits\n"
	.string "only that move.$"

BattleFrontier_ExchangeServiceCorner_Text_KingsRockDesc::
	.string "A hold item that may cause flinching\n"
	.string "when the foe is hit.$"

BattleFrontier_ExchangeServiceCorner_Text_FocusBandDesc::
	.string "A hold item that occasionally\n"
	.string "prevents fainting.$"

BattleFrontier_ExchangeServiceCorner_Text_ScopeLensDesc::
	.string "A hold item that raises the\n"
	.string "critical-hit rate.$"

@ EventScript_DoWonderTrade::
@ 	goto_if_set FLAG_UNLIMITED_WONDERTRADE, EventScript_DoWonderTradeStartNoLimit
@ 	goto_if_unset FLAG_WONDERTRADE_FIRSTIME, EventScript_FirstTimeWonderRandomizer
@ 	special CheckIfRandomizerIsActive
@ 	goto_if_unset FLAG_WT_ENABLED_RANDOMIZER, EventScript_DoWonderTradeStart
@ 	special CheckIfChallengesAreActive
@ 	goto_if_set FLAG_WONDERTRADE3, EventScript_NoMoreForToday
@ 	goto_if_set FLAG_NO_WT_BECAUSE_CHALLENGE, EventScript_WTChallenges
@ 	goto_if_unset FLAG_WONDERTRADE1, EventScript_DoWonderTradeFirstTrade	
@ 	goto_if_unset FLAG_WONDERTRADE2, EventScript_DoWonderTradeSecondTrade
@ 	goto_if_unset FLAG_WONDERTRADE3, EventScript_DoWonderTradeThirdTrade
@ 	end

@ EventScript_DoWonderTradeStart:
@ 	goto_if_unset FLAG_BADGE05_GET, EventScript_WTNotActiveYet
@ 	msgbox EventScript_DoWonderTrade_Text_Welcome, MSGBOX_DEFAULT
@ 	closemessage
@ 	special CheckIfChallengesAreActive
@ 	goto_if_set FLAG_WONDERTRADE3, EventScript_NoMoreForToday
@ 	goto_if_set FLAG_NO_WT_BECAUSE_CHALLENGE, EventScript_WTChallenges
@ 	goto_if_unset FLAG_WONDERTRADE1, EventScript_DoWonderTradeFirstTrade	
@ 	goto_if_unset FLAG_WONDERTRADE2, EventScript_DoWonderTradeSecondTrade
@ 	goto_if_unset FLAG_WONDERTRADE3, EventScript_DoWonderTradeThirdTrade
@ 	end

@ EventScript_WTChallenges::
@ 	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_WTChallengesCancel
@ 	goto_if_unset FLAG_WONDERTRADE1, EventScript_DoWonderTradeFirstTrade	
@ 	goto_if_unset FLAG_WONDERTRADE2, EventScript_DoWonderTradeSecondTrade
@ 	goto_if_unset FLAG_WONDERTRADE3, EventScript_DoWonderTradeThirdTrade
@ 	end

@ EventScript_WTChallengesCancel::
@ 	msgbox EventScript_DoWonderTrade_Text_Challenges, MSGBOX_DEFAULT
@ 	closemessage
@ 	end

@ EventScript_WTNotActiveYet::
@ 	msgbox EventScript_DoWonderTrade_Text_FiveBadges, MSGBOX_DEFAULT
@ 	closemessage
@ 	end

@ EventScript_DoWonderTradeFirstTrade::
@ 	setflag FLAG_WONDERTRADE1
@ 	call Common_EventScript_SaveGame
@ 	goto_if_eq VAR_RESULT, 0, EventScript_DoWonderTradeCancelSaveFirstTrade
@ 	special ChoosePartyMon
@ 	waitstate
@ 	goto EventScript_DoWonderTradeTrade

@ EventScript_DoWonderTradeCancelSaveFirstTrade::
@ 	clearflag FLAG_WONDERTRADE1
@ 	msgbox EventScript_DoWonderTrade_Text_Done, MSGBOX_DEFAULT
@ 	closemessage
@ 	end

@ EventScript_DoWonderTradeSecondTrade::
@ 	setflag FLAG_WONDERTRADE2
@ 	call Common_EventScript_SaveGame
@ 	goto_if_eq VAR_RESULT, 0, EventScript_DoWonderTradeCancelSaveSecondTrade
@ 	special ChoosePartyMon
@ 	waitstate
@ 	goto EventScript_DoWonderTradeTrade

@ EventScript_DoWonderTradeCancelSaveSecondTrade::
@ 	clearflag FLAG_WONDERTRADE2
@ 	msgbox EventScript_DoWonderTrade_Text_Done, MSGBOX_DEFAULT
@ 	closemessage
@ 	end

@ EventScript_DoWonderTradeThirdTrade::
@ 	setflag FLAG_WONDERTRADE3
@ 	call Common_EventScript_SaveGame
@ 	goto_if_eq VAR_RESULT, 0, EventScript_DoWonderTradeCancelSaveThirdTrade
@ 	special ChoosePartyMon
@ 	waitstate
@ 	goto EventScript_DoWonderTradeTrade

@ EventScript_DoWonderTradeCancelSaveThirdTrade::
@ 	clearflag FLAG_WONDERTRADE3
@ 	msgbox EventScript_DoWonderTrade_Text_Done, MSGBOX_DEFAULT
@ 	closemessage
@ 	end

@ EventScript_DoWonderTradeStartNoLimit::
@ 	goto_if_unset FLAG_WONDERTRADE_FIRSTIME, EventScript_FirstTimeWonderUnlimited
@ 	goto_if_unset FLAG_BADGE05_GET, EventScript_WTNotActiveYet
@ 	special CheckIfChallengesAreActive
@ 	goto_if_set FLAG_NO_WT_BECAUSE_CHALLENGE, EventScript_WTChallengesUnlimited
@ 	call Common_EventScript_SaveGame
@ 	goto_if_eq VAR_RESULT, 0, EventScript_DoWonderTradeCancelSaveThirdTrade
@ 	special ChoosePartyMon
@ 	waitstate
@ 	goto EventScript_DoWonderTradeTrade

@ EventScript_WTChallengesUnlimited::
@ 	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_WTChallengesCancel
@ 	return

@ EventScript_DoWonderTradeTrade::
@ 	compare VAR_0x8004, PARTY_SIZE
@ 	goto_if_ge EventScript_End
@ 	copyvar VAR_0x8005, VAR_0x8004
@ 	special CreateWonderTradePokemon
@ 	special DoInGameTradeScene
@ 	waitstate
@ 	special ForceSaveGame
@ 	waitstate
@ 	msgbox EventScript_DoWonderTrade_Text_Done, MSGBOX_DEFAULT
@ 	closemessage
@ 	end

@ EventScript_NoMoreForToday::
@ 	msgbox EventScript_NoMoreForToday_Text, MSGBOX_DEFAULT
@ 	closemessage
@ 	end

@ EventScript_FirstTimeWonderRandomizer::
@ 	msgbox EventScript_FirstTimeWonder_Text, MSGBOX_DEFAULT
@ 	setflag FLAG_WONDERTRADE_FIRSTIME
@ 	closemessage
@ 	end

@ EventScript_FirstTimeWonderUnlimited::
@ 	msgbox EventScript_FirstTimeWonder_Text_Unlimited, MSGBOX_DEFAULT
@ 	setflag FLAG_WONDERTRADE_FIRSTIME
@ 	closemessage
@ 	end

@ EventScript_End::
@ 	end

@ EventScript_DoWonderTrade_Text_Welcome:
@ 	.string "Welcome to the WONDERTRADE\n"
@ 	.string "STATION of the POKéCENTER!\p"
@ 	.string "Please select the POKéMON that\n"
@ 	.string "is going to get WONDERTRADED.$"

@ EventScript_NoMoreForToday_Text:
@ 	.string "Oh! Seems that you have\n"
@ 	.string "used all 3 DAILY TRADES.\p"
@ 	.string "Come back tomorrow!$"

@ EventScript_FirstTimeWonder_Text:
@ 	.string "Hello trainer!\p"
@ 	.string "Oh, is this your first time\n"
@ 	.string "using the WONDERTRADE SYSTEM?\p"
@ 	.string "WONDERTRADE is a techonology developed\n"
@ 	.string "by DEVON CORP. to TRADE anonimously.\p"
@ 	.string "You basically send a selected\n"
@ 	.string "POKéMON to someone, and they send\p"
@ 	.string "you another one in exchange.\n"
@ 	.string "Neither you nor the other trainer\p"
@ 	.string "know which POKéMON is going to\n"
@ 	.string "show up. And that is the fun of\p"
@ 	.string "WONDERTRADE! Oh, also, to not\n"
@ 	.string "overload the server, there is a\p"
@ 	.string "maximum of 3 DAILY WONDERTRADES.\p"
@ 	.string "We hope you have a great\n"
@ 	.string "WONDERTRADE experience!$"

@ EventScript_FirstTimeWonder_Text_Unlimited:
@ 	.string "Hello trainer!\p"
@ 	.string "Oh, is this your first time\n"
@ 	.string "using the WONDERTRADE SYSTEM?\p"
@ 	.string "WONDERTRADE is a techonology developed\n"
@ 	.string "by DEVON CORP. to TRADE anonimously.\p"
@ 	.string "You basically send a selected\n"
@ 	.string "POKéMON to someone, and they send\p"
@ 	.string "you another one in exchange.\n"
@ 	.string "Neither you nor the other trainer\p"
@ 	.string "know which POKéMON is going to\n"
@ 	.string "show up. And that is the fun of\l"
@ 	.string "WONDERTRADE!\p"
@ 	.string "We hope you have a great\n"
@ 	.string "WONDERTRADE experience!$"

@ EventScript_DoWonderTrade_Text_Done:
@ 	.string "We hope you had a good\n"
@ 	.string "WONDERTRADE!$"

@ EventScript_DoWonderTrade_Text_Challenges:
@ 	.string "Looks like you have challenges\n"
@ 	.string "activated. Please come back\l"
@ 	.string "again after the POKéMON LEAGUE.$"

@ EventScript_DoWonderTrade_Text_FiveBadges:
@ 	.string "Sadly, the WONDERTRADE SYSTEM is\n"
@ 	.string "not active yet. Please do come\l"
@ 	.string "back later.$"

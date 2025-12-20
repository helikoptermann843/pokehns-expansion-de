#include "global.h"
#include "strings.h"
#include "battle_pyramid_bag.h"
#include "item_menu.h"

ALIGNED(4)
const u8 gText_ExpandedPlaceholder_Empty[] = _("");
const u8 gText_ExpandedPlaceholder_Kun[] = _("");
const u8 gText_ExpandedPlaceholder_Chan[] = _("");
const u8 gText_ExpandedPlaceholder_Sapphire[] = _("SAPPHIRE");
const u8 gText_ExpandedPlaceholder_Ruby[] = _("RUBY");
const u8 gText_ExpandedPlaceholder_Emerald[] = _("SMARAGD");
const u8 gText_ExpandedPlaceholder_Aqua[] = _("AQUA");
const u8 gText_ExpandedPlaceholder_Magma[] = _("MAGMA");
const u8 gText_ExpandedPlaceholder_Archie[] = _("ADRIAN");
const u8 gText_ExpandedPlaceholder_Maxie[] = _("MARC");
const u8 gText_ExpandedPlaceholder_Kyogre[] = _("KYOGRE");
const u8 gText_ExpandedPlaceholder_Groudon[] = _("GROUDON");
const u8 gText_ExpandedPlaceholder_Brendan[] = _("BRIX");
const u8 gText_ExpandedPlaceholder_May[] = _("MAIKE");
const u8 gText_EggNickname[POKEMON_NAME_LENGTH + 1] = _("EGG");
const u8 gText_Pokemon[POKEMON_NAME_LENGTH + 1] = _("POKéMON");
const u8 gText_Player[] = _("PLAYER"); // Unused
const u8 gText_Pokedex[] = _("POKéDEX"); // Unused
const u8 gText_Time[] = _("SPIELZEIT");
const u8 gText_Badges[] = _("BADGES"); // Unused
const u8 gText_AButton[] = _("A Button"); // Unused
const u8 gText_BButton[] = _("B Button"); // Unused
const u8 gText_RButton[] = _("R Button"); // Unused
const u8 gText_LButton[] = _("L Button"); // Unused
const u8 gText_Start[] = _("START"); // Unused
const u8 gText_Select[] = _("SELECT"); // Unused
const u8 gText_ControlPad[] = _("+ Control Pad"); // Unused
const u8 gText_LButtonRButton[] = _("L Button  R Button"); // Unused
const u8 gText_Controls[] = _("CONTROLS"); // Unused
ALIGNED(4) const u8 gText_PickOk[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}OK"); // Unused
ALIGNED(4) const u8 gText_Next[] = _("{A_BUTTON}NEXT"); // Unused
ALIGNED(4) const u8 gText_NextBack[] = _("{A_BUTTON}NEXT {B_BUTTON}BACK"); // Unused
ALIGNED(4) const u8 gText_PickNextCancel[] = _("{DPAD_UPDOWN}INFO{A_BUTTON}WEITER {B_BUTTON}ZUR.");
ALIGNED(4) const u8 gText_PickCancel[] = _("{DPAD_UPDOWN}INFO{A_BUTTON}{B_BUTTON}ZURÜCK");
ALIGNED(4) const u8 gText_AButtonExit[] = _("{A_BUTTON}ZURÜCK");
const u8 gText_ThisIsAPokemon[] = _("Dies ist ein so genanntes\n“POKéMON”.{PAUSE 96}\p");
const u8 gText_5MarksPokemon[] = _("?????");
const u8 gText_UnkHeight[] = _("???,? m");
const u8 gText_UnkHeightMetric[] = _("???.? m");
const u8 gText_UnkWeight[] = _("???,? kg");
const u8 gText_UnkWeightMetric[] = _("???.? kg.");
const u8 gText_EmptyPkmnCategory[] = _("                       POKéMON"); // Unused
const u8 gText_EmptyHeight[] = _("          m"); // Unused
const u8 gText_EmptyWeight[] = _("          kg"); // Unused
const u8 gText_EmptyPokedexInfo1[] = _(""); // Unused
const u8 gText_CryOf[] = _("RUF VON");
const u8 gText_EmptyPokedexInfo2[] = _(""); // Unused
const u8 gText_SizeComparedTo[] = _("GRÖSSE IM VERGLEICH ZU ");
const u8 gText_PokedexRegistration[] = _("Neuer Eintrag aufgenommen.");
const u8 gText_HTHeight[] = _("GR.");
const u8 gText_WTWeight[] = _("GEW.");
const u8 gText_SearchingPleaseWait[] = _("Suche läuft.\nBitte warten…");
const u8 gText_SearchCompleted[] = _("Suche beendet.");
const u8 gText_NoMatchingPkmnWereFound[] = _("Es wurde keine Übereinstimmung ermittelt.");
const u8 gText_SearchForPkmnBasedOnParameters[] = _("Suche nach POKéMON anhand\nausgewählter Parameter.");
const u8 gText_SwitchPokedexListings[] = _("Ordnungssystem des POKéDEX ändern.");
const u8 gText_ReturnToPokedex[] = _("Kehre zurück zum POKéDEX.");
const u8 gText_SelectPokedexMode[] = _("Wähle einen POKéDEX.");
const u8 gText_SelectPokedexListingMode[] = _("Wähle ein Ordnungssystem des POKéDEX.");
const u8 gText_ListByFirstLetter[] = _("Nach Anfangsbuchstaben suchen.\n(Alle gesehenen POKéMON.)");
const u8 gText_ListByBodyColor[] = _("Nach Körperfarbe suchen.\n(Alle gesehenen POKéMON.)");
const u8 gText_ListByType[] = _("Nach Elementklasse suchen.\n(Nur gefangene POKéMON.)");
const u8 gText_ExecuteSearchSwitch[] = _("Suche/Änderung ausführen.");
const u8 gText_DexHoennTitle[] = _("HOENN DEX");
const u8 gText_DexNatTitle[] = _("NATIONALER DEX");
const u8 gText_DexSortNumericalTitle[] = _("NUMERISCH");
const u8 gText_DexSortAtoZTitle[] = _("VON A BIS Z");
const u8 gText_DexSortHeaviestTitle[] = _("NACH GEWICHT >");
const u8 gText_DexSortLightestTitle[] = _("NACH GEWICHT <");
const u8 gText_DexSortTallestTitle[] = _("NACH GRÖSSE >");
const u8 gText_DexSortSmallestTitle[] = _("NACH GRÖSSE <");
const u8 gText_DexSearchAlphaABC[] = _("ABC");
const u8 gText_DexSearchAlphaDEF[] = _("DEF");
const u8 gText_DexSearchAlphaGHI[] = _("GHI");
const u8 gText_DexSearchAlphaJKL[] = _("JKL");
const u8 gText_DexSearchAlphaMNO[] = _("MNO");
const u8 gText_DexSearchAlphaPQR[] = _("PQR");
const u8 gText_DexSearchAlphaSTU[] = _("STU");
const u8 gText_DexSearchAlphaVWX[] = _("VWX");
const u8 gText_DexSearchAlphaYZ[] = _("YZ");
const u8 gText_DexSearchColorRed[] = _("ROT");
const u8 gText_DexSearchColorBlue[] = _("BLAU");
const u8 gText_DexSearchColorYellow[] = _("GELB");
const u8 gText_DexSearchColorGreen[] = _("GRÜN");
const u8 gText_DexSearchColorBlack[] = _("SCHWARZ");
const u8 gText_DexSearchColorBrown[] = _("BRAUN");
const u8 gText_DexSearchColorPurple[] = _("LILA");
const u8 gText_DexSearchColorGray[] = _("GRAU");
const u8 gText_DexSearchColorWhite[] = _("WEISS");
const u8 gText_DexSearchColorPink[] = _("ROSA");
const u8 gText_DexHoennDescription[] = _("POKéDEX von HOENN");
const u8 gText_DexNatDescription[] = _("POKéDEX, erweiterte Edition");
const u8 gText_DexSortNumericalDescription[] = _("POKéMON werden anhand ihrer\nNummer sortiert.");
const u8 gText_DexSortAtoZDescription[] = _("Gesehene und gefangene POKéMON\nwerden alphabetisch geordnet.");
const u8 gText_DexSortHeaviestDescription[] = _("Gefangene POKéMON werden nach Gewicht\nsortiert, beginnend mit dem schwersten.");
const u8 gText_DexSortLightestDescription[] = _("Gefangene POKéMON werden nach Gewicht\nsortiert, beginnend mit dem leichtesten.");
const u8 gText_DexSortTallestDescription[] = _("Gefangene POKéMON werden nach Größe\nsortiert, beginnend mit dem größten.");
const u8 gText_DexSortSmallestDescription[] = _("Gefangene POKéMON werden nach Größe\nsortiert, beginnend mit dem kleinsten.");
const u8 gText_DexEmptyString[] = _("");
const u8 gText_DexSearchDontSpecify[] = _("KEINE ANGABE");
const u8 gText_DexSearchTypeNone[] = _("KEINER");
const u8 gText_SelectorArrow[] = _("▶");
const u8 gText_EmptySpace[] = _(" "); // Unused
const u8 gText_WelcomeToHOF[] = _("Willkommen in der RUHMESHALLE!");
const u8 gText_HOFDexRating[] = _("Spotted POKéMON: {STR_VAR_1}!\nOwned POKéMON: {STR_VAR_2}!\pPROF. BIRCH's POKéDEX rating!\pPROF. BIRCH: Let's see…\p");
const u8 gText_HOFDexSaving[] = _("SAVING…\nDON'T TURN OFF THE POWER.");
const u8 gText_HOFCorrupted[] = _("Die RH-Daten sind beschädigt.");
const u8 gText_HOFNumber[] = _("RUHMESHALLE, Nr. {STR_VAR_1}");
const u8 gText_LeagueChamp[] = _("CHAMP der POKéMON LIGA!\nHerzlichen Glückwunsch!");
const u8 gText_Number[] = _("Nr. ");
const u8 gText_Level[] = _("Lv.");
const u8 gText_IdNumberSlash[] = _("IDNo. /"); // Unused
const u8 gText_Name[] = _("TRAINER");
const u8 gText_IDNumber[] = _("ID.Nr.");
const u8 gText_BirchInTrouble[] = _("PROF. BIRK ist in Schwierigkeiten!\nSchnapp’ dir ein PKMN und hilf ihm!");
const u8 gText_ConfirmStarterChoice[] = _("Wählst du dieses POKéMON?");
const u8 gText_Pokemon4[] = _("POKéMON"); // Unused
const u8 gText_FlyToWhere[] = _("Wohin FLIEGEN?");
const u8 gMenuText_Use[] = _("USE");
const u8 gMenuText_Toss[] = _("TOSS");
const u8 gMenuText_Register[] = _("REGISTER");
const u8 gMenuText_Give[] = _("GIVE");
const u8 gMenuText_Confirm[] = _("CONFIRM");
const u8 gText_Cancel[] = _("ZURÜCK");
const u8 gText_Cancel2[] = _("ZURÜCK");
const u8 gText_EmptyString2[] = _("");
const u8 gText_None[] = _("KEINES");
const u8 gText_FiveMarks[] = _("?????");
const u8 gText_Slash[] = _("/");
const u8 gText_OneDash[] = _("-");
const u8 gText_TwoDashes[] = _("--");
const u8 gText_ThreeDashes[] = _("---");
const u8 gText_MaleSymbol[] = _("♂");
const u8 gText_FemaleSymbol[] = _("♀");
const u8 gText_LevelSymbol[] = _("Lv.");
const u8 gText_NumberClear01[] = _("{NO} {CLEAR 0x01}");
const u8 gText_RightArrow[] = _("{RIGHT_ARROW}"); // Unused
const u8 gText_IDNumber2[] = _("{ID}{NO}");
const u8 gText_Space[] = _(" ");
const u8 gText_SelectorArrow2[] = _("▶");
const u8 gText_GoBackPrevMenu[] = _("Kehre zurück zum\nvorherigen Menü.");
const u8 gText_WhatWouldYouLike[] = _("Was möchtest du tun?");
const u8 gMenuText_Give2[] = _("GIVE");
const u8 gText_xVar1[] = _("×{STR_VAR_1}");
const u8 gText_Berry2[] = _(" BERRY"); // Unused
const u8 gText_Coins[] = _("{STR_VAR_1} MÜNZ.");
const u8 gText_CloseBag[] = _("BEUTEL SCHLIESSEN");
const u8 gText_Var1IsSelected[] = _("Was möchtest\ndu tun?");
const u8 gText_CantWriteMail[] = _("Du kannst keinen\nBRIEF schreiben.");
const u8 gText_NoPokemon[] = _("Hier ist kein\nPOKéMON.");
const u8 gText_MoveVar1Where[] = _("Gegen welches Item\naustauschen?");
const u8 gText_Var1CantBeHeld[] = _("{STR_VAR_1} ist nicht zu geben.");
const u8 gText_TossHowManyVar1s[] = _("Wie viel in den Müll?");
const u8 gText_ThrewAwayVar2Var1s[] = _("{STR_VAR_2} × {STR_VAR_1}\nweggeworfen.");
const u8 gText_ConfirmTossItems[] = _("Willst du wirklich\n{STR_VAR_2} × {STR_VAR_1}\nwegwerfen?");
// const u8 gText_DadsAdvice[] = _("VATI sagt immer…\n{PLAYER}, dies ist weder der rechte\lOrt noch der rechte Zeitpunkt dafür!{PAUSE_UNTIL_PRESS}");
const u8 gText_PlayerUsedVar2[] = _("{PLAYER} setzt\n{STR_VAR_2} ein.{PAUSE_UNTIL_PRESS}");
const u8 gText_RepelEffectsLingered[] = _("Aber SCHUTZ wirkt doch\nnoch!{PAUSE_UNTIL_PRESS}");
const u8 gText_LureEffectsLingered[] = _("But the effects of a Lure\nlingered from earlier.{PAUSE_UNTIL_PRESS}");
const u8 gText_BoxFull[] = _("Die BOXen sind voll.{PAUSE_UNTIL_PRESS}");
const u8 gText_TheField[] = _("zum Hauptmenü");
const u8 gText_TheBattle[] = _("zum Kampf");
const u8 gText_ThePokemonList[] = _("zur POKéMON-LISTE");
const u8 gText_TheShop[] = _("zum Geschäft");
const u8 gText_ThePC[] = _("zum PC");

const u8 *const gBagMenu_ReturnToStrings[] =
{
    [ITEMMENULOCATION_FIELD]               = gText_TheField,
    [ITEMMENULOCATION_BATTLE]              = gText_TheBattle,
    [ITEMMENULOCATION_PARTY]               = gText_ThePokemonList,
    [ITEMMENULOCATION_SHOP]                = gText_TheShop,
    [ITEMMENULOCATION_BERRY_TREE]          = gText_TheField,
    [ITEMMENULOCATION_BERRY_BLENDER_CRUSH] = gText_TheField,
    [ITEMMENULOCATION_ITEMPC]              = gText_ThePC,
    [ITEMMENULOCATION_FAVOR_LADY]          = gText_TheField,
    [ITEMMENULOCATION_QUIZ_LADY]           = gText_TheField,
    [ITEMMENULOCATION_APPRENTICE]          = gText_TheField,
    [ITEMMENULOCATION_WALLY]               = gText_TheBattle,
    [ITEMMENULOCATION_PCBOX]               = gText_ThePC,
    [ITEMMENULOCATION_BERRY_TREE_MULCH]    = gText_TheField,
};

const u8 *const gPyramidBagMenu_ReturnToStrings[] =
{
    [PYRAMIDBAG_LOC_FIELD]       = gText_TheField,
    [PYRAMIDBAG_LOC_BATTLE]      = gText_TheBattle,
    [PYRAMIDBAG_LOC_PARTY]       = gText_ThePokemonList,
    [PYRAMIDBAG_LOC_CHOOSE_TOSS] = gText_TheField
};

const u8 gText_ReturnToVar1[] = _("Zurück\n{STR_VAR_1}.");

const u8 *const gPocketNamesStringsTable[] =
{
    [POCKET_ITEMS] =        COMPOUND_STRING("Items"),
    [POCKET_POKE_BALLS] =   COMPOUND_STRING("Pokébälle"),
    [POCKET_TM_HM]  =       COMPOUND_STRING("TMs & VMs"),
    [POCKET_BERRIES] =      COMPOUND_STRING("Beeren"),
    [POCKET_KEY_ITEMS] =    COMPOUND_STRING("Basis Items")
};

const u8 gText_NumberItem_TMBerry[] = _("{NO}{STR_VAR_1}{CLEAR 0x07}{STR_VAR_2}");
const u8 gText_NumberItem_HM[] = _("{CLEAR_TO 0x11}{STR_VAR_1}{CLEAR 0x05}{STR_VAR_2}");

const u8 gText_ShopBuy[] = _("KAUFEN");
const u8 gText_ShopSell[] = _("VERKAUFEN");
const u8 gText_ShopQuit[] = _("TSCHÜSS!");
const u8 gText_ThatItemIsSoldOut[] = _("I'm sorry, but that item is sold out.{PAUSE_UNTIL_PRESS}");
const u8 gText_SoldOut[] = _("AUSVERKAUFT");
const u8 gText_InBagVar1[] = _("BESITZ: {STR_VAR_1}");
const u8 gText_QuitShopping[] = _("Einkauf beenden.");
const u8 gText_Var1CertainlyHowMany[] = _("{STR_VAR_1}? Aber gerne.\nWie viele möchtest du?");
const u8 gText_Var1CertainlyHowMany2[] = _("{STR_VAR_1} ist {STR_VAR_2}!\nGerne. Wie viele möchtest du?");
const u8 gText_Var1AndYouWantedVar2[] = _("{STR_VAR_1}? Und du möchtest {STR_VAR_2}?\nDas macht dann ¥{STR_VAR_3}.");
const u8 gText_Var1IsItThatllBeVar2[] = _("{STR_VAR_1} soll es sein?\nDas kostet ¥{STR_VAR_2}. Einverstanden?");
const u8 gText_YouWantedVar1ThatllBeVar2[] = _("Du wolltest {STR_VAR_1}?\nDas kostet ¥{STR_VAR_2}. Einverstanden?");
const u8 gText_HereYouGoThankYou[] = _("Bitte sehr!\nUnd vielen Dank.");
const u8 gText_ThankYouIllSendItHome[] = _("Vielen Dank!\nEs wird auf deinen PC übertragen.");
const u8 gText_ThanksIllSendItHome[] = _("Danke!\nEs wird auf deinen PC übertragen.");
const u8 gText_YouDontHaveMoney[] = _("Du hast nicht genug Geld.{PAUSE_UNTIL_PRESS}");
const u8 gText_NoMoreRoomForThis[] = _("Du hast keinen Platz für weitere Items.{PAUSE_UNTIL_PRESS}");
const u8 gText_SpaceForVar1Full[] = _("Es ist kein Platz für {STR_VAR_1}.{PAUSE_UNTIL_PRESS}");
const u8 gText_AnythingElseICanHelp[] = _("Gibt es noch etwas, womit\nich dienen kann?");
const u8 gText_CanIHelpWithAnythingElse[] = _("Kann ich dir sonst noch dienlich sein?");
const u8 gText_ThrowInPremierBall[] = _("Ich gebe dir noch einen PREMIERBALL.{PAUSE_UNTIL_PRESS}");
const u8 gText_ThrowInPremierBalls[] = _("I'll throw in {STR_VAR_1} PREMIER BALLS, too.{PAUSE_UNTIL_PRESS}");
const u8 gText_CantBuyKeyItem[] = _("{STR_VAR_2}? Es tut mir Leid, aber\ndas kann ich nicht kaufen.{PAUSE_UNTIL_PRESS}");
const u8 gText_HowManyToSell[] = _("{STR_VAR_2}?\nWie viele möchtest du verkaufen?");
const u8 gText_ICanPayVar1[] = _("Ich gebe dir ¥{STR_VAR_1}.\nBist du damit einverstanden?");
const u8 gText_TurnedOverVar1ForVar2[] = _("{STR_VAR_2} wurde übergeben\nim Tausch gegen ¥{STR_VAR_1}.");
const u8 gText_PokedollarVar1[] = _("¥{STR_VAR_1}");
const u8 gText_HP3[] = _("KP");
const u8 gText_SpAtk3[] = _("SP. ANG.");
const u8 gText_SpDef3[] = _("SP. VER.");
const u8 gText_WontHaveEffect[] = _("Es wird keine Wirkung haben.{PAUSE_UNTIL_PRESS}");
const u8 gText_NextFusionMon[] = _("Choose {PKMN} to fuse with.");
const u8 gText_CantBeUsedOnPkmn[] = _("Das kann nicht bei diesem\nPOKéMON eingesetzt werden.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnCantSwitchOut[] = _("{STR_VAR_1} kann nicht ausge-\ntauscht werden!{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAlreadyInBattle[] = _("{STR_VAR_1}\nkämpft bereits!{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAlreadySelected[] = _("{STR_VAR_1} ist\nbereits ausgewählt.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnHasNoEnergy[] = _("{STR_VAR_1} kann\nnicht kämpfen!{PAUSE_UNTIL_PRESS}");
const u8 gText_CantSwitchWithAlly[] = _("Ein POKéMON von {STR_VAR_1} ist\nnicht gegen deins eintauschbar!{PAUSE_UNTIL_PRESS}");
const u8 gText_EggCantBattle[] = _("Ein EI kann nicht kämpfen!{PAUSE_UNTIL_PRESS}");
const u8 gText_CantUseUntilNewBadge[] = _("Das ist erst einsetzbar, wenn\nein neuer ORDEN errungen wurde.{PAUSE_UNTIL_PRESS}");
const u8 gText_NoMoreThanVar1Pkmn[] = _("Es können nicht mehr als\n{STR_VAR_1} POKéMON teilnehmen.{PAUSE_UNTIL_PRESS}");
const u8 gText_SendMailToPC[] = _("Den abgenommenen BRIEF\nauf deinen PC übertragen?");
const u8 gText_MailSentToPC[] = _("Der BRIEF wurde auf deinen\nPC übertragen.{PAUSE_UNTIL_PRESS}");
const u8 gText_PCMailboxFull[] = _("Du kannst keine weiteren BRIEFE\nauf deinen PC übertragen.{PAUSE_UNTIL_PRESS}");
const u8 gText_MailMessageWillBeLost[] = _("Wird der BRIEF entfernt, geht\nder Inhalt verloren, okay?");
const u8 gText_RemoveMailBeforeItem[] = _("Der BRIEF muss entfernt werden,\num ein Item tragen zu können.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnWasGivenItem[] = _("{STR_VAR_1} erhält\n{STR_VAR_2} zum Tragen.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAlreadyHoldingItemSwitch[] = _("{STR_VAR_1} trägt bereits\n{STR_VAR_2}.\pSollen die Items ausge-\ntauscht werden?");
const u8 gText_PkmnNotHolding[] = _("{STR_VAR_1} trägt\nkein Item.{PAUSE_UNTIL_PRESS}");
const u8 gText_ReceivedItemFromPkmn[] = _("{STR_VAR_2} von\n{STR_VAR_1} erhalten.{PAUSE_UNTIL_PRESS}");
const u8 gText_MailTakenFromPkmn[] = _("Der BRIEF wurde dem\nPOKéMON abgenommen.{PAUSE_UNTIL_PRESS}");
const u8 gText_SwitchedPkmnItem[] = _("{STR_VAR_2} wurde gegen\n{STR_VAR_1} ausgetauscht.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnHoldingItemCantHoldMail[] = _("Dieses POKéMON trägt ein Item.\nEs kann keinen BRIEF tragen.{PAUSE_UNTIL_PRESS}");
const u8 gText_MailTransferredFromMailbox[] = _("Der BRIEF wurde von deinem\nPC heruntergeladen.{PAUSE_UNTIL_PRESS}");
const u8 gText_BagFullCouldNotRemoveItem[] = _("Der BEUTEL ist voll. Das Item\ndes PKMN wurde nicht entfernt.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnLearnedMove3[] = _("{STR_VAR_1} erlernt\n{STR_VAR_2}!");
const u8 gText_PkmnCantLearnMove[] = _("{STR_VAR_1} und {STR_VAR_2}\nsind nicht kompatibel.\p{STR_VAR_2} kann nicht \nerlernt werden.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnNeedsToReplaceMove[] = _("{STR_VAR_1} versucht,\n{STR_VAR_2} zu erlernen.\pAber {STR_VAR_1} kann maximal\nvier Attacken erlernen.\pSoll eine andere Attacke durch\n{STR_VAR_2} ersetzt werden?");
const u8 gText_StopLearningMove2[] = _("{STR_VAR_2} nicht\nerlernen?");
const u8 gText_MoveNotLearned[] = _("{STR_VAR_1} hat {STR_VAR_2}\nnicht erlernt.{PAUSE_UNTIL_PRESS}");
const u8 gText_WhichMoveToForget[] = _("Welche Attacke soll vergessen\nwerden?{PAUSE_UNTIL_PRESS}");
const u8 gText_12PoofForgotMove[] = _("1, {PAUSE 15}2 und{PAUSE 15}… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1} Schwupp!\p{STR_VAR_1} hat\n{STR_VAR_2} vergessen.\pUnd…{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAlreadyKnows[] = _("{STR_VAR_1} kennt\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnHPRestoredByVar2[] = _("Die KP von {STR_VAR_1} wurden\num {STR_VAR_2} Punkt(e) aufgefüllt.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnCuredOfPoison[] = _("Die Vergiftung von {STR_VAR_1}\nwurde geheilt.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnCuredOfParalysis[] = _("Die Paralyse von {STR_VAR_1}\nwurde aufgehoben.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnWokeUp2[] = _("{STR_VAR_1} ist aufgewacht.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnBurnHealed[] = _("Verbrennung von {STR_VAR_1}\nwurde geheilt.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnFrostbiteHealed[] = _("{STR_VAR_1}'s frostbite was healed.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnThawedOut[] = _("{STR_VAR_1} wurde aufgetaut.{PAUSE_UNTIL_PRESS}");
const u8 gText_PPWasRestored[] = _("AP wurden aufgefüllt.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnRegainhedHealth[] = _("{STR_VAR_1} regained health.{PAUSE_UNTIL_PRESS}"); // Unused
const u8 gText_PkmnBecameHealthy[] = _("{STR_VAR_1} erholte sich.{PAUSE_UNTIL_PRESS}");
const u8 gText_MovesPPIncreased[] = _("AP von {STR_VAR_1}\nwurden angehoben.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnElevatedToLvVar2[] = _("{STR_VAR_1} erreicht\nLv. {STR_VAR_2}.");
const u8 gText_PkmnGainedExp[] = _("{STR_VAR_1} gained {STR_VAR_2} Exp. Points!{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnGainedExpAndElevatedToLvVar3[] = _("{STR_VAR_1} gained {STR_VAR_2} Exp. Points\nand was elevated to Lv. {STR_VAR_3}!");
const u8 gText_PkmnBaseVar2StatIncreased[] = _("{STR_VAR_2} von\n{STR_VAR_1} wurde angehoben.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnFriendlyBaseVar2Fell[] = _("{STR_VAR_1} wird zahm.\nDer Grundwert {STR_VAR_2} sinkt.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnAdoresBaseVar2Fell[] = _("{STR_VAR_1} vergöttert dich!\nDer Grundwert {STR_VAR_2} sinkt.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnFriendlyBaseVar2CantFall[] = _("{STR_VAR_1} wird zahm. Grund-\nwert {STR_VAR_2} sinkt nicht mehr.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnSnappedOutOfConfusion[] = _("{STR_VAR_1} ist nicht\nmehr verwirrt.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnGotOverInfatuation[] = _("{STR_VAR_1} fühlt sich nicht\nmehr angezogen.{PAUSE_UNTIL_PRESS}");
const u8 gText_PkmnTransformed[] = _("{STR_VAR_1} transformed!{PAUSE_UNTIL_PRESS}");
const u8 gText_ThrowAwayItem[] = _("{STR_VAR_1}\nwegwerfen?");
const u8 gText_ItemThrownAway[] = _("{STR_VAR_1}\nwurde weggeworfen.{PAUSE_UNTIL_PRESS}");
const u8 gText_TeachWhichPokemon2[] = _("Teach which POKéMON?"); // Unused
const u8 gText_ChoosePokemon[] = _("Wähle ein POKéMON.");
const u8 gText_MoveToWhere[] = _("An wessen Stelle setzen?");
const u8 gText_TeachWhichPokemon[] = _("Welches POKéMON lehren?");
const u8 gText_UseOnWhichPokemon[] = _("Welches POKéMON?");
const u8 gText_GiveToWhichPokemon[] = _("Welchem POKéMON geben?");
const u8 gText_DoWhatWithPokemon[] = _("Was tun mit {STR_VAR_1}?");
const u8 gText_NothingToCut[] = _("Hier nicht einsetzbar.");
const u8 gText_CantSurfHere[] = _("SURFER nicht einsetzbar.");
const u8 gText_AlreadySurfing[] = _("SURFER ist eingesetzt.");
const u8 gText_CantUseHere[] = _("Hier nicht einsetzbar.");
const u8 gText_RestoreWhichMove[] = _("Welche Att. auffüllen?");
const u8 gText_BoostPp[] = _("AP welcher Att. heben?");
const u8 gText_DoWhatWithItem[] = _("Was willst du mit dem Item?");
const u8 gText_NoPokemonForBattle[] = _("Kein POKéMON kampfbereit!");
const u8 gText_ChoosePokemon2[] = _("Wähle ein POKéMON.");
const u8 gText_NotEnoughHp[] = _("Nicht genügend KP…");
const u8 gText_PokemonAreNeeded[] = _("{STR_VAR_1} POKéMON sind nötig.");
const u8 gText_PokemonCantBeSame[] = _("Nicht dieselben POKéMON!");
const u8 gText_NoIdenticalHoldItems[] = _("Nicht dieselben Items!");
const u8 gText_CurrentIsTooFast[] = _("Die Strömung ist zu stark!");
const u8 gText_DoWhatWithMail[] = _("Was ist mit dem BRIEF?");
const u8 gText_ChoosePokemonCancel[] = _("Wähle PKMN oder ZURÜCK.");
const u8 gText_ChoosePokemonConfirm[] = _("Wähle ein PKMN und bestätige.");
const u8 gText_SendWhichMonToPC[] = _("Send which POKéMON to the PC?");
const u8 gText_MoveItemWhere[] = _("Move item to where?");
const u8 gText_XsYAnd[] = _("{STR_VAR_1}'s {STR_VAR_2} and\n");
const u8 gText_XsYWereSwapped[] = _("{STR_VAR_1}'s {STR_VAR_2} were swapped!{PAUSE_UNTIL_PRESS}");
const u8 gText_EnjoyCycling[] = _("Lass uns Rad fahren!");
const u8 gText_InUseAlready_PM[] = _("Das wird bereits benutzt.");
const u8 gText_AlreadyHoldingOne[] = _("{STR_VAR_1} trägt bereits\n{STR_VAR_2}.");
const u8 gText_WhichAppliance[] = _("Order which\nappliance?");
const u8 gText_NoUse[] = _("Unnütz!");
const u8 gText_Able[] = _("O.K.");
const u8 gText_First_PM[] = _("ERSTES");
const u8 gText_Second_PM[] = _("ZWEITES");
const u8 gText_Third_PM[] = _("DRITTES");
const u8 gText_Able2[] = _("O.K.");
const u8 gText_NotAble[] = _("NEIN");
const u8 gText_Able3[] = _("O.K.");
const u8 gText_NotAble2[] = _("NEIN");
const u8 gText_Learned[] = _("KENNT ATT.");
const u8 gText_Have[] = _("HABEN");
const u8 gText_DontHave[] = _("NIX HABEN");
const u8 gText_Fourth[] = _("VIERTES");
const u8 gText_PkmnCantParticipate[] = _("Dieses PKMN kann nicht teilnehmen.{PAUSE_UNTIL_PRESS}");
const u8 gText_CancelParticipation[] = _("Teilnahme absagen?");
const u8 gText_CancelBattle[] = _("Kampf absagen?");
const u8 gText_ReturnToWaitingRoom[] = _("Zurück ins WARTEZIMMER?");
const u8 gText_CancelChallenge[] = _("Herausforderung widerrufen?");
const u8 gText_EscapeFromHere[] = _("Von hier fliehen und nach\n{STR_VAR_1} zurückkehren?");
const u8 gText_ReturnToHealingSpot[] = _("Zum heilenden Ort in {STR_VAR_1}\nzurückkehren?");
const u8 gText_PauseUntilPress[] = _("{PAUSE_UNTIL_PRESS}");
const u8 gJPText_AreYouSureYouWantToSpinTradeMon[] = _("{STR_VAR_1}を ぐるぐるこうかんに\nだして よろしいですか？");
ALIGNED(4) const u8 gText_OnlyPkmnForBattle[] = _("Das ist das einzige\nPOKéMON zum Kampf.");
ALIGNED(4) const u8 gText_PkmnCantBeTradedNow[] = _("Dieses POKéMON kann jetzt\nnicht getauscht werden.");
ALIGNED(4) const u8 gText_PkmnCantBeTraded[] = _("That POKéMON can't be traded.");
ALIGNED(4) const u8 gText_EggCantBeTradedNow[] = _("EI jetzt nicht tauschbar.");
ALIGNED(4) const u8 gText_OtherTrainersPkmnCantBeTraded[] = _("PKMN des anderen TRAINERs kann\njetzt nicht getauscht werden.");
ALIGNED(4) const u8 gText_OtherTrainerCantAcceptPkmn[] = _("Der andere TRAINER kann das\nPKMN jetzt nicht akzeptieren.");
ALIGNED(4) const u8 gText_CantTradeWithTrainer[] = _("Du kannst mit diesem TRAINER\njetzt keine PKMN tauschen.");
ALIGNED(4) const u8 gText_NotPkmnOtherTrainerWants[] = _("Diese Art von POKéMON möchte\nder andere TRAINER nicht.");
ALIGNED(4) const u8 gText_ThatIsntAnEgg[] = _("Dies ist kein EI!");
const u8 gText_Register[] = _("WÄHLEN");
const u8 gText_Attack3[] = _("ANGRIFF");
const u8 gText_Defense3[] = _("VERT.");
const u8 gText_SpAtk4[] = _("SP.ANG.");
const u8 gText_SpDef4[] = _("SP.VER.");
const u8 gText_Speed2[] = _("INIT.");
const u8 gText_HP4[] = _("KP");
const u8 gText_EmptyString8[] = _(""); // Unused
const u8 gText_OTSlash[] = _("OT:");
const u8 gText_RentalPkmn[] = _("LEIH-POKéMON");
const u8 gText_TypeSlash[] = _("TYP:");
const u8 gText_Power[] = _("STÄRKE");
const u8 gText_Accuracy2[] = _("GENAU.");
const u8 gText_Appeal[] = _("AUSDR.");
const u8 gText_Jam[] = _("EINDR.");
const u8 gText_Status[] = _("STATUS");
const u8 gText_ExpPoints[] = _("E.-PUNKTE");
const u8 gText_NextLv[] = _("NÄCHST. Lv.");
const u8 gText_RibbonsVar1[] = _("BÄNDER: {STR_VAR_1}");
const u8 gText_EmptyString5[] = _("");
const u8 gText_Events[] = _("EVENTS"); // Unused
const u8 gText_Switch[] = _("TAUSCH");
const u8 gText_PkmnInfo[] = _("POKéMON-INFO");
const u8 gText_PkmnSkills[] = _("POKéMON-FÄHIG.");
const u8 gText_BattleMoves[] = _("ATTACKEN");
const u8 gText_ContestMoves[] = _("WETT.-ATTACKEN");
const u8 gText_Info[] = _("INFO");
const u8 gText_EggWillTakeALongTime[] = _("Dieses EI braucht sicher\nnoch sehr viel Zeit.");
const u8 gText_EggWillTakeSomeTime[] = _("Was da wohl schlüpfen wird?\nEs wird sicher lange dauern.");
const u8 gText_EggWillHatchSoon[] = _("Bewegungen… Da wird\nwohl bald etwas schlüpfen.");
const u8 gText_EggAboutToHatch[] = _("Geräusche! Da schlüpft\nsicher bald etwas!");
const u8 gText_HMMovesCantBeForgotten2[] = _("VM-Attacken können jetzt\nnicht vergessen werden.");
const u8 gText_XNatureMetAtYZ[] = _("Wesen: {DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5},\n{LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1},\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}.");
const u8 gText_XNatureHatchedAtYZ[] = _("Wesen: {DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5},\ngeschlüpft mit {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1},\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}.");
const u8 gText_XNatureObtainedInTrade[] = _("Wesen: {DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5},\nin einem Tausch erhalten.");
const u8 gText_XNatureFatefulEncounter[] = _("Wesen: {DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5},\nin schicksalhafter Begeg-\nnung mit {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1} erhalten.");
const u8 gText_XNatureProbablyMetAt[] = _("Wesen: {DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}, gefangen\nvermutlich mit {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1},\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}.");
const u8 gText_XNature[] = _("Wesen: {DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}");
const u8 gText_XNatureMetSomewhereAt[] = _("Wesen: {DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5},\nirgendwo getroffen\nmit {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}.");
const u8 gText_XNatureHatchedSomewhereAt[] = _("Wesen: {DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}, irgendwo\ngeschlüpft mit {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}.");
const u8 gText_OddEggFoundByCouple[] = _("Seltsames POKéMON-EI, das\ndie PENSIONSLEITUNG fand.");
const u8 gText_PeculiarEggNicePlace[] = _("Kurioses POKéMON-EI, an\nhübschem Ort erhalten.");
const u8 gText_PeculiarEggTrade[] = _("Kurioses POKéMON-EI, im\nTausch erhalten.");
const u8 gText_EggFromHotSprings[] = _("Ein POKéMON-EI, an den\nHeißen Quellen erhalten.");
const u8 gText_EggFromTraveler[] = _("Ein seltsames POKéMON-EI\nvon einem Reisenden.");
const u8 gText_ApostropheSBase[] = _("BASIS v. {STR_VAR_1}");
const u8 gText_OkayToDeleteFromRegistry[] = _("Soll {STR_VAR_1} aus dem GRUNDBUCH\ngelöscht werden?");
const u8 gText_RegisteredDataDeleted[] = _("Eingetragene Daten wurden gelöscht.{PAUSE_UNTIL_PRESS}");
const u8 gText_NoRegistry[] = _("Es gibt kein GRUNDBUCH.{PAUSE_UNTIL_PRESS}");
const u8 gText_DelRegist[] = _("EINTR. LÖSCHEN");
const u8 gText_Var3Var1SlashVar2[] = _("{STR_VAR_3}{STR_VAR_1}/{STR_VAR_2}"); // Unused
const u8 gText_Decorate[] = _("DEKORIEREN");
const u8 gText_PutAway[] = _("WEGNEHMEN");
const u8 gText_Toss2[] = _("WEGWERFEN");
const u8 gText_Color161Shadow161[] = _("{COLOR 161}{SHADOW 161}");
const u8 gText_PutOutSelectedDecorItem[] = _("Wähle eine Dekoration \nund stelle sie auf.");
const u8 gText_StoreChosenDecorInPC[] = _("Wähle eine Dekoration und \nübertrage sie auf deinen PC.");
const u8 gText_ThrowAwayUnwantedDecors[] = _("Wähle eine Dekoration\nund wirf sie weg.");
const u8 gText_NoDecorations[] = _("Es gibt keine Dekoration.{PAUSE_UNTIL_PRESS}");
const u8 gText_Desk[] = _("TISCH");
const u8 gText_Chair[] = _("STUHL");
const u8 gText_Plant[] = _("PFLANZE");
const u8 gText_Ornament[] = _("ORNAMENT");
const u8 gText_Mat[] = _("MATTE");
const u8 gText_Poster[] = _("POSTER");
const u8 gText_Doll[] = _("PUPPE");
const u8 gText_Cushion[] = _("KISSEN");
const u8 gText_Gold[] = _("GOLD");
const u8 gText_Silver[] = _("SILBER");
const u8 gText_PlaceItHere[] = _("Hierhin platzieren?");
const u8 gText_CantBePlacedHere[] = _("Kann hier nicht platziert werden.");
const u8 gText_CancelDecorating[] = _("Dekorieren beenden?");
const u8 gText_InUseAlready[] = _("Das wurde bereits platziert.");
const u8 gText_NoMoreDecorations[] = _("Mehr kann nicht dekoriert werden. Es\nist nur Platz für {STR_VAR_1} Dekorationen.");
const u8 gText_NoMoreDecorations2[] = _("Mehr kann nicht dekoriert werden. Es\nist nur Platz für {STR_VAR_1} Dekorationen.");
const u8 gText_MustBePlacedOnDesk[] = _("This can't be placed here.\nIt must be on a DESK, etc."); // Unused
const u8 gText_CantPlaceInRoom[] = _("Die Dekoration kann nicht in deinem\neigenen Zimmer aufgestellt werden.");
const u8 gText_CantThrowAwayInUse[] = _("Diese Dekoration wurde platziert.\nDu kannst sie nicht wegwerfen.");
const u8 gText_DecorationWillBeDiscarded[] = _("{STR_VAR_1} wird weggeworfen.\nEinverstanden?");
const u8 gText_DecorationThrownAway[] = _("Die Dekoration wurde weggeworfen.");
const u8 gText_StopPuttingAwayDecorations[] = _("Wegnehmen von Dekoration beenden?");
const u8 gText_NoDecorationHere[] = _("Hier ist keine Dekoration.");
const u8 gText_ReturnDecorationToPC[] = _("Diese Dekoration auf \nden PC übertragen?");
const u8 gText_DecorationReturnedToPC[] = _("Die Dekoration wurde auf\nden PC übertragen.");
const u8 gText_NoDecorationsInUse[] = _("Es sind keine Dekorationen platziert.{PAUSE_UNTIL_PRESS}");
const u8 gText_Tristan[] = _("TATIAN");
const u8 gText_Philip[] = _("LARS");
const u8 gText_Dennis[] = _("KLAAS");
const u8 gText_Roberto[] = _("HAINER");
const u8 gText_NoItems[] = _("Es gibt keine Items.{PAUSE_UNTIL_PRESS}");
const u8 gText_NoMailHere[] = _("Hier ist kein BRIEF.{PAUSE_UNTIL_PRESS}");
const u8 gText_WhatToDoWithVar1sMail[] = _("Was soll mit dem BRIEF von\n{STR_VAR_1} geschehen?");
const u8 gText_MessageWillBeLost[] = _("Der Inhalt geht verloren.\nIst das in Ordnung für dich?");
const u8 gText_BagIsFull[] = _("Der BEUTEL ist voll.{PAUSE_UNTIL_PRESS}");
const u8 gText_MailToBagMessageErased[] = _("Der BRIEF, dessen Inhalt gelöscht\nist, wurde im BEUTEL gelagert.{PAUSE_UNTIL_PRESS}");
const u8 gText_Dad[] = _("VATI");
const u8 gText_Mom[] = _("MUTTI");
const u8 gText_Wallace[] = _("WASSILI");
const u8 gText_Steven[] = _("TROY");
const u8 gText_Brawly[] = _("KAMILLO");
const u8 gText_Winona[] = _("WIBKE");
const u8 gText_Phoebe[] = _("ANTONIA");
const u8 gText_Glacia[] = _("FROSINA");
const u8 gText_Info2[] = _("INFO");
const u8 gText_CoolnessContest[] = _("COOL.");
const u8 gText_BeautyContest[] = _("SCHÖN.");
const u8 gText_CutenessContest[] = _("ANMUT");
const u8 gText_SmartnessContest[] = _("KLUG.");
const u8 gText_ToughnessContest[] = _("STÄRKE");
const u8 gText_Decoration2[] = _("DEKORATION");
const u8 gText_PackUp[] = _("EINPACKEN");
const u8 gText_Registry[] = _("GRUNDBUCH");
const u8 gText_Information[] = _("INFORMATION");
const u8 gText_Yes[] = _("JA");
const u8 gText_No[] = _("NEIN");
// const u8 gText_Lv50[] = _("Lv. 50");
const u8 gText_OpenLevel[] = _("OFFENE KÄMPFE");
const u8 gText_RedShard[] = _("PURPURSTÜCK");
const u8 gText_YellowShard[] = _("GELBSTÜCK");
const u8 gText_BlueShard[] = _("INDIGOSTÜCK");
const u8 gText_GreenShard[] = _("GRÜNSTÜCK");
const u8 gText_BattleFrontier[] = _("KAMPFZONE");
const u8 gText_Cool[] = _("COOL.");
const u8 gText_Beauty[] = _("SCHÖN.");
const u8 gText_Cute[] = _("ANMUT");
const u8 gText_Smart[] = _("KLUG.");
const u8 gText_Tough[] = _("STÄRKE");
const u8 gText_Normal[] = _("NORMAL");
const u8 gText_Super[] = _("SUPER");
const u8 gText_Hyper[] = _("HYPER");
const u8 gText_Master[] = _("MASTER");
const u8 gText_Cool2[] = _("COOL.");
const u8 gText_Beauty2[] = _("SCHÖN.");
const u8 gText_Cute2[] = _("ANMUT");
const u8 gText_Smart2[] = _("KLUG.");
const u8 gText_Tough2[] = _("STÄRKE");
const u8 gText_Items[] = _("ITEM");
const u8 gText_Key_Items[] = _("BASIS-ITEM");
const u8 gText_Poke_Balls[] = _("BALL");
const u8 gText_TMs_Hms[] = _("TM/VM");
const u8 gText_Berries2[] = _("BEEREn");
const u8 gText_SomeonesPC[] = _("JEMANDES PC");
const u8 gText_BillsPC[] = _("BILL'S PC");
const u8 gText_PlayersPC[] = _("PC von {PLAYER}");
const u8 gText_HallOfFame[] = _("RUHMESHALLE");
const u8 gText_LogOff[] = _("AUSLOGGEN");
const u8 gText_Opponent[] = _("GEGNER");
const u8 gText_Tourney_Tree[] = _("TURNIERTAFEL");
const u8 gText_ReadyToStart[] = _("BEREIT");
const u8 gText_Single2[] = _("EINZEL");
const u8 gText_Double2[] = _("DOPPEL");
const u8 gText_Multi[] = _("MULTI");
const u8 gText_MultiLink[] = _("MULTI-LINK");
const u8 gText_MenuOptionPokedex[] = _("POKéDEX");
const u8 gText_MenuOptionPokemon[] = _("POKéMON");
const u8 gText_MenuOptionBag[] = _("BEUTEL");
const u8 gText_MenuOptionPokenav[] = _("POKéNAV");
const u8 gText_Blank[] = _("");
const u8 gText_MenuOptionSave[] = _("SICHERN");
const u8 gText_MenuOptionOption[] = _("OPTION.");
const u8 gText_MenuOptionExit[] = _("BEENDEN");
const u8 gText_SouthernIsland[] = _("INSEL IM SÜDEN");
const u8 gText_BirthIsland[] = _("ENTSTEHUNGSINSEL");
const u8 gText_FarawayIsland[] = _("FERNEILAND");
const u8 gText_NavelRock[] = _("NABELFELS");
const u8 gText_NormalTagMatch[] = _("BASISTEAMKAMPF");
const u8 gText_VarietyTagMatch[] = _("HÜRDENTEAMKAMPF");
const u8 gText_UniqueTagMatch[] = _("UNIKATTEAMKAMPF");
const u8 gText_ExpertTagMatch[] = _("PROFITEAMKAMPF");
const u8 gText_TradeCenter[] = _("HANDELSCENTER");
const u8 gText_Colosseum[] = _("KOLOSSEUM");
const u8 gText_RecordCorner[] = _("STATISTIKTAUSCH");
const u8 gText_BerryCrush3[] = _("BEERENMÜHLE");
const u8 gText_BattleRules[] = _("KAMPFREGELN");
const u8 gText_JudgeMind[] = _("JURY: VERSTAND");
const u8 gText_JudgeSkill[] = _("JURY: GESCHICK");
const u8 gText_JudgeBody[] = _("JURY: KÖRPER");
const u8 gText_BasicRules[] = _("GRUNDREGELN");
const u8 gText_SwapPartners[] = _("TAUSCH: TEAM");
const u8 gText_SwapNumber[] = _("TAUSCH: NR.");
const u8 gText_SwapNotes[] = _("TAUSCH: TIPP");
const u8 gText_BattleBasics[] = _("KAMPFTIPPS");
const u8 gText_PokemonNature[] = _("POKéMON WESEN");
const u8 gText_PokemonMoves[] = _("PKMN ATTACKEN");
const u8 gText_Underpowered[] = _("WESEN&ATTACKEN");
const u8 gText_WhenInDanger[] = _("BEI GEFAHR");
const u8 gText_BattlePokemon[] = _("KAMPFPOKéMON");
const u8 gText_BattleTrainers[] = _("KAMPFTRAINER");
const u8 gText_GoOn[] = _("WEITER");
const u8 gText_Record2[] = _("SICHERN");
const u8 gText_Rest[] = _("AUSRUHEN");
const u8 gText_Retire[] = _("SCHLUSS");
const u8 gText_1F[] = _("EG");
const u8 gText_2F[] = _("1S");
const u8 gText_3F[] = _("2S");
const u8 gText_4F[] = _("3S");
const u8 gText_5F[] = _("4S");
const u8 gText_6F[] = _("5S");
const u8 gText_7F[] = _("6S");
const u8 gText_8F[] = _("7S");
const u8 gText_9F[] = _("8S");
const u8 gText_10F[] = _("9S");
const u8 gText_11F[] = _("10S");
const u8 gText_B1F[] = _("U1S");
const u8 gText_B2F[] = _("U2S");
const u8 gText_B3F[] = _("U3S");
const u8 gText_B4F[] = _("U4S");
const u8 gText_Rooftop[] = _("DACH");
const u8 gText_ElevatorNowOn[] = _("Momentan im");
const u8 gText_BP[] = _("GP");
const u8 gText_RankingHall[] = _("ERGEBNISHALLE");
const u8 gText_ExchangeService[] = _("AUSTAUSCHSERVICE");
const u8 gText_LilycoveCity[] = _("SEEGRASULB CITY");
const u8 gText_SlateportCity[] = _("GRAPHITPORT CITY");
const u8 gText_Exit[] = _("ZURÜCK");
const u8 gText_YourPartysFull[] = _("Dein Team ist voll!");
const u8 gText_NatureSlash[] = _("WESEN/");
const u8 gText_InParty[] = _("IM TEAM");
const u8 gText_PokemonMaleLv[] = _("{DYNAMIC 0}{COLOR_HIGHLIGHT_SHADOW LIGHT_RED WHITE GREEN}♂{COLOR_HIGHLIGHT_SHADOW DARK_GRAY WHITE LIGHT_GRAY}/{LV}{DYNAMIC 1}"); // Unused
const u8 gText_PokemonFemaleLv[] = _("{DYNAMIC 0}{COLOR_HIGHLIGHT_SHADOW LIGHT_GREEN WHITE BLUE}♀{COLOR_HIGHLIGHT_SHADOW DARK_GRAY WHITE LIGHT_GRAY}/{LV}{DYNAMIC 1}"); // Unused
const u8 gText_PokemonNoGenderLv[] = _("{DYNAMIC 0}/{LV}{DYNAMIC 1}"); // Unused
const u8 gText_PokemonMaleLv2[] = _("{DYNAMIC 0}{COLOR_HIGHLIGHT_SHADOW LIGHT_RED WHITE GREEN}♂{COLOR_HIGHLIGHT_SHADOW DARK_GRAY WHITE LIGHT_GRAY}/{LV}{DYNAMIC 1}{DYNAMIC 2}"); // Unused
const u8 gText_PokemonFemaleLv2[] = _("{DYNAMIC 0}{COLOR_HIGHLIGHT_SHADOW LIGHT_GREEN WHITE BLUE}♀{COLOR_HIGHLIGHT_SHADOW DARK_GRAY WHITE LIGHT_GRAY}/{LV}{DYNAMIC 1}{DYNAMIC 2}"); // Unused
const u8 gText_PokemonNoGenderLv2[] = _("{DYNAMIC 0}/{LV}{DYNAMIC 1}{DYNAMIC 2}"); // Unused
const u8 gText_CombineFourWordsOrPhrases[] = _("Erstelle dein eigenes Profil!");
const u8 gText_AndMakeYourProfile[] = _("Kombiniere 4 Wörter/Ausdrücke.");
const u8 gText_CombineSixWordsOrPhrases[] = _("Verwende 6 Ausdrücke,");
const u8 gText_AndMakeAMessage[] = _("um einen Satz zu bilden.");
const u8 gText_FindWordsThatDescribeYour[] = _("Finde Worte, die deine momentanen");
const u8 gText_FeelingsRightNow[] = _("Empfindungen beschreiben.");
const u8 gText_WithFourPhrases[] = _("With four phrases,"); // Unused
const u8 gText_CombineNineWordsOrPhrases[] = _("Kombiniere 9 Ausdrücke und");
const u8 gText_AndMakeAMessage2[] = _("erstelle eine Nachricht.");
const u8 gText_ChangeJustOneWordOrPhrase[] = _("Ändere nur 1 Wort/Ausdruck");
const u8 gText_AndImproveTheBardsSong[] = _("und verbessere das BARDEN-Lied.");
const u8 gText_YourProfile[] = _("Dein Profil");
const u8 gText_YourFeelingAtTheBattlesStart[] = _("Dein Gefühl zum Kampfbeginn");
const u8 gText_WhatYouSayIfYouWin[] = _("Dein Ausspruch im Fall des Sieges");
const u8 gText_WhatYouSayIfYouLose[] = _("Dein Ausspruch bei einer Niederl.");
const u8 gText_TheAnswer[] = _("Die Antwort");
const u8 gText_TheMailMessage[] = _("Der Inhalt des BRIEFes");
const u8 gText_TheMailSalutation[] = _("The MAIL salutation"); // Unused
const u8 gText_TheBardsSong2[] = _("Das neue Lied");
const u8 gText_CombineTwoWordsOrPhrases[] = _("Kombiniere 2 Ausdrücke und");
const u8 gText_AndMakeATrendySaying[] = _("schaffe einen hippen Spruch.");
const u8 gText_TheTrendySaying[] = _("Der hippe Spruch");
const u8 gText_IsAsShownOkay[] = _("lautet also so. O.K.?");
const u8 gText_CombineTwoWordsOrPhrases2[] = _("Kombiniere 2 Ausdrücke und");
const u8 gText_ToTeachHerAGoodSaying[] = _("bringe ihr einen guten Spruch bei.");
const u8 gText_FindWordsWhichFit[] = _("Finde die passenden Worte");
const u8 gText_TheTrainersImage[] = _("für diesen TRAINER.");
const u8 gText_TheImage[] = _("Darstellung");
const u8 gText_OutOfTheListedChoices[] = _("Wähle eine der vorgegebenen");
const u8 gText_SelectTheAnswerToTheQuiz[] = _("Antworten als Lösung aus");
const u8 gText_AndCreateAQuiz[] = _("und erstelle ein Quiz!");
const u8 gText_PickAWordOrPhraseAnd[] = _("Wähle ein(en) Wort/Ausdruck aus");
const u8 gText_SetTheQuizAnswer[] = _("und lege die Antwort fest.");
const u8 gText_TheAnswerColon[] = _("Die Antwort:");
const u8 gText_TheQuizColon[] = _("The quiz:"); // Unused
const u8 gText_ApprenticePhrase[] = _("Aussage des Lehrlings:");
const u8 gText_QuitEditing[] = _("Das Textverfassen beenden?");
const u8 gText_StopGivingPkmnMail[] = _("POKéMON keinen BRIEF geben?");
const u8 gText_AndFillOutTheQuestionnaire[] = _("Fülle den Fragebogen aus.");
const u8 gText_LetsReplyToTheInterview[] = _("Lass uns das Interview beenden!");
const u8 gText_AllTextBeingEditedWill[] = _("Der gesamte verfasste Text wird");
const u8 gText_BeDeletedThatOkay[] = _("gelöscht. Einverstanden?");
const u8 gText_QuitEditing2[] = _("Quit editing?"); // Unused
const u8 gText_EditedTextWillNotBeSaved[] = _("The edited text will not be saved."); // Unused
const u8 gText_IsThatOkay[] = _("Is that okay?"); // Unused
const u8 gText_PleaseEnterPhraseOrWord[] = _("Please enter a phrase or word."); // Unused
const u8 gText_EntireTextCantBeDeleted[] = _("The entire text can't be deleted.");
const u8 gText_OnlyOnePhrase[] = _("Nur ein Ausdruck ist änderbar.");
const u8 gText_OriginalSongWillBeUsed[] = _("Das Lied wird wiederhergestellt.");
const u8 gText_ThatsTrendyAlready[] = _("That's trendy already!"); // Unused
const u8 gText_CombineTwoWordsOrPhrases3[] = _("Kombiniere 2 Wörter/Ausdrücke.");
const u8 gText_QuitGivingInfo[] = _("Quit giving information?"); // Unused
const u8 gText_StopGivingPkmnMail2[] = _("Stop giving the POKéMON MAIL?"); // Unused
const u8 gText_CreateAQuiz2[] = _("Create a quiz!"); // Unused
const u8 gText_SetTheAnswer[] = _("Set the answer!"); // Unused
const u8 gText_CancelSelection[] = _("Cancel the selection?"); // Unused
const u8 gText_Profile[] = _("PROFIL");
const u8 gText_AtTheBattlesStart[] = _("Zum Kampfbeginn");
const u8 gText_UponWinningABattle[] = _("Über den Sieg");
const u8 gText_UponLosingABattle[] = _("Über die Niederlage");
const u8 gText_TheBardsSong[] = _("Das BARDEN-Lied");
const u8 gText_WhatsHipAndHappening[] = _("Was ist hip? Was ist top?");
const u8 gText_Interview[] = _("Interview");
const u8 gText_GoodSaying[] = _("Guter Spruch");
const u8 gText_FansQuestion[] = _("Frage eines Fans");
const u8 gJPText_WhatIsTheQuizAnswer[] = _("クイズの こたえは？"); // Unused
const u8 gText_ApprenticesPhrase[] = _("Worte des Lehrlings");
const u8 gText_Questionnaire[] = _("FRAGEBOGEN");
const u8 gText_YouCannotQuitHere[] = _("Beenden hier nicht möglich.");
const u8 gText_SectionMustBeCompleted[] = _("Abschnitt noch abschließen.");
const u8 gText_F700sQuiz[] = _("Quiz von {DYNAMIC 0}");
const u8 gText_Lady[] = _("Lady");
const u8 gText_AfterYouHaveReadTheQuiz[] = _("Drücke den A-Knopf, nachdem");
const u8 gText_QuestionPressTheAButton[] = _("du die Quizfrage gelesen hast.");
const u8 gText_TheQuizAnswerIs[] = _("Wie lautet die Antwort?");
const u8 gText_LikeToQuitQuiz[] = _("Möchtest du dieses Quiz");
const u8 gText_ChallengeQuestionMark[] = _("beenden?");
const u8 gText_IsThisQuizOK[] = _("Ist dieses Quiz o.k.?");
const u8 gText_CreateAQuiz[] = _("Quiz erstellen!");
const u8 gText_SelectTheAnswer[] = _("Wähle die Antwort!");
const u8 gText_LyricsCantBeDeleted[] = _("Phrasenlöschen ist unmöglich!");
const u8 gText_PokemonLeague[] = _("POKéMON LIGA");
const u8 gText_PokemonCenter[] = _("POKéMON-CENTER");
const u8 gText_GetsAPokeBlockQuestion[] = _(" erhält einen {POKEBLOCK}?");
const u8 gText_Coolness[] = _("Coolness ");
const u8 gText_Beauty3[] = _("Schönheit ");
const u8 gText_Cuteness[] = _("Anmut ");
const u8 gText_Smartness[] = _("Klugheit ");
const u8 gText_Toughness[] = _("Stärke ");
const u8 gText_WasEnhanced[] = _("wurde erhöht!");
const u8 gText_NothingChanged[] = _("Keine Veränderung eingetreten!");
const u8 gText_WontEatAnymore[] = _("Es will nicht mehr essen…");
const u8 gText_SaveFailedCheckingBackup[] = _("Speicherfehler! Backup Memory\nwird geprüft. Bitte warten…\n{COLOR RED}“Benötigte Zeit: 1 Minute”");
const u8 gText_BackupMemoryDamaged[] = _("Backup Memory defekt oder interne\nBatterie verbraucht! Weiterspielen\nmöglich, speichern nicht!");
const u8 gText_GamePlayCannotBeContinued[] = _("{COLOR RED}“Spiel fortsetzen nicht möglich.\nZurück zum Titelbildschirm…”");
const u8 gText_CheckCompleted[] = _("Überprüfung beendet.\nNeuer Speicherversuch erfolgt.\nBitte warten…");
const u8 gText_SaveCompleteGameCannotContinue[] = _("Speichern beendet.\n{COLOR RED}“Spiel fortsetzen nicht möglich.\nZurück zum Titelbildschirm.”");
const u8 gText_SaveCompletePressA[] = _("Speichern beendet.\n{COLOR RED}“Bitte A-Knopf drücken.”");
const u8 gText_Ferry[] = _("FÄHRE");
const u8 gText_SecretBase[] = _("GEHEIMBASIS");
const u8 gText_Hideout[] = _("VERSTECK");
const u8 gText_ResetRTCConfirmCancel[] = _("Echtzeituhr zurücksetzen?\nA: Bestätigen, B: Zurück");
const u8 gText_PresentTime[] = _("Aktuelle Uhrzeit im Spiel");
const u8 gText_PreviousTime[] = _("Vorherige Uhrzeit im Spiel");
const u8 gText_PleaseResetTime[] = _("Bitte die Zeit zurückstellen.");
const u8 gText_ClockHasBeenReset[] = _("Die Uhr wurde zurückgestellt. Daten\nwerden gesichert. Bitte warten…");
const u8 gText_SaveCompleted[] = _("Speichern beendet.");
const u8 gText_SaveFailed[] = _("Speichern fehlgeschlagen.");
const u8 gText_NoSaveFileCantSetTime[] = _("Es existiert kein Speicherstand. Uhr-\nzeit kann nicht eingestellt werden.");
const u8 gText_InGameClockUsable[] = _("Das spielinterne Zeiteingabe-\nSystem ist jetzt verfügbar.");
const u8 gText_Slots[] = _("EINARMIGEN BANDITen");
const u8 gText_Roulette[] = _("ROULETTE");
const u8 gText_Good[] = _("Gut");
const u8 gText_VeryGood[] = _("Sehr gut");
const u8 gText_Excellent[] = _("Exzellent");
const u8 gText_SoSo[] = _("Naja");
const u8 gText_Bad[] = _("Schlecht");
const u8 gText_TheWorst[] = _("Ganz mies");
const u8 gText_Spicy2[] = _("scharf");
const u8 gText_Dry2[] = _("trocken");
const u8 gText_Sweet2[] = _("süß");
const u8 gText_Bitter2[] = _("bitter");
const u8 gText_Sour2[] = _("sauer");
const u8 gText_Single[] = _("EINZEL");
const u8 gText_Double[] = _("DOPPEL");
const u8 gText_Jackpot[] = _("Jackpot");
const u8 gText_First[] = _("ersten Preis");
const u8 gText_Second[] = _("zweiten Preis");
const u8 gText_Third[] = _("dritten Preis");
#if OW_POISON_DAMAGE < GEN_4
const u8 gText_PkmnFainted_FldPsn[] = _("{STR_VAR_1} wurde besiegt…\p\n");
#else
const u8 gText_PkmnFainted_FldPsn[] = _("{STR_VAR_1} wurde besiegt…\p\n");
#endif
const u8 gText_Marco[] = _("MARCO");
const u8 gText_TrainerCardName[] = _("NAME ");
const u8 gText_TrainerCardIDNo[] = _("IDNr.");
const u8 gText_TrainerCardMoney[] = _("GELD");
const u8 gText_PokeDollar[] = _("¥"); // Unused
const u8 gText_TrainerCardPokedex[] = _("POKéDEX");
const u8 gText_EmptyString6[] = _("");
const u8 gText_Colon2[] = _(":");
const u8 gText_Points[] = _(" points"); // Unused
const u8 gText_TrainerCardTime[] = _("SPIELZEIT");
const u8 gJPText_BattlePoints[] = _("ゲ-ムポイント"); // Unused. Name presumed, translation is Game Points
const u8 gText_Var1sTrainerCard[] = _("TRAINERPASS von {STR_VAR_1}");
const u8 gText_HallOfFameDebut[] = _("ERSTE RUHMESHALLE:");
const u8 gText_LinkBattles[] = _("KÄMPFE via LINK");
const u8 gText_LinkCableBattles[] = _("KÄMPFE GG. FREUND/E");
const u8 gText_WinsLosses[] = _("S.: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}  N.: {COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}");
const u8 gText_PokemonTrades[] = _("POKéMON-TAUSCH:");
const u8 gText_UnionTradesAndBattles[] = _("KONNEX-TAUSCHE & -KÄMP.:");
const u8 gText_BerryCrush[] = _("BEERENMÜHLE:");
const u8 gText_WaitingTrainerFinishReading[] = _("Der andere TRAINER hat deinen\nTRAINERPASS noch nicht gelesen.");
const u8 gText_PokeblocksWithFriends[] = _("{POKEBLOCK} MIT FREUND/EN:");
const u8 gText_NumPokeblocks[] = _("{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}");
const u8 gText_WonContestsWFriends[] = _("GEW. WETTBEWERBE M. FREUND/EN:");
const u8 gText_BattlePtsWon[] = _("ERHALTENE GEWINNPUNKTE:");
const u8 gText_NumBP[] = _("{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}GP");
const u8 gText_BattleTower[] = _("DUELLTURM");
const u8 gText_WinsStraight[] = _("S.:{COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} IN FOLGE:{COLOR RED}{SHADOW LIGHT_RED}{STR_VAR_2}");
const u8 gText_BattleTower2[] = _("DUELLTURM");
const u8 gText_BattleDome[] = _("KAMPFSTADION");
const u8 gText_BattlePalace[] = _("KAMPFPALAST");
const u8 gText_BattleFactory[] = _("KAMPFFABRIK");
const u8 gText_BattleArena[] = _("KAMPFRING");
const u8 gText_BattlePike[] = _("KAMPFIPITIS");
const u8 gText_BattlePyramid[] = _("KAMPFPYRAMIDE");

ALIGNED(4) const u8 gText_FacilitySingle[] = _("{STR_VAR_1} EINZEL");
ALIGNED(4) const u8 gText_FacilityDouble[] = _("{STR_VAR_1} DOPPEL");
ALIGNED(4) const u8 gText_FacilityMulti[] = _("{STR_VAR_1} MULTI");
ALIGNED(4) const u8 gText_FacilityLink[] = _("{STR_VAR_1} LINK");
ALIGNED(4) const u8 gText_Facility[] = _("{STR_VAR_1}");

const u8 gText_Give[] = _("Geben");
const u8 gText_NoNeed[] = _("Nein");
const u8 gText_ColorLightShadowDarkGray[] = _("{COLOR LIGHT_GRAY}{SHADOW DARK_GRAY}");
const u8 gText_ColorBlue[] = _("{COLOR BLUE}");
const u8 gText_ColorTransparent[] = _("{HIGHLIGHT TRANSPARENT}{COLOR TRANSPARENT}");
const u8 gText_CDot[] = _("C.");
const u8 gText_BDot[] = _("B.");
const u8 gText_AnnouncingResults[] = _("Bekanntgabe der Ergebnisse!");
const u8 gText_PreliminaryResults[] = _("Ergebnisse 1. Durchlauf!");
const u8 gText_Round2Results[] = _("Ergebnisse 2. Durchlauf!");
const u8 gText_ContestantsMonWon[] = _("Sieger ist: {STR_VAR_2} von {STR_VAR_1}!");
const u8 gText_CommunicationStandby[] = _("Verbindung…");
const u8 gText_ColorDarkGray[] = _("{COLOR DARK_GRAY}");
const u8 gText_ColorDynamic6WhiteDynamic5[] = _("{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR6 WHITE DYNAMIC_COLOR5}"); // Unused
const u8 gText_HealthboxNickname[] = _("{HIGHLIGHT DARK_GRAY}");
const u8 gText_EmptySpace2[] = _(" "); // Unused
const u8 gText_HealthboxGender_Male[] = _("{COLOR DYNAMIC_COLOR2}♂");
const u8 gText_HealthboxGender_Female[] = _("{COLOR DYNAMIC_COLOR1}♀");
const u8 gText_HealthboxGender_None[] = _("{COLOR DYNAMIC_COLOR2}");
const u8 gText_Upper[] = _("GROSS");
const u8 gText_Lower[] = _("klein");
const u8 gText_Others[] = _("OTHERS");
const u8 gText_Symbols[] = _("SYMBOLE");
const u8 gText_Register2[] = _("WÄHLEN");
const u8 gText_Exit2[] = _("BEENDEN");
const u8 gText_QuitChatting[] = _("Chat beenden?");
const u8 gText_RegisterTextWhere[] = _("Wo in Liste schreiben?");
const u8 gText_RegisterTextHere[] = _("Hier in Liste schreiben?");
const u8 gText_InputText[] = _("Text schreiben.");
const u8 gText_F700JoinedChat[] = _("{DYNAMIC 0} ist im Chat!");
const u8 gText_F700LeftChat[] = _("{DYNAMIC 0} verließ den Chat.");
const u8 gJPText_PlayersXPokemon[] = _("{DYNAMIC 0}の{DYNAMIC 1}ひきめ:"); // Unused
const u8 gJPText_PlayersXPokmonDoesNotExist[] = _("{DYNAMIC 0}の{DYNAMIC 1}ひきめは いません"); // Unused
const u8 gText_ExitingChat[] = _("Chat wird verlassen…");
const u8 gText_LeaderLeftEndingChat[] = _("LEITER {DYNAMIC 0} verlässt und\nbeendet somit den Chat.");
const u8 gText_RegisteredTextChangedOKToSave[] = _("Der Text in der Liste wurde geändert.\nSoll gespeichert werden?");
const u8 gText_AlreadySavedFile_Chat[] = _("Es gibt bereits einen Spielstand.\nSpielstand überschreiben?");
const u8 gText_SavingDontTurnOff_Chat[] = _("SPEICHERVORGANG…\nGERÄT NICHT AUSSCHALTEN!");
const u8 gText_PlayerSavedGame_Chat[] = _("{DYNAMIC 0} hat das Spiel gespeichert.");
const u8 gText_IfLeaderLeavesChatEnds[] = _("Falls der Leiter den Chat\nverlässt, ist er vorüber, O.K.?");
const u8 gText_Hello[] = _("HALLO");
const u8 gText_Pokemon2[] = _("POKéMON");
const u8 gText_Trade[] = _("TAUSCH");
const u8 gText_Battle[] = _("KAMPF");
const u8 gText_Lets[] = _("AUF");
const u8 gText_Ok[] = _("O.K.!");
const u8 gText_Sorry[] = _("SORRY");
const u8 gText_YaySmileEmoji[] = _("YO{EMOJI_BIGSMILE}");
const u8 gText_ThankYou[] = _("DANKE");
const u8 gText_ByeBye[] = _("TSCHÜSS!");
const u8 gText_PlayerScurriedToCenter[] = _("{PLAYER} scurried to a POKéMON CENTER,\nprotecting the exhausted and fainted\nPOKéMON from further harm…\p");
const u8 gText_PlayerScurriedBackHome[] = _("{PLAYER} scurried back home, protecting\nthe exhausted and fainted POKéMON from\nfurther harm…\p");
const u8 gText_PlayerRegroupCenter[] = _("{PLAYER} scurried to a POKéMON CENTER,\nto regroup and reconsider the battle\nstrategy…\p");
const u8 gText_PlayerRegroupHome[] = _("{PLAYER} scurried back home, to regroup\nand reconsider the battle strategy…\p");
const u8 gText_HatchedFromEgg[] = _("{STR_VAR_1} schlüpfte aus dem EI!");
const u8 gText_NicknameHatchPrompt[] = _("Möchtest du dem geschlüpften\n{STR_VAR_1} einen Kosenamen geben?");
ALIGNED(4) const u8 gText_ReadyPickBerry[] = _("Die BEERENMÜHLE starten?\nBitte wähle eine BEERE aus!\p");
ALIGNED(4) const u8 gText_WaitForAllChooseBerry[] = _("Bitte warte, bis alle Mitspieler\nBEEREn ausgewählt haben.");
ALIGNED(4) const u8 gText_EndedWithXUnitsPowder[] = _("{PAUSE_MUSIC}{PLAY_BGM MUS_LEVEL_UP}Du hast {STR_VAR_1} Einheiten seiden-\nweichen BEERENPUDER erhalten.{RESUME_MUSIC}\pDein Bestand an BEERENPUDER ist\n{STR_VAR_2} Einheiten.\p");
ALIGNED(4) const u8 gText_RecordingGameResults[] = _("Das Resultat wird gespeichert.\nBitte warten!");
ALIGNED(4) const u8 gText_PlayBerryCrushAgain[] = _("Möchtest du erneut die\nBEERENMÜHLE betreiben?");
ALIGNED(4) const u8 gText_YouHaveNoBerries[] = _("Du hast keine BEEREN!\nDas Spiel wird abgebrochen.");
ALIGNED(4) const u8 gText_MemberDroppedOut[] = _("Ein Mitspieler hat abgebrochen.\nDas Spiel wird beendet.");
ALIGNED(4) const u8 gText_TimesUpNoGoodPowder[] = _("Die Zeit ist abgelaufen!\pEs konnte kein guter BEERENPUDER\nhergestellt werden…\p");
ALIGNED(4) const u8 gText_CommunicationStandby2[] = _("Verbindung…");
ALIGNED(4) const u8 gText_1DotBlueF700[] = _("1. {COLOR BLUE}{SHADOW LIGHT_BLUE}{DYNAMIC 0}");
ALIGNED(4) const u8 gText_1DotF700[] = _("1. {DYNAMIC 0}");
ALIGNED(4) const u8 gText_SpaceTimes2[] = _("-mal");
ALIGNED(4) const u8 gText_XDotY[] = _("{STR_VAR_1},{STR_VAR_2}");
ALIGNED(4) const u8 gText_Var1Berry[] = _("{STR_VAR_1}BEERE");
ALIGNED(4) const u8 gText_TimeColon[] = _("Zeit:");
ALIGNED(4) const u8 gText_PressingSpeed[] = _("Mahltempo:");
ALIGNED(4) const u8 gText_Silkiness[] = _("Feinheit:");
ALIGNED(4) const u8 gText_StrVar1[] = _("{STR_VAR_1}");
ALIGNED(4) const u8 gText_SpaceMin[] = _("MIN. ");
ALIGNED(4) const u8 gText_XDotY2[] = _("{STR_VAR_1},{STR_VAR_2}");
ALIGNED(4) const u8 gText_SpaceSec[] = _("SEK.");
ALIGNED(4) const u8 gText_XDotY3[] = _("{STR_VAR_1},{STR_VAR_2}");
ALIGNED(4) const u8 gText_TimesPerSec[] = _("-mal/SEK.");
ALIGNED(4) const u8 gText_Var1Percent[] = _("{STR_VAR_1} %");
ALIGNED(4) const u8 gText_PressesRankings[] = _("Platz nach Druckvorgängen");
ALIGNED(4) const u8 gText_CrushingResults[] = _("Mahlresultat");
ALIGNED(4) const u8 gText_NeatnessRankings[] = _("Beschaffenheits-Platzierung");
ALIGNED(4) const u8 gText_CoopRankings[] = _("Kooperations-Platzierung");
ALIGNED(4) const u8 gText_PressingPowerRankings[] = _("Druckkraft-Platzierung");
const u8 gText_BerryCrush2[] = _("BEERENMÜHLE");
const u8 gText_PressingSpeedRankings[] = _("Drucktempo-Platzierung");
const u8 gText_Var1Players[] = _("{STR_VAR_1} SPIELER");
const u8 gText_SymbolsEarned[] = _("Gew. Symbole");
const u8 gText_BattleRecord[] = _("Video");
const u8 gText_BattlePoints[] = _("Gewinnpunkte");
const u8 gText_UnusedCancel[] = _("CANCEL"); // Unused
const u8 gText_EmptyString7[] = _("");
const u8 gText_CheckFrontierMap[] = _("KAMPFZONENKARTE ansehen");
const u8 gText_CheckTrainerCard[] = _("TRAINERPASS ansehen");
const u8 gText_ViewRecordedBattle[] = _("Kampfaufzeichnung ansehen");
const u8 gText_PutAwayFrontierPass[] = _("KAMPFZONENPASS wegstecken");
const u8 gText_CurrentBattlePoints[] = _("Aktuelle Anzahl der Gewinnpunkte");
const u8 gText_CollectedSymbols[] = _("Die erhaltenen Symbole");
const u8 gText_BattleTowerAbilitySymbol[] = _("Duellturm - Anlagesymbol");
const u8 gText_BattleDomeTacticsSymbol[] = _("Kampfstadion - Taktiksymbol");
const u8 gText_BattlePalaceSpiritsSymbol[] = _("Kampfpalast - Seelensymbol");
const u8 gText_BattleArenaGutsSymbol[] = _("Kampfring - Grobsymbol");
const u8 gText_BattleFactoryKnowledgeSymbol[] = _("Kampffabrik - Kenntnissymbol");
const u8 gText_BattlePikeLuckSymbol[] = _("Kampfipitis - Lossymbol");
const u8 gText_BattlePyramidBraveSymbol[] = _("Kampfpyramide - Bravursymbol");
const u8 gText_ThereIsNoBattleRecord[] = _("Es gibt keine Kampfaufzeichnung.");
const u8 gText_BattleTower3[] = _("DUELLTURM");
const u8 gText_BattleDome2[] = _("KAMPFSTADION");
const u8 gText_BattlePalace2[] = _("KAMPFPALAST");
const u8 gText_BattleArena2[] = _("KAMPFRING");
const u8 gText_BattleFactory2[] = _("KAMPFFABRIK");
const u8 gText_BattlePike2[] = _("KAMPFIPITIS");
const u8 gText_BattlePyramid2[] = _("KAMPFPYRAMIDE");
const u8 gText_BattleTowerDesc[] = _("Kämpfe, bis du die Spitze erreichst!\nDeine Anlagen werden geprüft.");
const u8 gText_BattleDomeDesc[] = _("Gewinne das Turnier!\nDeine Taktik wird geprüft.");
const u8 gText_BattlePalaceDesc[] = _("Achte auf deine POKéMON!\nDeine Seele wird geprüft.");
const u8 gText_BattleArenaDesc[] = _("Gewinne im Team!\nDeine Grobheit wird geprüft.");
const u8 gText_BattleFactoryDesc[] = _("Gewinne mit Leih-POKéMON!\nDeine Kenntnisse werden geprüft.");
const u8 gText_BattlePikeDesc[] = _("Wähle einen der drei Pfade aus!\nDein Los wird geprüft.");
const u8 gText_BattlePyramidDesc[] = _("Forsche dich ganz nach oben!\nDeine Bravur wird geprüft.");
const u8 gText_Powder[] = _("PUDER");
const u8 gText_BerryPickingRecords[] = _("REKORDE für BEERENERNTE mit DODRI");
const u8 gText_BerriesPicked[] = _("Geerntete BEEREn:");
const u8 gText_BestScore[] = _("Höchstpunktzahl:");
const u8 gText_BerriesInRowFivePlayers[] = _("Geerntete BEEREn in Folge bei\nfünf Spielern:");
const u8 gText_BerryPickingResults[] = _("Resultat der BEERENERNTE!");
const u8 gText_10P30P50P50P[] = _("{CLEAR_TO 0x03}10Pkt.{CLEAR_TO 0x2B}30Pkt.{CLEAR_TO 0x53}50Pkt.{CLEAR_TO 0x77}{EMOJI_MINUS}50Pkt.");
const u8 gText_AnnouncingRankings[] = _("Die Platzierungen!");
const u8 gText_AnnouncingPrizes[] = _("Die Preise!");
const u8 gText_1Colon[] = _("1:");
const u8 gText_2Colon[] = _("2:");
const u8 gText_3Colon[] = _("3:");
const u8 gText_4Colon[] = _("4:");
const u8 gText_5Colon[] = _("5:");
const u8 gText_FirstPlacePrize[] = _("Der Erstplatzierte erhält:\n{DYNAMIC 0}!");
const u8 gText_CantHoldAnyMore[] = _("Mehr tragen unmöglich.");
const u8 gText_FilledStorageSpace[] = _("Der Lagerplatz wurde aufgebraucht.");
const u8 gText_WantToPlayAgain[] = _("Erneut spielen?");
const u8 gText_SomeoneDroppedOut[] = _("Irgendjemand hat abgebrochen!\nVerbindung wird abgebrochen!");
const u8 gText_SpacePoints[] = _(" Punkte");
const u8 gText_CommunicationStandby3[] = _("Verbindung…");
const u8 gText_SpacePoints2[] = _(" Punkte");
const u8 gText_SpaceTimes3[] = _("-mal");
const u8 gText_PkmnJumpRecords[] = _("REKORDE für POKéMON-SPRUNG");
const u8 gText_JumpsInARow[] = _("Sprünge in Folge:");
const u8 gText_BestScore2[] = _("Höchstpunktzahl:");
const u8 gText_ExcellentsInARow[] = _("FAMOS in Folge:");
const u8 gText_AwesomeWonF701F700[] = _("Tolle Leistung! Du hast\n{DYNAMIC 1} {DYNAMIC 0} gewonnen!");
const u8 gText_FilledStorageSpace2[] = _("Kein Platz mehr!");
const u8 gText_CantHoldMore[] = _("Mehr tragen unmöglich.");
const u8 gText_WantToPlayAgain2[] = _("Erneut spielen?");
const u8 gText_SomeoneDroppedOut2[] = _("Irgendjemand hat abgebrochen!\nVerbindung wird abgebrochen!");
const u8 gText_CommunicationStandby4[] = _("Verbindung…");
const u8 gText_LinkContestResults[] = _("Linkwettbewerbsergebnis v. {PLAYER}");
const u8 gText_1st[] = _("1. ");
const u8 gText_2nd[] = _("2. ");
const u8 gText_3rd[] = _("3. ");
const u8 gText_4th[] = _("4. ");
const u8 gText_Friend[] = _("Friend");
const u8 gText_Pokemon3[] = _("POKeMON"); // Unused
const u8 gJPText_MysteryGift[] = _("ふしぎなもらいもの");
const u8 gJPText_DecideStop[] = _("{A_BUTTON}けってい {B_BUTTON}やめる");
const u8 gJPText_ReceiveMysteryGiftWithEReader[] = _("カードeリーダー{PLUS}　で\nふしぎなもらいものを　よみこみます");
const u8 gJPText_SelectConnectFromEReaderMenu[] = _("カードeリーダー{PLUS}の　メニューから\n‘つうしん'を　えらび");
const u8 gJPText_SelectConnectWithGBA[] = _("‘ゲームボーイアドバンスとつうしん'\nを　せんたく　してください");
const u8 gJPText_SelectConnectAndPressA[] = _("カードeリーダー{PLUS}の　‘つうしん'を\nえらんで　Aボタンを　おしてください"); // Unused
const u8 gJPText_LinkIsIncorrect[] = _("せつぞくが　まちがっています");
const u8 gJPText_CardReadingHasBeenHalted[] = _("カードの　よみこみを\nちゅうし　しました");
const u8 gJPText_UnableConnectWithEReader[] = _("カードeリーダー{PLUS}と\nつうしん　できません"); // Unused
const u8 gJPText_Connecting[] = _("つうしん　ちゅう　です");
const u8 gJPText_ConnectionErrorCheckLink[] = _("つうしん　エラーです\nせつぞくを　たしかめて　ください");
const u8 gJPText_ConnectionErrorTryAgain[] = _("つうしん　エラーです\nはじめから　やりなおして　ください"); // Link error
const u8 gJPText_AllowEReaderToLoadCard[] = _("カードeリーダー{PLUS}　に\nカードを　よみこませて　ください");
const u8 gJPText_ConnectionComplete[] = _("つうしん　しゅうりょう！");
const u8 gJPText_NewTrainerHasComeToHoenn[] = _("あらたな　トレーナーが\nホウエンに　やってきた！");
const u8 gJPText_PleaseWaitAMoment[] = _("しばらく　おまちください");
const u8 gJPText_WriteErrorUnableToSaveData[] = _("かきこみ　エラー　です\nデータが　ほぞん　できませんでした");
const u8 gText_SingleBattleRoomResults[] = _("Einzelkampfraumergebnis von {PLAYER}");
const u8 gText_DoubleBattleRoomResults[] = _("Doppelkampfraumergebnis von {PLAYER}");
const u8 gText_MultiBattleRoomResults[] = _("Multikampfraumergebnis von {PLAYER}");
const u8 gText_LinkMultiBattleRoomResults[] = _("Linkmultikampfraumergebnis von {PLAYER}");
const u8 gText_SingleBattleTourneyResults[] = _("Einzelturnierkampfergebnis von {PLAYER}");
const u8 gText_DoubleBattleTourneyResults[] = _("Doppelturnierkampfergebnis von {PLAYER}");
const u8 gText_SingleBattleHallResults[] = _("Einzelaufsichtshallenergebnis v. {PLAYER}");
const u8 gText_DoubleBattleHallResults[] = _("Doppelaufsichtshallenergebnis v. {PLAYER}");
const u8 gText_BattleChoiceResults[] = _("Kampfbahnergebnis von {PLAYER}");
const u8 gText_SetKOTourneyResults[] = _("K.O.-Teamturnierergebnis von {PLAYER}");
const u8 gText_BattleSwapSingleResults[] = _("Wechselkampfeinzelergebnis von {PLAYER}");
const u8 gText_BattleSwapDoubleResults[] = _("Wechselkampfdoppelergebnis von {PLAYER}");
const u8 gText_BattleQuestResults[] = _("Kampfforschungsergebnis von {PLAYER}");
// const u8 gText_Lv502[] = _("Lv. 50");
// const u8 gText_OpenLv[] = _("O. KÄMPFE");
const u8 gText_WinStreak[] = _("Siegesserie: {STR_VAR_1}");
const u8 gText_Current[] = _("MOMENT.");
const u8 gText_Record[] = _("REKORD");
const u8 gText_Prev[] = _("VORHER");
const u8 gText_RentalSwap[] = _("Leih/Wechsel");
const u8 gText_Total[] = _("Gesamt");
const u8 gText_ClearStreak[] = _("Erfolgsserie: {STR_VAR_1}");
const u8 gText_Championships[] = _("Gesamtgewinne: {STR_VAR_1}");
const u8 gText_RoomsCleared[] = _("Absolv. Räume: {STR_VAR_1}");
const u8 gText_TimesCleared[] = _("Erf. Teilnahmen: {STR_VAR_1}");
const u8 gText_KOsInARow[] = _("K.O.-Serie: {STR_VAR_1}");
const u8 gText_TimesVar1[] = _("Anzahl: {STR_VAR_1}");
const u8 gText_FloorsCleared[] = _("Abs. Eb.: {STR_VAR_1}");

// ALIGNED(4) const u8 gText_RecordsLv50[] = _("Lv. 50");
// ALIGNED(4) const u8 gText_RecordsOpenLevel[] = _("OFFENE KÄMPFE");
ALIGNED(4) const u8 gText_FrontierFacilityWinStreak[] = _("Siegesserie: {STR_VAR_2}");
ALIGNED(4) const u8 gText_FrontierFacilityClearStreak[] = _("Erfolgsserie: {STR_VAR_2}");
ALIGNED(4) const u8 gText_FrontierFacilityRoomsCleared[] = _("Absolv. Räume: {STR_VAR_2}");
ALIGNED(4) const u8 gText_FrontierFacilityKOsStreak[] = _("K.O.-Serie: {STR_VAR_2}");
ALIGNED(4) const u8 gText_FrontierFacilityFloorsCleared[] = _("Abs. Eb.: {STR_VAR_2}");
ALIGNED(4) const u8 gText_123Dot[][3] = {_("1."), _("2."), _("3.")};
const u8 gText_FrontierFacilityTotalCaughtSpeciesBanned[] = _(" and {STR_VAR_2} of the POKéMON species\nyou caught are inelegible");
const u8 gText_FrontierFacilityIncluding[] = _(".\pThese include ");
const u8 gText_FrontierFacilityAreInelegible[] = _(" are inelegible");

const u8 gText_SavingDontTurnOff2[] = _("SPEICHERVORGANG…\nDAS GERÄT NICHT AUSSCHALTEN!");
const u8 gText_BlenderMaxSpeedRecord[] = _("BEERENMIXER\nMAXIMALTEMPO-REKORD!");
const u8 gText_234Players[] = _("2 SPIELER\n3 SPIELER\n4 SPIELER");
const u8 gText_YesNo[] = _("JA\nNEIN");
const u8 gText_SelectorArrow3[] = _("▶");
const u8 gText_Peekaboo[] = _("PRÜFBLICK");
const u8 gText_CommErrorCheckConnections[] = _("Verbindungsfehler…\nÜberprüfe bitte alle Verbindungen\nund schalte das Gerät AUS und wieder EIN.");
const u8 gText_CommErrorEllipsis[] = _("Verbindungsfehler…");
const u8 gText_MoveCloserToLinkPartner[] = _("Verkürze die Distanz zum Mitspieler.\nVermeide Hindernisse zum Mitspieler.");
const u8 gText_ABtnRegistrationCounter[] = _("A-Knopf: Rezeption");
const u8 gText_ABtnTitleScreen[] = _("A-Knopf: Titelbildschirm");
const u8 gText_NumPlayerLink[] = _("{STR_VAR_1}SP-LINK");
const u8 gText_BronzeCard[] = _("BRONZE");
const u8 gText_CopperCard[] = _("KUPFERROT");
const u8 gText_SilverCard[] = _("SILBER");
const u8 gText_GoldCard[] = _("GOLD");
const u8 gText_Day[] = _("TAG");
const u8 gText_Colon3[] = _(":");
const u8 gText_Confirm2[] = _("O.K.");
const u8 gText_Days[] = _("Tage"); // Unused
const u8 gText_TimeColon2[] = _("ZEIT"); // Unused
const u8 gText_GameTime[] = _("Spielzeit"); // Unused
const u8 gText_RTCTime[] = _("Echtzeituhr"); // Unused
const u8 gText_UpdatedTime[] = _("Aktualisierte Zeit"); // Unused
const u8 gText_MenuPokedex[] = _("POKéDEX");
const u8 gText_MenuPokemon[] = _("POKéMON");
const u8 gText_MenuBag[] = _("BEUTEL");
const u8 gText_MenuPokenav[] = _("POKéNAV");
const u8 gText_MenuPlayer[] = _("{PLAYER}");
const u8 gText_MenuSave[] = _("SICHERN");
const u8 gText_MenuOption[] = _("OPTION.");
const u8 gText_MenuExit[] = _("BEENDEN");
const u8 gText_MenuRetire[] = _("SCHLUSS");
const u8 gText_MenuRest[] = _("AUSRUHEN");
const u8 gText_MenuDexNav[] = _("DEXNAV");
const u8 gText_SafariBallStock[] = _("SAFARIBÄLLE\nVorrat: {STR_VAR_1}");
const u8 gText_BattlePyramidFloor[] = _("Kampfpyramide\n{STR_VAR_1}");
const u8 gText_Floor1[] = _("Ebene 1");
const u8 gText_Floor2[] = _("Ebene 2");
const u8 gText_Floor3[] = _("Ebene 3");
const u8 gText_Floor4[] = _("Ebene 4");
const u8 gText_Floor5[] = _("Ebene 5");
const u8 gText_Floor6[] = _("Ebene 6");
const u8 gText_Floor7[] = _("Ebene 7");
const u8 gText_Peak[] = _("Spitze");
const u8 gText_LinkStandby2[] = _("Verbindung…\n… … B-Knopf: Abbrechen");
const u8 gText_PressAToLoadEvent[] = _("Lade Geschehen mit A-Knopf.\n… … B-Knopf: Abbrechen");
const u8 gText_LoadingEvent[] = _("Geschehen wird geladen.");
const u8 gText_DontRemoveCableTurnOff[] = _("Verbindungskabel nicht entfernen!\nDie Geräte nicht ausschalten!");
const u8 gText_EventSafelyLoaded[] = _("Geschehen ist erfolgreich geladen.");
const u8 gText_LoadErrorEndingSession[] = _("Fehler beim Laden!\nVorgang wird abgebrochen.");
const u8 gJPText_Player[] = _("プレイヤー"); // Unused
const u8 gJPText_Sama[] = _("さま"); // Unused
const u8 gText_DexHoenn[] = _("HOENN");
const u8 gText_DexNational[] = _("NATIONALER");
const u8 gText_PokedexDiploma[] = _("Spieler: {CLEAR 0x10}{COLOR RED}{SHADOW LIGHT_RED}{PLAYER}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n\n{STR_VAR_1} POKéDEX\nDieses Dokument bescheinigt\ndie erfolgreiche Vervoll-\nständigung des POKéDEX.\n\n{CLEAR_TO 0x42}{COLOR RED}{SHADOW LIGHT_RED}GAME FREAK");
const u8 gJPText_GameFreak[] = _("{COLOR RED}{SHADOW LIGHT_RED}ゲ-ムフリ-ク"); // Unused
const u8 gText_DiplomaEmpty[] = _("{COLOR RED}{SHADOW LIGHT_RED}"); // Unused
const u8 gText_Hoenn[] = _("HOENN");
const u8 gText_OhABite[] = _("Oh! Da hat etwas angebissen!");
const u8 gText_PokemonOnHook[] = _("Du hast ein POKéMON am Haken!{PAUSE_UNTIL_PRESS}");
const u8 gText_NotEvenANibble[] = _("Nicht mal ein klitzekleines Knabbern…{PAUSE_UNTIL_PRESS}");
const u8 gText_ItGotAway[] = _("Es ist entkommen…{PAUSE_UNTIL_PRESS}");
const u8 gText_XWillBeSentToY[] = _("{STR_VAR_2} wird\n{STR_VAR_1} zugesandt.");
const u8 gText_ByeByeVar1[] = _("Tschüss, {STR_VAR_2}!");
const u8 gText_XSentOverY[] = _("{STR_VAR_1} versandte {STR_VAR_3}.");
const u8 gText_TakeGoodCareOfX[] = _("Kümmere dich gut um {STR_VAR_3}!");

// Easy chat group names
const u8 gEasyChatGroupName_Pokemon[] = _("POKéMON");
const u8 gEasyChatGroupName_Trainer[] = _("TRAINER");
const u8 gEasyChatGroupName_Status[] = _("STATUS");
const u8 gEasyChatGroupName_Battle[] = _("BATTLE");
const u8 gEasyChatGroupName_Greetings[] = _("GREETINGS");
const u8 gEasyChatGroupName_People[] = _("PEOPLE");
const u8 gEasyChatGroupName_Voices[] = _("VOICES");
const u8 gEasyChatGroupName_Speech[] = _("SPEECH");
const u8 gEasyChatGroupName_Endings[] = _("ENDINGS");
const u8 gEasyChatGroupName_Feelings[] = _("FEELINGS");
const u8 gEasyChatGroupName_Conditions[] = _("CONDITIONS");
const u8 gEasyChatGroupName_Actions[] = _("ACTIONS");
const u8 gEasyChatGroupName_Lifestyle[] = _("LIFESTYLE");
const u8 gEasyChatGroupName_Hobbies[] = _("HOBBIES");
const u8 gEasyChatGroupName_Time[] = _("TIME");
const u8 gEasyChatGroupName_Misc[] = _("MISC.");
const u8 gEasyChatGroupName_Adjectives[] = _("ADJECTIVES");
const u8 gEasyChatGroupName_Events[] = _("EVENTS");
const u8 gEasyChatGroupName_Move1[] = _("MOVE 1");
const u8 gEasyChatGroupName_Move2[] = _("MOVE 2");
const u8 gEasyChatGroupName_TrendySaying[] = _("TRENDY SAYING");
const u8 gEasyChatGroupName_Pokemon2[] = _("POKéMON2");

const u8 gText_ThreeQuestionMarks[] = _("???");
const u8 gText_MaxHP[] = _("MAX. KP");
const u8 gText_Attack[] = _("ANGRIFF");
const u8 gText_Defense[] = _("VERT.");
const u8 gText_Speed[] = _("INIT.");
const u8 gText_SpAtk[] = _("SP. ANG.");
const u8 gText_SpDef[] = _("SP. VER.");
const u8 gText_Plus[] = _("{PLUS}");
const u8 gText_Dash[] = _("-");
const u8 gText_FromSpace[] = _("Von ");
const u8 gText_MixingRecords[] = _("Rekorddaten-Austausch…");
const u8 gText_RecordMixingComplete[] = _("Rekorddaten-Austausch beendet.\nVielen Dank für deine Geduld.");
const u8 gText_YourName[] = _("DEIN NAME?");
const u8 gText_BoxName[] = _("NAME DER BOX?");
const u8 gText_PkmnsNickname[] = _("Kosename f. {STR_VAR_1}");
const u8 gText_TellHimTheWords[] = _("Sag ihm die Worte!");
const u8 gText_MoveOkBack[] = _("{DPAD_NONE}BEWEGEN {A_BUTTON}O.K. {B_BUTTON}ZURÜCK");
const u8 gText_RentalPkmn2[] = _("LEIH-POKéMON");
const u8 gText_SelectFirstPkmn[] = _("Wähle das erste POKéMON!");
const u8 gText_SelectSecondPkmn[] = _("Wähle das zweite POKéMON!");
const u8 gText_SelectThirdPkmn[] = _("Wähle das dritte POKéMON!");
const u8 gText_Rent[] = _("VERLEIH");
const u8 gText_Summary[] = _("BERICHT");
const u8 gText_Others2[] = _("ANDERE");
const u8 gText_Deselect[] = _("ENTFERNEN");
const u8 gText_TheseThreePkmnOkay[] = _("Diese drei PKMN auswählen?");
const u8 gText_Yes2[] = _("JA");
const u8 gText_No2[] = _("NEIN");
const u8 gText_CantSelectSamePkmn[] = _("Wahl desselben {PKMN} unmögl.");
const u8 gText_PkmnSwap[] = _("POKéMON-WECHSEL");
const u8 gText_SelectPkmnToSwap[] = _("Wähle das zu wechselnde {PKMN}.");
const u8 gText_SelectPkmnToAccept[] = _("Bestätige das gewählte {PKMN}.");
const u8 gText_Swap[] = _("WECHSEL");
const u8 gText_Summary2[] = _("BERICHT");
const u8 gText_Rechoose[] = _("NEUWAHL");
const u8 gText_QuitSwapping[] = _("Wechseln beenden?");
const u8 gText_Yes3[] = _("JA");
const u8 gText_No3[] = _("NEIN");
const u8 gText_PkmnForSwap[] = _("WECHSELPKMN");
const u8 gText_Cancel3[] = _("ABBRUCH");
const u8 gText_Swap2[] = _("SWAP"); // Unused
const u8 gText_Accept[] = _("ACCEPT"); // Unused
const u8 gText_AcceptThisPkmn[] = _("Dieses {PKMN} annehmen?");
const u8 gText_4Spaces[] = _("    "); // Unused
const u8 gText_SamePkmnInPartyAlready[] = _("Selbes {PKMN} bereits im Team.");
// const u8 gText_DecimalPoint[] = _(".");
const u8 gText_SavingPlayer[] = _("SPIELER");
const u8 gText_SavingBadges[] = _("ORDEN");
const u8 gText_SavingPokedex[] = _("POKéDEX");
const u8 gText_SavingTime[] = _("SPIELZEIT");
const u8 gText_WirelessCommStatus[] = _("Drahtlose Verbindungen:");
const u8 gText_PeopleTrading[] = _("Tauscher:");
const u8 gText_PeopleBattling[] = _("Kämpfer:");
const u8 gText_PeopleInUnionRoom[] = _("Begegnungen im KONNEX-KLUB:");
const u8 gText_PeopleCommunicating[] = _("Eingegangene Verbindungen:");
const u8 gText_F700Players[] = _("{DYNAMIC 0} SPIELER");
const u8 gText_F701Players[] = _("{DYNAMIC 1} SPIELER");
const u8 gText_F702Players[] = _("{DYNAMIC 2} SPIELER");
const u8 gText_F703Players[] = _("{DYNAMIC 3} SPIELER");

const u8 *const gTextTable_Players[] = {
    gText_F700Players,
    gText_F701Players,
    gText_F702Players,
    gText_F703Players
};

ALIGNED(4) const u8 gText_WonderCards[] = _("WUNDERKARTEn");
ALIGNED(4) const u8 gText_WonderNews[] = _("WUNDERNEWS");
ALIGNED(4) const u8 gText_WirelessCommunication[] = _("DRAHTLOSE VERBINDUNGEN");
ALIGNED(4) const u8 gText_Friend2[] = _("FREUND");
ALIGNED(4) const u8 gText_Exit3[] = _("ZURÜCK");
ALIGNED(4) const u8 gText_Receive[] = _("ERHALTEN");
ALIGNED(4) const u8 gText_Send[] = _("SENDEN");
ALIGNED(4) const u8 gText_Toss[] = _("MÜLL");
ALIGNED(4) const u8 gText_VarietyOfEventsImportedWireless[] = _("Einige Geschehen werden über die\nDrahtlose Verbindung importiert.");
ALIGNED(4) const u8 gText_WonderCardsInPossession[] = _("Lies die WUNDERKARTEn in\ndeinem Besitz.");
ALIGNED(4) const u8 gText_ReadNewsThatArrived[] = _("Lies die NEWS!");
ALIGNED(4) const u8 gText_ReturnToTitle[] = _("Zurück zum Titelbildschirm.");
ALIGNED(4) const u8 gText_DontHaveCardNewOneInput[] = _("Du hast keine WUNDERKARTE,\nalso wird eine neue KARTE angelegt.");
ALIGNED(4) const u8 gText_DontHaveNewsNewOneInput[] = _("Du hast keine WUNDERNEWS,\nalso werden neue NEWS angelegt.");
ALIGNED(4) const u8 gText_WhereShouldCardBeAccessed[] = _("Wo soll auf die WUNDERKARTE\nzugegriffen werden?");
ALIGNED(4) const u8 gText_WhereShouldNewsBeAccessed[] = _("Wo soll auf die WUNDERNEWS\nzugegriffen werden?");
ALIGNED(4) const u8 gText_CommunicationStandbyBButtonCancel[] = _("Communication standby…\nB Button: Cancel"); // Unused
ALIGNED(4) const u8 gText_Communicating[] = _("Übertragung… ");
ALIGNED(4) const u8 gText_CommunicationCompleted[] = _("Verbindung vollständig.");
ALIGNED(4) const u8 gText_CommunicationError[] = _("Übertragungsfehler.");
ALIGNED(4) const u8 gText_CommunicationCanceled[] = _("Die Verbindung wurde abgebrochen.");
ALIGNED(4) const u8 gText_ThrowAwayWonderCard[] = _("Soll die WUNDERKARTE weggeworfen\nund die neue Karte benutzt werden?");
ALIGNED(4) const u8 gText_HaventReceivedCardsGift[] = _("Geschenk dieser Karte noch nicht\nerhalten! Neue Karte benutzen?");
ALIGNED(4) const u8 gText_WonderCardReceivedFrom[] = _("Eine WUNDERKARTE von {STR_VAR_1}\nerhalten.");
ALIGNED(4) const u8 gText_WonderNewsReceivedFrom[] = _("Ein WUNDERNEWS-Item von {STR_VAR_1}\nerhalten.");
ALIGNED(4) const u8 gText_WonderCardReceived[] = _("Eine neue WUNDERKARTE erhalten.");
ALIGNED(4) const u8 gText_WonderNewsReceived[] = _("Ein neues WUNDERNEWS-Item erhalten.");
ALIGNED(4) const u8 gText_NewStampReceived[] = _("Einen neuen STEMPEL erhalten.");
ALIGNED(4) const u8 gText_NewTrainerReceived[] = _("Ein neuer TRAINER ist eingetroffen.");
ALIGNED(4) const u8 gText_AlreadyHadCard[] = _("Diese WUNDERKARTE hattest\ndu bereits!");
ALIGNED(4) const u8 gText_AlreadyHadNews[] = _("Dieses WUNDERNEWS-Item\nhattest du bereits.");
ALIGNED(4) const u8 gText_AlreadyHadStamp[] = _("Diesen STEMPEL hattest\ndu bereits.");
ALIGNED(4) const u8 gText_NoMoreRoomForStamps[] = _("Es gibt keinen Platz mehr, um\nSTEMPEL hinzuzufügen.");
ALIGNED(4) const u8 gText_RecordUploadedViaWireless[] = _("Dein Rekord wurde DRAHTLOS\nübertragen.");
ALIGNED(4) const u8 gText_CantAcceptCardFromTrainer[] = _("Du kannst von diesem TRAINER\nkeine WUNDERKARTE annehmen.");
ALIGNED(4) const u8 gText_CantAcceptNewsFromTrainer[] = _("Du kannst von diesem TRAINER\nkeine WUNDERNEWS annehmen.");
ALIGNED(4) const u8 gText_NothingSentOver[] = _("Es wurde nichts übertragen…");
ALIGNED(4) const u8 gText_WhatToDoWithCards[] = _("Was möchtest du mit den\nWUNDERKARTEn anstellen?");
ALIGNED(4) const u8 gText_WhatToDoWithNews[] = _("Was möchtest du mit den\nWUNDERNEWS anstellen?");
ALIGNED(4) const u8 gText_SendingWonderCard[] = _("WUNDERKARTE wird übertragen…");
ALIGNED(4) const u8 gText_SendingWonderNews[] = _("WUNDERNEWS werden übertragen…");
ALIGNED(4) const u8 gText_WonderCardSentTo[] = _("Deine WUNDERKARTE wurde zu\n{STR_VAR_1} übertragen.");
ALIGNED(4) const u8 gText_WonderNewsSentTo[] = _("Deine WUNDERNEWS wurden zu\n{STR_VAR_1} übertragen.");
ALIGNED(4) const u8 gText_StampSentTo[] = _("{STR_VAR_1} erhält einen STEMPEL.");
ALIGNED(4) const u8 gText_GiftSentTo[] = _("{STR_VAR_1} erhält GESCHEHEN.");
ALIGNED(4) const u8 gText_OtherTrainerHasCard[] = _("Der andere TRAINER hat diese\nWUNDERKARTE bereits.");
ALIGNED(4) const u8 gText_OtherTrainerHasNews[] = _("Der andere TRAINER hat diese\nWUNDERNEWS bereits.");
ALIGNED(4) const u8 gText_OtherTrainerHasStamp[] = _("Der andere TRAINER hat diesen\nSTEMPEL bereits.");
ALIGNED(4) const u8 gText_OtherTrainerCanceled[] = _("Der andere TRAINER hat die\nVerbindung abgebrochen.");
ALIGNED(4) const u8 gText_CantSendGiftToTrainer[] = _("Du kannst diesem TRAINER kein\nGEHEIMGESCHEHEN übertragen.");
ALIGNED(4) const u8 gText_IfThrowAwayCardEventWontHappen[] = _("Wenn du die KARTE weg-\nwirfst, passiert nichts! O.K.?");
ALIGNED(4) const u8 gText_OkayToDiscardNews[] = _("Soll dieses NEWS-Item weg-\ngeworfen werden?");
ALIGNED(4) const u8 gText_HaventReceivedGiftOkayToDiscard[] = _("Kein GEHEIMGESCHEHEN!\nTrotzdem wegwerfen?");
ALIGNED(4) const u8 gText_DataWillBeSaved[] = _("Daten werden gesichert.\nBitte warten…");
ALIGNED(4) const u8 gText_SaveCompletedPressA[] = _("Speichern beendet.\nBitte A-Knopf drücken.");
ALIGNED(4) const u8 gText_WonderCardThrownAway[] = _("WUNDERKARTE weggeworfen!");
ALIGNED(4) const u8 gText_WonderNewsThrownAway[] = _("WUNDERNEWS weggeworfen!");
ALIGNED(4) const u8 gText_MysteryGift[] = _("GEHEIMGESCHEHEN");
ALIGNED(4) const u8 gText_PickOKExit[] = _("{DPAD_UPDOWN}WAHL {A_BUTTON}O.K. {B_BUTTON}BEENDEN");
ALIGNED(4) const u8 gText_PickOKCancel[] = _("{DPAD_UPDOWN}WAHL {A_BUTTON}O.K. {B_BUTTON}ZURÜCK");
const u8 gText_PlayersBattleResults[] = _("KAMPFERGEBNISSE von {PLAYER}");
const u8 gText_TotalRecordWLD[] = _("GESAMT-REKORD S.:{STR_VAR_1} N.:{STR_VAR_2} P.:{STR_VAR_3}");
const u8 gText_WinLoseDraw[] = _("{CLEAR_TO 0x50}SIEG{CLEAR_TO 0x79}NIEDER.{CLEAR_TO 0xB0}PATT");
const u8 gText_CommunicationStandby5[] = _("Verbindung…");
const u8 gText_QuitTheGame[] = _("Spiel beenden?");
const u8 gText_YouveGot9999Coins[] = _("Du hast 9999 MÜNZEn.");
const u8 gText_YouveRunOutOfCoins[] = _("Du hast keine MÜNZEn mehr.\nGame over!");
const u8 gText_YouDontHaveThreeCoins[] = _("Du hast keine drei MÜNZEn.");
const u8 gText_ReelTimeHelp[] = _("REEL TIME\nHier hast du die Chance, in\nBlitzesschnelle zu gewinnen!\nDie Glücksrunde wiederholt\nsich, so oft die Zahl anzeigt.\nSie endet mit einem BIG BONUS.");
const u8 gDaycareText_GetAlongVeryWell[] = _("The two seem to get along\nvery well.");
const u8 gDaycareText_GetAlong[] = _("The two seem to get along.");
const u8 gDaycareText_DontLikeOther[] = _("The two don't seem to like\neach other much.");
const u8 gDaycareText_PlayOther[] = _("The two prefer to play with other\nPOKéMON than each other.");
const u8 gText_NewLine2[] = _("\n");
const u8 gText_Exit4[] = _("KEINES");
const u8 gText_Lv[] = _("{LV}");
const u8 gText_TimeBoard[] = _("ZEITTAFEL");
const u8 gText_TimeCleared[] = _("BENÖTIGTE ZEIT ");
const u8 gText_XMinYDotZSec[] = _("{STR_VAR_1} Min. {STR_VAR_2},{STR_VAR_3} Sek.");
const u8 gText_TrainerHill1F[] = _("EG");
const u8 gText_TrainerHill2F[] = _("1S");
const u8 gText_TrainerHill3F[] = _("2S");
const u8 gText_TrainerHill4F[] = _("3S");
const u8 gText_TeachWhichMoveToPkmn[] = _("{STR_VAR_1} welche Att. beibr.?");
const u8 gText_MoveRelearnerTeachMoveConfirm[] = _("{STR_VAR_2} beibringen?");
const u8 gText_MoveRelearnerPkmnLearnedMove[] = _("{STR_VAR_1} lernte\n{STR_VAR_2}.");
const u8 gText_MoveRelearnerPkmnTryingToLearnMove[] = _("{STR_VAR_1} versucht,\n{STR_VAR_2} zu erlernen.\pAber {STR_VAR_1} kann nicht mehr\nals vier Attacken erlernen.\pSoll eine Attacke zu Gunsten von\n{STR_VAR_2} vergessen werden?");
const u8 gText_MoveRelearnerStopTryingToTeachMove[] = _("{STR_VAR_2} nicht erlernen?");
const u8 gText_MoveRelearnerAndPoof[] = _("{PAUSE 32}1, {PAUSE 15}2 {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}Schwupp!\p");
const u8 gText_MoveRelearnerPkmnForgotMoveAndLearnedNew[] = _("{STR_VAR_1} vergaß\n{STR_VAR_3}.\pUnd…\p{STR_VAR_1} lernt {STR_VAR_2}.");
const u8 gText_MoveRelearnedPkmnDidNotLearnMove[] = _("{STR_VAR_1} did not learn the\nmove {STR_VAR_2}."); // Unused
const u8 gText_MoveRelearnerGiveUp[] = _("Soll {STR_VAR_1} keine neue\nAttacke erlernen?");
const u8 gText_MoveRelearnerWhichMoveToForget[] = _("Welche Attacke soll vergessen\nwerden?\p");
const u8 gText_MoveRelearnerBattleMoves[] = _("ATTACKEN");
const u8 gText_MoveRelearnerContestMovesTitle[] = _("WETT.-ATTACKEN");
const u8 gText_MoveRelearnerType[] = _("TYPE/"); // Unused
const u8 gText_MoveRelearnerPP[] = _("AP/");
const u8 gText_MoveRelearnerPower[] = _("STÄRKE/");
const u8 gText_MoveRelearnerAccuracy[] = _("GENAU./");
const u8 gText_MoveRelearnerAppeal[] = _("AUSDRUCK");
const u8 gText_MoveRelearnerJam[] = _("EINDRUCK");
const u8 gText_Kira[] = _("JULE");
const u8 gText_Amy[] = _("NORA");
const u8 gText_John[] = _("URS");
const u8 gText_Roy[] = _("KARL");
const u8 gText_Gabby[] = _("PIA");
const u8 gText_Anna[] = _("IRM");
const u8 gText_ClearAllSaveData[] = _("Alle gesich. Datenber. löschen?");
const u8 gText_ClearingData[] = _("Daten werden gelöscht…\nBitte warten…");
const u8 gText_IsThisTheCorrectTime[] = _("Ist die Uhrzeit korrekt?");
const u8 gText_Confirm3[] = _("O.K.");
const u8 gText_Cancel4[] = _("ZURÜCK");
const u8 gText_CommStandbyAwaitingOtherPlayer[] = _("Verbindungsaufbau…\nMitspieler wird erwartet.");
const u8 gText_BattleWasRefused[] = _("Der Kampf wurde abgesagt.{PAUSE 60}");
const u8 gText_RefusedBattle[] = _("Kampfabsage.{PAUSE 60}");
const u8 gText_NoWeather[] = _("WETTERLOS"); // Below are unused debug names for weather types
const u8 gText_Sunny[] = _("SONNIG"); // Unused
const u8 gText_Sunny2[] = _("SONNIG 2"); // Unused
const u8 gText_Rain[] = _("REGEN"); // Unused
const u8 gText_Snow[] = _("SCHNEE"); // Unused
const u8 gText_Lightning[] = _("GEWITTER"); // Unused
const u8 gText_Fog[] = _("NEBEL"); // Unused
const u8 gText_VolcanoAsh[] = _("VULKANASCHE"); // Unused
const u8 gText_Sandstorm[] = _("SANDSTURM"); // Unused
const u8 gText_Fog2[] = _("NEBEL 2"); // Unused
const u8 gText_Seafloor[] = _("TIEFSEE"); // Unused
const u8 gText_Cloudy[] = _("WOLKIG"); // Unused
const u8 gText_Sunny3[] = _("SONNIG 3"); // Unused
const u8 gText_HeavyRain[] = _("WOLKENBRUCH"); // Unused
const u8 gText_Seafloor2[] = _("TIEFSEE2"); // Unused
const u8 gText_DelAll[] = _("LÖSCHEN");
const u8 gText_Cancel5[] = _("ABBRUCH");
const u8 gText_Ok2[] = _("O.K.");
const u8 gText_Quiz[] = _("QUIZ");
const u8 gText_Answer[] = _("ANTWORT");
const u8 gText_PokeBalls[] = _("POKéBÄLLe");
const u8 gText_Berry[] = _("BEERE");
const u8 gText_Berries[] = _("BEEREn");
const u8 gText_ExpShareOn[] = _("Der EP-Teiler wurde aktiviert.{PAUSE_UNTIL_PRESS}");
const u8 gText_ExpShareOff[] = _("Der EP-Teiler wurde deaktiviert.{PAUSE_UNTIL_PRESS}");
const u8 gText_BasePointsResetToZero[] = _("{STR_VAR_1}'s Basispunkte\nwurden zurückgesetzt auf 0!{PAUSE_UNTIL_PRESS}");
const u8 gText_AM[] = _("AM");
const u8 gText_PM[] = _("PM");
const u8 gText_Relearn[] = _("{START_BUTTON} RELEARN"); // future note: don't decap this, because it mimics the summary screen BG graphics which will not get decapped
const u8 gText_Relearn_LevelUp[] = _("{START_BUTTON} RELEARN LEVEL");
const u8 gText_Relearn_Egg[] = _("{START_BUTTON} RELEARN EGG");
const u8 gText_Relearn_TM[] = _("{START_BUTTON} RELEARN TM");
const u8 gText_Relearn_Tutor[] = _("{START_BUTTON} RELEARN TUTOR");
const u8 gText_Rename[] = _("SPITZNA.");
const u8 gText_CannotSendMonToBoxHM[] = _("Kann dieses mon nicht in wegschicken,\nweil es eine VM kennt.{PAUSE_UNTIL_PRESS}");
const u8 gText_CannotSendMonToBoxActive[] = _("Aktiv kämpfendes mon kann nicht\nin die Box.{PAUSE_UNTIL_PRESS}");
const u8 gText_CannotSendMonToBoxPartner[] = _("Ein mon was dir nicht gehört,\nkann nicht in die Box.{PAUSE_UNTIL_PRESS}");

// start HnS
const u8 gText_ProfBirchMatchCallName[] = _("PROF. BIRK");
// const u8 gText_MainMenuNewGame[] = _("NEUES SPIEL");
// const u8 gText_MainMenuContinue[] = _("WEITER");
// const u8 gText_MainMenuOption[] = _("OPTIONEN");
// const u8 gText_MainMenuMysteryGift[] = _("GEHEIMGESCHEHEN");
// const u8 gText_MainMenuMysteryGift2[] = _("GEHEIMGESCHEHEN");
// const u8 gText_MainMenuMysteryEvents[] = _("GEHEIMGESCHEHEN");
// const u8 gText_WirelessNotConnected[] = _("Der Drahtlose GBA-Adapter ist\nnicht angeschlossen.");
// const u8 gText_MysteryGiftCantUse[] = _("Drahtloser Adapter angeschlossen;\nGEHEIMGESCHEHEN unmöglich.");
// const u8 gText_MysteryEventsCantUse[] = _("Drahtloser Adapter angeschlossen;\nGEHEIMGESCHEHEN unmöglich.");
const u8 gText_UpdatingSaveExternalData[] = _("Updating save file using external\ndata. Please wait."); // Unused
const u8 gText_SaveFileUpdated[] = _("The save file has been updated."); // Unused
// const u8 gText_SaveFileCorrupted[] = _("Der Spielstand ist beschädigt. Der\nvorherige Spielstand wird geladen.");
// const u8 gText_SaveFileErased[] = _("Der Spielstand wurde gelöscht.");
// const u8 gJPText_No1MSubCircuit[] = _("1Mサブきばんが ささっていません！");
// const u8 gText_BatteryRunDry[] = _("Interne Batterie ist verbraucht.\nSpiel kann fortgesetzt werden.\pAber zeitbasierende Spiel-Events\nwerden nicht mehr initiiert.");
const u8 gText_BirchBoy[] = _("JUNGE");
const u8 gText_BirchGirl[] = _("MÄDEL");

const u8 gMenuText_CheckTag[] = _("CHECK TAG");

const u8 gMenuText_Walk[] = _("GEHEN");

const u8 gMenuText_Show[] = _("ZEIGEN");

const u8 gText_Cancel7[] = _("ABBRECHEN"); // Unused
const u8 gText_Item[] = _("ITEM");
const u8 gText_Mail[] = _("BRIEF");
const u8 gText_Take[] = _("NEHMEN");
const u8 gText_Store[] = _("GEBEN");
const u8 gMenuText_Check[] = _("CHECK");

const u8 gMenuText_Deselect[] = _("ABWÄHLEN");
const u8 gText_ThreeMarks[] = _("???");

const u8 gText_PlusSymbol[] = _("+"); // Unused

// const u8 gText_Var1IsSelected[] = _("Was möchtest\ndu tun?");

const u8 gText_Var1CantBeHeldHere[] = _("{STR_VAR_1} ist hier nicht zu\ngeben.");
const u8 gText_DepositHowManyVar1[] = _("Wie viele möchtest\ndu ablegen?");
const u8 gText_DepositedVar2Var1s[] = _("{STR_VAR_2}× {STR_VAR_1}\nwurde abgelegt.");
const u8 gText_NoRoomForItems[] = _("Kein Platz für\nweitere Items.");
const u8 gText_CantStoreImportantItems[] = _("Wichtige Items\nkönnen nicht im\nPC gelagert werden.");
const u8 gText_TooImportantToToss[] = _("Das ist viel zu\nwichtig, um es\nwegzuwerfen!");
// const u8 gText_TossHowManyVar1s[] = _("Wie viel in den Müll?");
// const u8 gText_ThrewAwayVar2Var1s[] = _("{STR_VAR_2} × {STR_VAR_1}\nweggeworfen.");
// const u8 gText_ConfirmTossItems[] = _("Willst du wirklich\n{STR_VAR_2} × {STR_VAR_1}\nwegwerfen?");

const u8 gText_OakTalk_Clefairy[] = _(
    "MARY: Heute bei POKéMON TALK,\n"
    "ein seltener Mondschein-Moment!\l"
    "EICH: Wir stellen das mystische\l"
    "PIEPI ins Rampenlicht!\l"
    "Trainer sagen, sie versammeln sich\l"
    "am MONDBERG bei Vollmond.\l"
    "MARY: Sie TANZEN im Kreis!\l"
    "So putzig und seltsam!\l"
    "EICH: Ein zeitloses Rätsel\l"
    "und ein Anblick zum Staunen!\l"
    "MARY: Nicht verpassen!\l"
    "Kamera mitbringen!{PAUSE_UNTIL_PRESS}");

const u8 gText_OakTalk_Lapras[] = _(
    "MARY: Heute betritt ein sanfter Riese\n"
    "die Bühne!\l"
    "EICH: Es ist die Ozean-Fähre,\l"
    "unser geliebtes LAPRAS!\l"
    "Zu sehen im EINHEITSTUNNEL,\l"
    "aber nur abends.\l"
    "MARY: So selten und friedlich!\l"
    "Und es singt auch!\l"
    "EICH: Manche sagen, sein Gesang\l"
    "beruhigt die Seele des Meeres.\l"
    "MARY: Wir lieben dich, LAPRAS!\l"
    "Bleib immer wie du bist!{PAUSE_UNTIL_PRESS}");

const u8 gText_OakTalk_Ampharos[] = _(
    "MARY: Willkommen zurück!\n"
    "Zeit für POKéMON TALK!\l"
    "EICH: Wir richten das Licht auf\l"
    "unseren Freund AMPHAROS!\l"
    "Sein leuchtender Schwanz scheint\l"
    "durch Nebel und leitet Verirrte.\l"
    "MARY: Stark, elegant und freundlich!\l"
    "EICH: Teil vieler Leuchtturm-Geschichten!\l"
    "MARY: Mehr Geschichten bald!\l"
    "Nicht abschalten!{PAUSE_UNTIL_PRESS}");

const u8 gText_OakTalk_Sudowoodo[] = _(
    "MARY: Als nächstes ein Sonderling\n"
    "auf ROUTE 36...\l"
    "EICH: MOGELBAUM! Sieht aus\l"
    "wie ein Baum, ist aber keiner!\l"
    "Es blockiert die Straße und rührt sich\l"
    "ohne Wasser nicht.\l"
    "MARY: Trainer berichten, es reagiert\l"
    "nur auf eine SPRITZFLASCHE!\l"
    "EICH: Kein Busch, ein Gesteins-Typ\l"
    "in Verkleidung!\l"
    "MARY: Lass dich nicht täuschen!\l"
    "Gib ihm einen Spritzer!{PAUSE_UNTIL_PRESS}");

const u8 gText_OakTalk_RedGyarados[] = _(
    "MARY: Heute aus JOHTO:\n"
    "eine schockierende Story!\l"
    "EICH: Trainer sahen ein ROTES\l"
    "GARADOS am WUTSEE!\l"
    "Nicht wie die blauen üblichen,\l"
    "dieses ist leuchtend rot!\l"
    "MARY: Es soll mit seltsamen\l"
    "Radiowellen zu tun haben!\l"
    "EICH: Eine mysteriöse Entwicklung...\l"
    "Vielleicht unnatürlich.\l"
    "MARY: Was auch immer die Ursache,\l"
    "es sorgt für Aufsehen!{PAUSE_UNTIL_PRESS}");

const u8 gText_OakTalk_Unown[] = _(
    "MARY: Schon mal die RUINEN\n"
    "VON ALPH besucht? Gruselig!\l"
    "EICH: Seltsame Symbole zieren die\l"
    "Wände - wie alte Runen.\l"
    "Drinnen findest du ICOGNITO..\l"
    "jedes wie ein Buchstabe!\l"
    "MARY: Sie ergeben vielleicht Worte?\l"
    "Oder erschrecken uns nur!\l"
    "EICH: Ein echtes Rätsel der Natur,\l"
    "bis heute ungelöst.\l"
    "MARY: Sag uns, was du meinst!{PAUSE_UNTIL_PRESS}");

const u8 gText_OakTalk_Snubbull[] = _(
    "MARY: DUKATIA-Bewohner\n"
    "suchen überall!\l"
    "EICH: Ein SNUBBULL ist ausgebüxt\l"
    "und auf der Flucht!\l"
    "Normalerweise scheu, gesehen\l"
    "nahe dem Bahnhof.\l"
    "MARY: Vielleicht auf Liebesjagd...\l"
    "oder nur Abenteuer!\l"
    "EICH: Augen offen halten -\l"
    "und Leine bereit.\l"
    "MARY: SNUBBULL, komm nach Haus!\l"
    "Wir vermissen dich!{PAUSE_UNTIL_PRESS}");

const u8 gText_OakTalk_Slowpoke[] = _(
    "MARY: Große Neuigkeiten aus\n"
    "AZALEA TOWN!\l"
    "EICH: FLEGMON kehren nach\l"
    "Krisen in ihren Brunnen zurück!\l"
    "TEAM ROCKET hatte ihre Schwänze\l"
    "abgeschnitten - schrecklich!\l"
    "MARY: Aber ein mutiger Trainer\l"
    "hat sie gestoppt!\l"
    "EICH: Die FLEGMON sind sicher\n"
    "und dösen glücklich wieder.\l"
    "MARY: Gerechtigkeit siegt,\l"
    "und Ruhe kehrt zurück!{PAUSE_UNTIL_PRESS}");

const u8 gText_OakTalk_LavenderTower[] = _(
    "MARY: LAVANDIA Turm\n"
    "spielt neue Töne!\l"
    "EICH: Der alte Geisterturm ist\l"
    "jetzt ein RADIO!\l"
    "Einige sagen, es wirkt noch\l"
    "gruselig.\l"
    "MARY: Ich schwöre, ich sah ein\l"
    "NEBULAK bei der Mikro-Station!\l"
    "EICH: Vielleicht Störungen...\l"
    "oder Geister!\l"
    "MARY: Wie auch immer, tolle Musik!\l"
    "Vermutlich. Hoppla!{PAUSE_UNTIL_PRESS}");

const u8 gText_OakTalk_TentacruelWhirl[] = _(
    "MARY: Seltsame Nachrichten von\n"
    "DEN STRUDELINSELN!\l"
    "EICH: TENTOXA wurden gesehen,\l"
    "wie sie Höhleneingänge umkreisen!\l"
    "Sie sind riesig und wirken fast\l"
    "territorial.\l"
    "MARY: Trainer sagen, sie blockieren\l"
    "den Weg ohne anzugreifen...\l"
    "EICH: Als würden sie etwas bewachen\l"
    "tief unter den Wellen.\l"
    "MARY: Was verstecken sie?\l"
    "Oder schützen?{PAUSE_UNTIL_PRESS}");



const u8 gText_RocketRadio[] = _("... ... Ahem, wir sind\nTEAM ROCKET!\lNach drei Jahren vorbereitung,\lsind wir aus der Asche auferstanden!\lGIOVANNI! Hörst du uns?\lWir haben es geschafft!\lWo ist unser Boss?\lHört er zu?{PAUSE_UNTIL_PRESS}");
const u8 gText_RadioNoSignal[] = _("Hier ist kein Signal,\n versuche woanders.{PAUSE_UNTIL_PRESS}");
const u8 gText_UnownMessage[] = _("??????????????????????????????????\l??????????????????????????????????\l??????????????????????????????????\l??????????????????????????????????{PAUSE_UNTIL_PRESS}");
const u8 gText_RadioKantoPokeFlute[] = _("POKé FLÖTE RADIO.{PAUSE_UNTIL_PRESS}");

const u8 gText_DadsAdvice[] = _("VATI sagt immer…\n{PLAYER}, dies ist weder der rechte\lOrt noch der rechte Zeitpunkt dafür!{PAUSE_UNTIL_PRESS}");
const u8 gText_CantDismountBike[] = _("Du kannst hier nicht vom RAD steigen.{PAUSE_UNTIL_PRESS}");
const u8 gText_ItemFinderNearby[] = _("Oh!\nDas Gerät zeigt etwas an!\pHier muss ein Item vergraben sein!{PAUSE_UNTIL_PRESS}");
const u8 gText_ItemFinderOnTop[] = _("Das Gerät macht direkt unter\ndeinen Füßen etwas aus!{PAUSE_UNTIL_PRESS}");
const u8 gText_ItemFinderNothing[] = _("… … … … Nichts!\nKeine Anzeige.{PAUSE_UNTIL_PRESS}");
const u8 gText_CoinCase[] = _("Deine MÜNZEn:\n{STR_VAR_1}{PAUSE_UNTIL_PRESS}");
const u8 gText_BootedUpTM[] = _("Eine TM wurde aktiviert.");
const u8 gText_BootedUpHM[] = _("Eine VM wurde aktiviert.");
const u8 gText_TMHMContainedVar1[] = _("Sie enthält\n{STR_VAR_1}.\p{STR_VAR_1} einem\nPOKéMON beibringen?");

const u8 gText_UsedVar2WildLured[] = _("{PLAYER} setzt\n{STR_VAR_2} ein.\pWilde POKéMON werden angezogen.{PAUSE_UNTIL_PRESS}");
const u8 gText_UsedVar2WildRepelled[] = _("{PLAYER} setzt\n{STR_VAR_2} ein.\pWilde POKéMON werden abgehalten.{PAUSE_UNTIL_PRESS}");
const u8 gText_PowderQty[] = _("PUDERMENGE: {STR_VAR_1}{PAUSE_UNTIL_PRESS}");

const u8 gText_SizeSlash[] = _("MASS:");
const u8 gText_FirmSlash[] = _("GÜTE:");
const u8 gText_Var1DotVar2[] = _("{STR_VAR_1},{STR_VAR_2} cm");

// Berry firmness strings
const u8 gBerryFirmnessString_VerySoft[] = _("Sehr weich");
const u8 gBerryFirmnessString_Soft[] = _("Weich");
const u8 gBerryFirmnessString_Hard[] = _("Hart");
const u8 gBerryFirmnessString_VeryHard[] = _("Sehr hart");
const u8 gBerryFirmnessString_SuperHard[] = _("Super hart");

const u8 gText_NumberVar1Var2[] = _("{NO}{STR_VAR_1} {STR_VAR_2}");
const u8 gText_BerryTag[] = _("BEERE");
const u8 gText_RedPokeblock[] = _("{POKEBLOCK} ROT");
const u8 gText_BluePokeblock[] = _("{POKEBLOCK} BLAU");
const u8 gText_PinkPokeblock[] = _("{POKEBLOCK} ROSA");
const u8 gText_GreenPokeblock[] = _("{POKEBLOCK} GRÜN");
const u8 gText_YellowPokeblock[] = _("{POKEBLOCK} GELB");
const u8 gText_PurplePokeblock[] = _("{POKEBLOCK} LILA");
const u8 gText_IndigoPokeblock[] = _("{POKEBLOCK} INDIGO");
const u8 gText_BrownPokeblock[] = _("{POKEBLOCK} BRAUN");
const u8 gText_LiteBluePokeblock[] = _("{POKEBLOCK} CYAN");
const u8 gText_OlivePokeblock[] = _("{POKEBLOCK} OLIV");
const u8 gText_GrayPokeblock[] = _("{POKEBLOCK} GRAU");
const u8 gText_BlackPokeblock[] = _("{POKEBLOCK} SCHWARZ");
const u8 gText_WhitePokeblock[] = _("{POKEBLOCK} WEISS");
const u8 gText_GoldPokeblock[] = _("{POKEBLOCK} GOLD");
const u8 gText_Spicy[] = _("SCHARF");
const u8 gText_Dry[] = _("TRCK.");
const u8 gText_Sweet[] = _("SÜSS");
const u8 gText_Bitter[] = _("BITTER");
const u8 gText_Sour[] = _("SAUER");
const u8 gText_Tasty[] = _("LECKER"); // Unused
const u8 gText_Feel[] = _("FEEL"); // Unused
const u8 gText_StowCase[] = _("BOX verstauen.");
const u8 gText_LvVar1[] = _("{LV}{STR_VAR_1}");
const u8 gText_ThrowAwayVar1[] = _("{STR_VAR_1}\nwegwerfen?");
const u8 gText_Var1ThrownAway[] = _("{STR_VAR_1}\nwurde weggeworfen.");
const u8 gText_Var1AteTheVar2[] = _("{STR_VAR_1} aß den\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gText_Var1HappilyAteVar2[] = _("{STR_VAR_1} aß gerne den\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");
const u8 gText_Var1DisdainfullyAteVar2[] = _("{STR_VAR_1} aß ungern den\n{STR_VAR_2}.{PAUSE_UNTIL_PRESS}");

const u8 gText_YouAlreadyHaveThis[] = _("You already have this item.{PAUSE_UNTIL_PRESS}");

const u8 gText_Shift[] = _("TAUSCH");
const u8 gText_SendOut[] = _("AUSSENDEN");
const u8 gText_Switch2[] = _("TAUSCH");
const u8 gText_Summary5[] = _("BERICHT");
const u8 gText_Moves[] = _("MOVES"); // Unused
const u8 gText_Enter[] = _("EINTRAGEN");
const u8 gText_NoEntry[] = _("AUSTRAGEN");
const u8 gText_Take2[] = _("NEHMEN");
const u8 gText_Read2[] = _("LESEN");
const u8 gText_Trade4[] = _("TAUSCH");

const u8 gText_EggReadyToHatch_Nuzlocke[] = _("Ready to hatch, but blocked\nby Nuzlocke encounter!");

const u8 gText_TurnOff[] = _("AUSSCHALTEN");
const u8 gText_Decoration[] = _("DEKORATION");
const u8 gText_ItemStorage[] = _("ITEM-LAGER");
const u8 gText_Mailbox[] = _("BRIEFBOX");
const u8 gText_DepositItem[] = _("ITEM ABLEGEN");
const u8 gText_WithdrawItem[] = _("ITEM NEHMEN");
const u8 gText_TossItem[] = _("ITEM IN MÜLL");
const u8 gText_StoreItemsInPC[] = _("Lagere Items auf deinem PC.");
const u8 gText_TakeOutItemsFromPC[] = _("Nimm Items von deinem PC.");
const u8 gText_ThrowAwayItemsInPC[] = _("Wirf gelagerte Items weg.");

const u8 gText_NoRoomInBag[] = _("In deinem BEUTEL\nist kein Platz mehr.");
const u8 gText_WithdrawHowManyItems[] = _("Wie viele möchtest\ndu aufnehmen?");
const u8 gText_WithdrawXItems[] = _("{STR_VAR_2} × {STR_VAR_1}\naufgenommen.");
const u8 gText_Read[] = _("LESEN");
const u8 gText_MoveToBag[] = _("IN BEUTEL GEBEN");
const u8 gText_Give2[] = _("GEBEN");

const u8 gText_Petalburg[] = _("BLÜTENBURG CITY");
const u8 gText_Slateport[] = _("GRAPHITPORT CITY");
const u8 gText_Littleroot[] = _("LITTLEROOT"); // Unused. Given the context, Briney may at one point have been able to sail the player here
const u8 gText_Lilycove[] = _("LILYCOVE");     // Unused. Given the context, Briney may at one point have been able to sail the player here
const u8 gText_Dewford[] = _("FAUSTAUHAVEN");
const u8 gText_Enter2[] = _("JA");

const u8 gText_WhatsAContest[] = _("Der WETTBEWERB");
const u8 gText_TypesOfContests[] = _("WETTBEWERB-Arten");
const u8 gText_Ranks[] = _("Klassen");
const u8 gText_Judging[] = _("Judging"); //unused

const u8 gText_Count[] = _("COUNT"); //unused

const u8 gText_Info4[] = _("INFO"); // Unused
const u8 gText_SingleBattle[] = _("EINZELKAMPF");
const u8 gText_DoubleBattle[] = _("DOPPELKAMPF");
const u8 gText_MultiBattle[] = _("MULTIKAMPF");
const u8 gText_MrBriney[] = _("MR. BRINEY"); // Unused
const u8 gText_Challenge[] = _("Zum Kampf fordern");
const u8 gText_Info3[] = _("Information dazu");
const u8 gText_Lv50[] = _("Lv. 50");

const u8 gText_FreshWaterAndPrice[] = _("TAFELWASSER{CLEAR_TO 0x4E}¥200");
const u8 gText_SodaPopAndPrice[] = _("SPRUDEL{CLEAR_TO 0x4E}¥300");
const u8 gText_LemonadeAndPrice[] = _("LIMONADE{CLEAR_TO 0x4E}¥350");
const u8 gText_HowToRide[] = _("RAD FAHREN");
const u8 gText_HowToTurn[] = _("KURVEN FAHREN");
const u8 gText_SandySlopes[] = _("SANDHÜGEL");
const u8 gText_Wheelies[] = _("WHEELIES");
const u8 gText_BunnyHops[] = _("HOPPELN");
const u8 gText_Jump[] = _("SPRINGEN");
const u8 gText_Satisfied[] = _("Zufrieden");
const u8 gText_Dissatisfied[] = _("Unzufrieden");
const u8 gText_DeepSeaTooth[] = _("ABYSSZAHN");
const u8 gText_DeepSeaScale[] = _("ABYSSPLATTE");
const u8 gText_BlueFlute2[] = _("BLAUE FLÖTE");
const u8 gText_YellowFlute2[] = _("GELBE FLÖTE");
const u8 gText_RedFlute2[] = _("ROTE FLÖTE");
const u8 gText_WhiteFlute2[] = _("WEISSE FLÖTE");
const u8 gText_BlackFlute2[] = _("SCHWRZ. FLÖTE");
const u8 gText_GlassChair[] = _("GLASSTUHL");
const u8 gText_GlassDesk[] = _("GLASTISCH");
const u8 gText_TreeckoDollAndPrice[] = _("GECKARBOR-PUPPE{CLEAR_TO 0x62}1000 M.");
const u8 gText_TorchicDollAndPrice[] = _("FLEMMLI-PUPPE{CLEAR_TO 0x62}1000 M.");
const u8 gText_MudkipDollAndPrice[] = _("HYDROPI-PUPPE{CLEAR_TO 0x62}1000 M.");
const u8 gText_RegirockDollAndPrice[] = _("REGIROCK DOLL   9,000 C.");
const u8 gText_RegiceDollAndPrice[] = _("REGICE DOLL       9,000 C.");
const u8 gText_RegisteelDollAndPrice[] = _("REGISTEEL DOLL 9,000 C.");
const u8 gText_50CoinsAndPrice[] = _("  50 MÜNZEn{CLEAR_TO 0x48}¥1000");
const u8 gText_500CoinsAndPrice[] = _("500 MÜNZEn{CLEAR_TO 0x3F}¥10 000");
const u8 gText_Excellent2[] = _("Klasse!");
const u8 gText_NotSoGood[] = _("Naja…");

const u8 gText_Right[] = _("Rechts");
const u8 gText_Left[] = _("Links");
const u8 gText_TM32AndPrice[] = _("TM32{CLEAR_TO 0x3F}1500 MÜNZEn");
const u8 gText_TM29AndPrice[] = _("TM29{CLEAR_TO 0x3F}3500 MÜNZEn");
const u8 gText_TM35AndPrice[] = _("TM35{CLEAR_TO 0x3F}4000 MÜNZEn");
const u8 gText_TM24AndPrice[] = _("TM24{CLEAR_TO 0x3F}4000 MÜNZEn");
const u8 gText_TM13AndPrice[] = _("TM13{CLEAR_TO 0x3F}4000 MÜNZEn");

const u8 gText_NormalRank[] = _("NORMAL-KLASSE");
const u8 gText_SuperRank[] = _("SUPER-KLASSE");
const u8 gText_HyperRank[] = _("HYPER-KLASSE");
const u8 gText_MasterRank[] = _("MASTER-KLASSE");

const u8 gText_BattleBag[] = _("PYRABEUTEL");
const u8 gText_HeldItem[] = _("GETR. ITEM");
const u8 gText_LinkContest[] = _("LINK-WETTBEWERB");
const u8 gText_AboutE_Mode[] = _("SMARAGDMODUS");
const u8 gText_AboutG_Mode[] = _("GLOBALMODUS");
const u8 gText_E_Mode[] = _("SGDMODUS");
const u8 gText_G_Mode[] = _("GLBMODUS");

const u8 gText_Vermilion[] = _("VERMILION");
const u8 gText_Olivine[] = _("OLIVINE");
const u8 gText_ClawFossil[] = _("KLAUENFOSSIL");
const u8 gText_RootFossil[] = _("WURZELFOSSIL");
const u8 gText_HelixFossil[] = _("HELIX FOSSIL");
const u8 gText_DomeFossil[] = _("DOME FOSSIL");
const u8 gText_OldAmber[] = _("OLD AMBER");
const u8 gText_No4[] = _("NEIN");
const u8 gText_IllBattleNow[] = _("Ich bin dran!");
const u8 gText_IWon[] = _("Ich gewinne!");
const u8 gText_ILost[] = _("Ich verliere!");
const u8 gText_IWontTell[] = _("Ich sage nix!");

const u8 gText_EmptyLinkService[] = _(""); // Maybe Spin Trade?
const u8 gText_PokemonJump[] = _("POKéMON-SPRUNG");
const u8 gText_DodrioBerryPicking[] = _("BEERENERNTE mit DODRI");
const u8 gText_BecomeLeader[] = _("LEITER");
const u8 gText_JoinGroup[] = _("MITSPIELER");
const u8 gText_TwoStyles[] = _("ZWEI KLASSEN");
const u8 gText_Lv50_3[] = _("Lv. 50");
const u8 gText_OpenLevel2[] = _("OFFENE KÄMPFE");
const u8 gText_MonTypeAndNo[] = _("{PKMN} TYP & ANZAHL");
const u8 gText_HoldItems[] = _("GETRAGENE ITEMS");
const u8 gText_Symbols2[] = _("SYMBOLE");
const u8 gText_Record3[] = _("VIDEO");
const u8 gText_BattlePts[] = _("GEWINNPKT.");
const u8 gText_TowerInfo[] = _("TURMINFO");
const u8 gText_BattleMon[] = _("DUELL PKMN");
const u8 gText_BattleSalon[] = _("TEAMLOUNGE");
const u8 gText_MultiLink2[] = _("MULTI-LINK");

const u8 gText_Matchup[] = _("SETZLISTE");
const u8 gText_TourneyTree[] = _("TURNIERTAFEL");
const u8 gText_DoubleKO[] = _("DOPPEL K.O.");

const u8 gText_OpenLevel3[] = _("O. KÄMPFE");

const u8 gText_PyramidPokemon[] = _("PYRAMIDENPOKéMON");
const u8 gText_PyramidTrainers[] = _("PYRAMIDENTRAINER");
const u8 gText_PyramidMaze[] = _("PYRAIRRGARTEN");
const u8 gText_BattleBag2[] = _("PYRABEUTEL");
const u8 gText_PokenavAndBag[] = _("POKéCOM UND TASCHE");
const u8 gText_HeldItems[] = _("GETRAGENE ITEMS");
const u8 gText_PokemonOrder[] = _("POKéMON REIHENFOLGE");

const u8 gText_99TimesPlus[] = _("99-mal +");
const u8 gText_1MinutePlus[] = _("1 Minute +");
const u8 gText_SpaceSeconds[] = _(" Sekunden");
const u8 gText_SpaceTimes[] = _("-mal");
const u8 gText_Dot[] = _("."); // Unused
const u8 gText_BigGuy[] = _("");
const u8 gText_BigGirl[] = _("");
const u8 gText_Son[] = _("Sohn");
const u8 gText_Daughter[] = _("Tochter");
const u8 gText_BlueFlute[] = _("BLAUE FLÖTE");
const u8 gText_YellowFlute[] = _("GELBE FLÖTE");
const u8 gText_RedFlute[] = _("ROTE FLÖTE");
const u8 gText_WhiteFlute[] = _("WEISSE FLÖTE");
const u8 gText_BlackFlute[] = _("SCHWRZ. FLÖTE");
const u8 gText_PrettyChair[] = _("EDLER STUHL");
const u8 gText_PrettyDesk[] = _("EDLER TISCH");

const u8 gText_EnergyPowder50[] = _("ENERGIESTAUB{CLEAR_TO 114}{FONT_NORMAL}50");
const u8 gText_EnergyRoot80[] = _("KRAFTWURZEL{CLEAR_TO 114}{FONT_NORMAL}80");
const u8 gText_HealPowder50[] = _("HEILPUDER{CLEAR_TO 114}{FONT_NORMAL}50");
const u8 gText_RevivalHerb300[] = _("VITALKRAUT{CLEAR_TO 108}{FONT_NORMAL}300");
const u8 gText_Protein1000[] = _("PROTEIN{CLEAR_TO 102}{FONT_NORMAL}1000");
const u8 gText_Iron1000[] = _("EISEN{CLEAR_TO 102}{FONT_NORMAL}1000");
const u8 gText_Carbos1000[] = _("CARBON{CLEAR_TO 102}{FONT_NORMAL}1000");
const u8 gText_Calcium1000[] = _("KALZIUM{CLEAR_TO 102}{FONT_NORMAL}1000");
const u8 gText_Zinc1000[] = _("ZINK{CLEAR_TO 102}{FONT_NORMAL}1000");
const u8 gText_HPUp1000[] = _("KP-PLUS{CLEAR_TO 102}{FONT_NORMAL}1000");
const u8 gText_PPUp3000[] = _("AP-PLUS{CLEAR_TO 102}{FONT_NORMAL}3000");

const u8 gText_CaveOfOrigin[] = _("URZEITHÖHLE");
const u8 gText_MtPyre[] = _("PYROBERG");
const u8 gText_SkyPillar[] = _("HIMMELTURM");
const u8 gText_DontRemember[] = _("Keine Erinnerung!");

const u8 gText_ExitFromBox[] = _("Die BOX verlassen?");
const u8 gText_WhatDoYouWantToDo[] = _("Was möchtest du tun?");
const u8 gText_PleasePickATheme[] = _("Wähle eine Motivsammlung.");
const u8 gText_PickTheWallpaper[] = _("Wähle ein Hintergrundmotiv.");
// const u8 gText_PkmnIsSelected[] = _("{DYNAMIC 0} ist gewählt.");
const u8 gText_JumpToWhichBox[] = _("Zu welcher BOX wechseln?");
const u8 gText_DepositInWhichBox[] = _("In welche BOX ablegen?");
const u8 gText_PkmnWasDeposited[] = _("{DYNAMIC 0} wurde abgelegt.");
const u8 gText_BoxIsFull2[] = _("Die BOX ist voll.");
const u8 gText_ReleaseThisPokemon[] = _("Dieses POKéMON freilassen?");
const u8 gText_PkmnWasReleased[] = _("{DYNAMIC 0} ist wieder frei.");
const u8 gText_ByeByePkmn[] = _("Tschüss, {DYNAMIC 0}!");
const u8 gText_MarkYourPkmn[] = _("Markiere dein POKéMON.");
const u8 gText_ThatsYourLastPkmn[] = _("Dein letztes POKéMON!");
const u8 gText_YoureHoldingAPkmn[] = _("Du hältst ein POKéMON!");
const u8 gText_WhichOneWillYouTake[] = _("Welches wählst du aus?");
const u8 gText_YouCantReleaseAnEgg[] = _("Du kannst kein EI freilass.!");
const u8 gText_ContinueBoxOperations[] = _("Die BOX weiter bearbeiten?");
const u8 gText_PkmnCameBack[] = _("{DYNAMIC 0} kam zurück!");
const u8 gText_WasItWorriedAboutYou[] = _("War es in Sorge um dich?");
const u8 gText_FourEllipsesExclamation[] = _("… … … … !");
const u8 gText_PleaseRemoveTheMail[] = _("BRIEF bitte entfernen.");
const u8 gText_GiveToAPkmn[] = _("Einem POKéMON geben?");
const u8 gText_PlacedItemInBag[] = _("Item im BEUTEL verstaut.");
const u8 gText_BagIsFull2[] = _("Der BEUTEL ist voll.");
const u8 gText_PutItemInBag[] = _("Item in den BEUTEL legen?");
const u8 gText_ItemIsNowHeld[] = _("Gehalten: {DYNAMIC 0}");
const u8 gText_ChangedToNewItem[] = _("Geändert in {DYNAMIC 0}.");
const u8 gText_MailCantBeStored[] = _("BRIEF-Lagerung unmöglich!");
const u8 gText_NuzlockeFainted[] = _("{PKMN} gestorben in Nuzlocke!");
const u8 gText_DeadPokemon[] = _("This {PKMN} ist gestorben!");
const u8 gPCText_Cancel[] = _("ABBRUCH");
const u8 gPCText_Store[] = _("LAGERN");
const u8 gPCText_Withdraw[] = _("NEHMEN");
const u8 gPCText_Shift[] = _("TAUSCH");
const u8 gPCText_Move[] = _("BEWEGEN");
const u8 gPCText_Place[] = _("PLATZIEREN");
const u8 gPCText_Summary[] = _("ÜBERSICHT");
const u8 gPCText_Release[] = _("FREILASSEN");
const u8 gPCText_Mark[] = _("MARK");
const u8 gPCText_Name[] = _("NAME");
const u8 gPCText_Jump[] = _("SPRING");
const u8 gPCText_Wallpaper[] = _("POSTER");
const u8 gPCText_Take[] = _("NEHMEN");
// const u8 gPCText_Give[] = _("GEBEN");
const u8 gPCText_Switch[] = _("TAUSCH");
const u8 gPCText_Bag[] = _("TASCHE");
const u8 gPCText_Info[] = _("INFO");
const u8 gPCText_Scenery1[] = _("SCENERY 1");
const u8 gPCText_Scenery2[] = _("SCENERY 2");
const u8 gPCText_Scenery3[] = _("SCENERY 3");
const u8 gPCText_Etcetera[] = _("ETCETERA");
const u8 gPCText_Friends[] = _("FREUNDE");
const u8 gPCText_Forest[] = _("WALD");
const u8 gPCText_City[] = _("STADT");
const u8 gPCText_Desert[] = _("WÜSTE");
const u8 gPCText_Savanna[] = _("SAVANNE");
const u8 gPCText_Crag[] = _("SUMPF");
const u8 gPCText_Volcano[] = _("VULKAN");
const u8 gPCText_Snow[] = _("SCHNEE");
const u8 gPCText_Cave[] = _("HÖHLE");
const u8 gPCText_Beach[] = _("STRAND");
const u8 gPCText_Seafloor[] = _("UNTERWASSER");
const u8 gPCText_River[] = _("FLUSS");
const u8 gPCText_Sky[] = _("HIMMEL");
const u8 gPCText_PolkaDot[] = _("POLKA-DOT");
const u8 gPCText_Pokecenter[] = _("POKéCENTER");
const u8 gPCText_Machine[] = _("MASCHINE");
const u8 gPCText_Simple[] = _("SIMPEL");
const u8 gText_WhatWouldYouLikeToDo[] = _("Was möchtest du tun?"); // Unused
const u8 gText_WithdrawPokemon[] = _("POKéMON NEHMEN");
const u8 gText_DepositPokemon[] = _("POKéMON ABLEGEN");
const u8 gText_MovePokemon[] = _("POKéMON BEWEGEN");
const u8 gText_MoveItems[] = _("ITEMs BEWEGEN");
const u8 gText_SeeYa[] = _("TSCHÜSSI!");
const u8 gText_WithdrawMonDescription[] = _("Nimm POKéMON aus einer\nBOX in dein Team auf.");
const u8 gText_DepositMonDescription[] = _("Lagere POKéMON aus deinem\nTeam in einer BOX.");
const u8 gText_MoveMonDescription[] = _("Ordne POKéMON in den BOXen\nund/oder in deinem Team.");
const u8 gText_MoveItemsDescription[] = _("Items, gehalten von PKMN in Team\noder BOX, bewegen.");
const u8 gText_SeeYaDescription[] = _("Zurück zum vorherigen Menü.");
// const u8 gText_JustOnePkmn[] = _("Du führst nur ein POKéMON mit dir.");
// const u8 gText_PartyFull[] = _("Dein Team ist voll!");
// const u8 gText_Box[] = _("BOX ");
const u8 gText_CheckMapOfHoenn[] = _("Karte der HOENN-Region");
const u8 gText_CheckPokemonInDetail[] = _("POKéMON-Daten im Detail");
const u8 gText_CallRegisteredTrainer[] = _("TRAINER-Daten im Detail");
const u8 gText_CheckObtainedRadio[] = _("Tune into the RADIO.");
const u8 gText_PutAwayPokenav[] = _("POKéNAV schließen");
// const u8 gText_NoRibbonWinners[] = _("Es gibt keine BÄNDER.");
const u8 gText_NoTrainersRegistered[] = _("No TRAINERS are registered."); // Unused
const u8 gText_CheckPartyPokemonInDetail[] = _("Daten über POKéMON des Teams");
const u8 gText_CheckAllPokemonInDetail[] = _("Daten über alle POKéMON");
const u8 gText_ReturnToPokenavMenu[] = _("Zurück zum POKéNAV-Menü");
const u8 gText_FindCoolPokemon[] = _("Nach coolen POKéMON suchen.");
const u8 gText_FindBeautifulPokemon[] = _("Nach schönen POKéMON suchen.");
const u8 gText_FindCutePokemon[] = _("Nach anmutigen POKéMON suchen.");
const u8 gText_FindSmartPokemon[] = _("Nach klugen POKéMON suchen.");
const u8 gText_FindToughPokemon[] = _("Nach starken POKéMON suchen.");
const u8 gText_ReturnToConditionMenu[] = _("Zurück zum Menüpunkt ZUSTAND");
// const u8 gText_NumberRegistered[] = _("Registrierte:");
// const u8 gText_NumberOfBattles[] = _("Kämpfe:");
const u8 gText_Detail[] = _("DETAIL"); // Unused
const u8 gText_Call2[] = _("CALL"); // Unused
const u8 gText_UnusedExit[] = _("EXIT"); // Unused
const u8 gText_CantCallOpponentHere[] = _("Can't call opponent here."); // Unused
// const u8 gText_PokenavMatchCall_Strategy[] = _("TAKTIK:");
// const u8 gText_PokenavMatchCall_TrainerPokemon[] = _("POKéMON:");
// const u8 gText_PokenavMatchCall_SelfIntroduction[] = _("MOTTO:");
const u8 gText_Pokenav_ClearButtonList[] = _("{CLEAR 0x80}");
const u8 gText_PokenavMap_ZoomedOutButtons[] = _("{A_BUTTON}ZOOM {B_BUTTON}ZURÜCK");
const u8 gText_PokenavMap_ZoomedInButtons[] = _("{A_BUTTON}GANZ {B_BUTTON}ZURÜCK");
const u8 gText_PokenavCondition_MonListButtons[] = _("{A_BUTTON}ZUSTAND {B_BUTTON}ZURÜCK");
const u8 gText_PokenavCondition_MonStatusButtons[] = _("{A_BUTTON}MARKIERUNG {B_BUTTON}ZURÜCK");
const u8 gText_PokenavCondition_MarkingButtons[] = _("{A_BUTTON}WAHL MARK. {B_BUTTON}ZURÜCK");
const u8 gText_PokenavMatchCall_TrainerListButtons[] = _("{A_BUTTON}MENÜ {B_BUTTON}ZURÜCK");
const u8 gText_PokenavMatchCall_CallMenuButtons[] = _("{A_BUTTON}O.K. {B_BUTTON}ZURÜCK");
const u8 gText_PokenavMatchCall_CheckTrainerButtons[] = _("{B_BUTTON}ZURÜCK");
const u8 gText_PokenavRibbons_MonListButtons[] = _("{A_BUTTON}BÄNDER {B_BUTTON}ZURÜCK");
const u8 gText_PokenavRibbons_RibbonListButtons[] = _("{A_BUTTON}PRÜFEN {B_BUTTON}ZURÜCK");
const u8 gText_PokenavRibbons_RibbonCheckButtons[] = _("{B_BUTTON}ZURÜCK");

// const u8 gText_TrainerCloseBy[] = _("Der TRAINER ist in der Nähe.\nSprich mit ihm persönlich!");

// const u8 gText_Number2[] = _("Nr. ");
const u8 gText_Ribbons[] = _("RIBBONS"); // Unused

// const u8 gText_Unknown[] = _("UNBEKANNT");
const u8 gText_Call[] = _("ANRUFEN");
const u8 gText_Check[] = _("PRÜFEN");
const u8 gText_Cancel6[] = _("ZURÜCK");
// const u8 gText_NumberIndex[] = _("Nr. {DYNAMIC 0}");
// const u8 gText_RibbonsF700[] = _("BÄNDER: {DYNAMIC 0}");

const u8 gText_0Pts[] = _("0 Pkt.");
const u8 gText_10Pts[] = _("10 Pkt.");
const u8 gText_20Pts[] = _("20 Pkt.");
const u8 gText_30Pts[] = _("30 Pkt.");
const u8 gText_40Pts[] = _("40 Pkt.");
const u8 gText_50Pts[] = _("50 Pkt.");
const u8 gText_60Pts[] = _("60 Pkt.");
const u8 gText_70Pts[] = _("70 Pkt.");
const u8 gText_80Pts[] = _("80 Pkt.");
const u8 gText_90Pts[] = _("90 Pkt.");
const u8 gText_100Pts[] = _("100 Pkt.");
const u8 gText_QuestionMark[] = _("?");
const u8 gText_KissPoster16BP[] = _("KUSS-POSTER{CLEAR_TO 0x5E}16GP");
const u8 gText_KissCushion32BP[] = _("KUSS-KISSEN{CLEAR_TO 0x5E}32GP");
const u8 gText_SmoochumDoll32BP[] = _("KUSSILLA-PUPPE{CLEAR_TO 0x5E}32GP");
const u8 gText_TogepiDoll48BP[] = _("TOGEPI-PUPPE{CLEAR_TO 0x5E}48GP");
const u8 gText_MeowthDoll48BP[] = _("MAUZI-PUPPE{CLEAR_TO 0x5E}48GP");
const u8 gText_ClefairyDoll48BP[] = _("PIEPI-PUPPE{CLEAR_TO 0x5E}48GP");
const u8 gText_DittoDoll48BP[] = _("DITTO-PUPPE{CLEAR_TO 0x5E}48GP");
const u8 gText_CyndaquilDoll80BP[] = _("FEURIGEL-PUPPE{CLEAR_TO 0x5E}80GP");
const u8 gText_ChikoritaDoll80BP[] = _("ENDIVIE-PUPPE{CLEAR_TO 0x5E}80GP");
const u8 gText_TotodileDoll80BP[] = _("KARNIMANIPUPPE{CLEAR_TO 0x5E}80GP");
const u8 gText_LaprasDoll128BP[] = _("LAPRAS-PUPPE{CLEAR_TO 0x60}128GP");
const u8 gText_SnorlaxDoll128BP[] = _("RELAXO-PUPPE{CLEAR_TO 0x60}128GP");
const u8 gText_VenusaurDoll256BP[] = _("BISAFLOR-PUPPE{CLEAR_TO 0x60}256GP");
const u8 gText_CharizardDoll256BP[] = _("GLURAK-PUPPE{CLEAR_TO 0x60}256GP");
const u8 gText_BlastoiseDoll256BP[] = _("TURTOK-PUPPE{CLEAR_TO 0x60}256GP");
const u8 gText_Protein1BP[] = _("PROTEIN{CLEAR_TO 0x64}1GP");
const u8 gText_Calcium1BP[] = _("KALZIUM{CLEAR_TO 0x64}1GP");
const u8 gText_Iron1BP[] = _("EISEN{CLEAR_TO 0x64}1GP");
const u8 gText_Zinc1BP[] = _("ZINK{CLEAR_TO 0x64}1GP");
const u8 gText_Carbos1BP[] = _("CARBON{CLEAR_TO 0x64}1GP");
const u8 gText_HpUp1BP[] = _("KP-PLUS{CLEAR_TO 0x64}1GP");
const u8 gText_Leftovers48BP[] = _("ÜBERRESTE{CLEAR_TO 0x5E}48GP");
const u8 gText_WhiteHerb48BP[] = _("SCHLOHKRAUT{CLEAR_TO 0x5E}48GP");
const u8 gText_QuickClaw48BP[] = _("FLINKKLAUE{CLEAR_TO 0x5E}48GP");
const u8 gText_MentalHerb48BP[] = _("MENTALKRAUT{CLEAR_TO 0x5E}48GP");
const u8 gText_BrightPowder64BP[] = _("BLENDPUDER{CLEAR_TO 0x5E}64GP");
const u8 gText_ChoiceBand64BP[] = _("WAHLBAND{CLEAR_TO 0x5E}64GP");
const u8 gText_KingsRock64BP[] = _("KING-STEIN{CLEAR_TO 0x5E}64GP");
const u8 gText_FocusBand64BP[] = _("FOKUS-BAND{CLEAR_TO 0x5E}64GP");
const u8 gText_ScopeLens64BP[] = _("SCOPE-LINSE{CLEAR_TO 0x5E}64GP");
const u8 gText_Softboiled16BP[] = _("WEICHEI{CLEAR_TO 0x4E}16GP");
const u8 gText_SeismicToss24BP[] = _("GEOWURF{CLEAR_TO 0x4E}24GP");
const u8 gText_DreamEater24BP[] = _("TRAUMFRESSER{CLEAR_TO 0x4E}24GP");
const u8 gText_MegaPunch24BP[] = _("MEGAHIEB{CLEAR_TO 0x4E}24GP");
const u8 gText_MegaKick48BP[] = _("MEGAKICK{CLEAR_TO 0x4E}48GP");
const u8 gText_BodySlam48BP[] = _("BODYSLAM{CLEAR_TO 0x4E}48GP");
const u8 gText_RockSlide48BP[] = _("STEINHAGEL{CLEAR_TO 0x4E}48GP");
const u8 gText_Counter48BP[] = _("KONTER{CLEAR_TO 0x4E}48GP");
const u8 gText_ThunderWave48BP[] = _("DONNERWELLE{CLEAR_TO 0x4E}48GP");
const u8 gText_SwordsDance48BP[] = _("SCHWERTTANZ{CLEAR_TO 0x4E}48GP");
const u8 gText_DefenseCurl16BP[] = _("EINIGLER{CLEAR_TO 0x4E}16GP");
const u8 gText_Snore24BP[] = _("SCHNARCHER{CLEAR_TO 0x4E}24GP");
const u8 gText_MudSlap24BP[] = _("LEHMSCHELLE{CLEAR_TO 0x4E}24GP");
const u8 gText_Swift24BP[] = _("STERNSCHAUER{CLEAR_TO 0x4E}24GP");
const u8 gText_IcyWind24BP[] = _("EISSTURM{CLEAR_TO 0x4E}24GP");
const u8 gText_Endure48BP[] = _("AUSDAUER{CLEAR_TO 0x4E}48GP");
const u8 gText_PsychUp48BP[] = _("PSYCHO-PLUS{CLEAR_TO 0x4E}48GP");
const u8 gText_IcePunch48BP[] = _("EISHIEB{CLEAR_TO 0x4E}48GP");
const u8 gText_ThunderPunch48BP[] = _("DONNERSCHLAG{CLEAR_TO 0x4E}48GP");
const u8 gText_FirePunch48BP[] = _("FEUERSCHLAG{CLEAR_TO 0x4E}48GP");
const u8 gText_FrenzyPlant64BP[] = _("FRENZY PLANT{CLEAR_TO 0x4E}64BP");
const u8 gText_BlastBurn64BP[] = _("BLAST BURN{CLEAR_TO 0x4E}64BP");
const u8 gText_HydroCannon64BP[] = _("HYDRO CANNON{CLEAR_TO 0x4E}64BP");

const u8 gText_PkmnSurvived_FldPsn[] = _("{STR_VAR_1} überlebt die vergiftung.\nDas Gift ist verschwunden!\p");

const u8 gText_Easy[] = _("LEICHT");
const u8 gText_Hard[] = _("HART");
const u8 gText_Modern[] = _("MODERN");
const u8 gText_Classic[] = _("CLASSIC");
//crystal texts
const u8 gText_Sunday[] = _("SONNTAG");
const u8 gText_Monday[] = _("MONTAG");
const u8 gText_Tuesday[] = _("DIENSTAG");
const u8 gText_Wednesday[] = _("MITTWOCH");
const u8 gText_Thursday[] = _("DONNERSTAG");
const u8 gText_Friday[] = _("FREITAG");
const u8 gText_Saturday[] = _("SAMSTAG");

const u8 gText_LoveBall[] =     _("LIEBE    / PIRSIF  / (FRY/PSY)");
const u8 gText_Lure[] =         _("LOCK    / FRAGIA  / (WTR/DRG)");
const u8 gText_FriendBall[] =   _("FREUND / AMREN  / (KÄF/GRS)");
const u8 gText_Heavy[] =        _("SCHWER   / SINEL   / (GST/BOD/STL)");
const u8 gText_Moon[] =         _("MOND    / MARON / (UNL/GST/GIF)");
const u8 gText_Fast[] =         _("SCHNELL    / WILBI / (ELC/FIG/FEU)");
const u8 gText_LevelBall[] =    _("LEVEL  / PERSIM / (NRM/FLY/EIS)");

const u8 gText_Abra[] = _("ABRA 120 COINS");
const u8 gText_Clefairy[] = _("PIEPI 500 COINS");
const u8 gText_Munchlax[] = _("MAMPFAXO 2800 COINS");
const u8 gText_Dratini[] = _("DRATINI 5500 COINS");
const u8 gText_Porygon[] = _("PORYGON 6500 COINS");

const u8 gText_Pal[] = _("Kumpel");
const u8 gText_Underling[] = _("Untergebener");

const u8 gText_Strategy[] = _("Strategie");
const u8 gText_Training[] = _("Training");
const u8 gText_Cheating[] = _("Schummeln");

const u8 gText_WeakPerson[] = _("Schwache Person");
const u8 gText_ToughPerson[] = _("Starke Person");
const u8 gText_Anybody[] = _("Irgendjemand");

const u8 gText_Love2[] = _("Liebe");
const u8 gText_Violence[] = _("Gewalt");
const u8 gText_Knowledge[] = _("Wissen");

const u8 gText_Tough3[] = _("Zäh");
const u8 gText_Weak[] = _("Schwach");
const u8 gText_Both[] = _("Beides");

const u8 gText_BlueStone[] = _("BLAUER STEIN");
const u8 gText_GreenStone[] = _("GRÜNER STEIN");
const u8 gText_RedStone[] = _("ROTER STEIN");

// const u8 gText_MatchCallSteven_Strategy[] = _("Nutze die Schwachpunkte!");
// const u8 gText_MatchCallSteven_Pokemon[] = _("Ultimative STAHL-POKéMON.");
const u8 gText_MatchCallSteven_Intro1_BeforeMeteorFallsBattle[] = _("Ich erklimme Wasserfälle");
const u8 gText_MatchCallSteven_Intro2_BeforeMeteorFallsBattle[] = _("für einen seltenen Stein!");
const u8 gText_MatchCallSteven_Intro1_AfterMeteorFallsBattle[] = _("Schließlich bin ich der");
const u8 gText_MatchCallSteven_Intro2_AfterMeteorFallsBattle[] = _("Stärkste und Dynamischste!");
// const u8 gText_MatchCallBrendan_Strategy[] = _("Kämpfe weise!");
// const u8 gText_MatchCallBrendan_Pokemon[] = _("Ich setze viele PKMN ein!");
// const u8 gText_MatchCallBrendan_Intro1[] = _("Ich werde ein besserer PKMN-");
// const u8 gText_MatchCallBrendan_Intro2[] = _("Professor als mein Vater!");
// const u8 gText_MatchCallMay_Strategy[] = _("Ich kämpfe nicht gut!");
// const u8 gText_MatchCallMay_Pokemon[] = _("Ich setze jedes PKMN ein!");
// const u8 gText_MatchCallMay_Intro1[] = _("Meine PKMN helfen Vater");
// const u8 gText_MatchCallMay_Intro2[] = _("bei seinen Forschungen.");

// const u8 gText_ContinueMenuPlayer[] = _("SPIELER");
// const u8 gText_ContinueMenuTime[] = _("SPIELZEIT");
// const u8 gText_ContinueMenuPokedex[] = _("POKéDEX");
// const u8 gText_ContinueMenuBadges[] = _("ORDEN");

const u8 gText_Red[] = _("ROT");
const u8 gText_Blue[] = _("BLAU");
const u8 gText_3Dashes[] = _("---"); // Unused

const u8 gText_Lv502[] = _("Lv. 50");
const u8 gText_OpenLv[] = _("O. KÄMPFE");

ALIGNED(4) const u8 gText_RecordsLv50[] = _("Lv. 50");
ALIGNED(4) const u8 gText_RecordsOpenLevel[] = _("OFFENE KÄMPFE");

const u8 gText_Autorun[] = _("AUTORUN");

const u8 gText_FollowerEnable[] = _("{PKMN} FOLLOWER");  //tx_optionsPlus
const u8 gText_AutorunEnable[] = _("AUTORUN");  //tx_optionsPlus
const u8 gText_OptionMatchCalls[] = _("MATCH CALLS");  //tx_optionsPlus
const u8 gText_OptionMenuSave[] = _("SAVE");  //tx_optionsPlus
const u8 gText_OptionStyle[] = _("MOVE SPLIT");  //tx_optionsPlus
const u8 gText_OptionDifficulty[] = _("DIFFICULTY");  //tx_optionsPlus

const u8 gText_AutorunOff[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}OFF"); //OLD
const u8 gText_AutorunOn[] = _("{COLOR GREEN}{SHADOW LIGHT_GREEN}ON"); //OLD

const u8 gText_Floor0[] = _("Floor 0");

// const u8 gText_CallCantBeMadeHere[] = _("Von hier kannst du nicht anrufen!");
const u8 gText_ContestLady_Handsome[] = _("HÜBSCH");
const u8 gText_ContestLady_Vinny[] = _("WINNIE");
const u8 gText_ContestLady_Moreme[] = _("SASCHA");
const u8 gText_ContestLady_Ironhard[] = _("EISENHART");
const u8 gText_ContestLady_Muscle[] = _("ARNIE");
const u8 gText_ContestLady_Coolness[] = _("Coolness");
const u8 gText_ContestLady_Beauty[] = _("Schönheit");
const u8 gText_ContestLady_Cuteness[] = _("Anmut");
const u8 gText_ContestLady_Smartness[] = _("Klugheit");
const u8 gText_ContestLady_Toughness[] = _("Stärke");
const u8 gText_QuizLady_Lady[] = _("Lady");
const u8 gText_FavorLady_Slippery[] = _("rutschig");
const u8 gText_FavorLady_Roundish[] = _("rundlich");
const u8 gText_FavorLady_Whamish[] = _("beschlagen");
const u8 gText_FavorLady_Shiny[] = _("funkelnd");
const u8 gText_FavorLady_Sticky[] = _("klebrig");
const u8 gText_FavorLady_Pointy[] = _("spitz");

const u8 gText_MrStoneMatchCallDesc[] = _("DEVON PRÄS.");
const u8 gText_MrStoneMatchCallName[] = _("MR. TRUMM");
const u8 gText_StevenMatchCallDesc[] = _("STEINHART");
const u8 gText_StevenMatchCallName[] = _("TROY");
// const u8 gText_MayBrendanMatchCallDesc[] = _("RADNACHBAR");
const u8 gText_NormanMatchCallDesc[] = _("ZUVERLÄSSIG");
const u8 gText_MomMatchCallDesc[] = _("RUHIG&NETT");
const u8 gText_BaobaMatchCallDesc[] = _("SAFARI WARDEN");
const u8 gText_WallyMatchCallDesc[] = _("{PKMN}-FAN");
const u8 gText_NormanMatchCallName[] = _("VATI");
const u8 gText_MomMatchCallName[] = _("MUTTI");
const u8 gText_BaobaMatchCallName[] = _("BAOBA");
const u8 gText_ScottMatchCallDesc[] = _("TRUGAUGEN");
const u8 gText_ScottMatchCallName[] = _("SCOTT");
const u8 gText_RoxanneMatchCallDesc[] = _("GROOVIG");
const u8 gText_BrawlyMatchCallDesc[] = _("DER MEGAHIT");
const u8 gText_WattsonMatchCallDesc[] = _("TOLLSCHOCK");
const u8 gText_FlanneryMatchCallDesc[] = _("PASSIONIST");
const u8 gText_WinonaMatchCallDesc[] = _("FIRMAMIST");
const u8 gText_TateLizaMatchCallDesc[] = _("MYSTO DUO");
const u8 gText_JuanMatchCallDesc[] = _("FRAUENHELD");
// const u8 gText_EliteFourMatchCallDesc[] = _("TOP VIER");
const u8 gText_ChampionMatchCallDesc[] = _("CHAMP");
const u8 gText_ProfBirchMatchCallDesc[] = _("{PKMN}-PROF.");

const u8 gText_AshQty[] = _("ASH QTY:\n{STR_VAR_1}{PAUSE_UNTIL_PRESS}");

// Inf. Repel
const u8 gText_infiniteRepelOn[] = _("Turned on the Inf. Repel.{PAUSE_UNTIL_PRESS}");
const u8 gText_infiniteRepelOff[] = _("Turned off the Inf. Repel.{PAUSE_UNTIL_PRESS}");
// Inf. Candies
const u8 gText_infiniteCandies[] = _("You obtained 999 RARE\nCANDIES!{PAUSE_UNTIL_PRESS}");

//tx_randomizer_and_challenges
const u8 gText_NuzlockeCantThrowPokeBallRoute[]             = _("Du hast bereits deine Begegnung\nfür dieses Gebiet genutzt!{PAUSE_UNTIL_PRESS}");
const u8 gText_NuzlockeCantThrowPokeBallSpeciesClause[]     = _("Du hast bereits ein POKéMON\ndieser Evolutionsreihe gefangen!{PAUSE_UNTIL_PRESS}");
const u8 gText_NuzlockeCantThrowPokeBallAlreadyCaught[]     = _("Du hast dieses POKéMON\nbereits gefangen!{PAUSE_UNTIL_PRESS}");
const u8 gText_OneTypeChallengeCantThrowPokeBall[]          = _("Ein One-Type-Challenge läuft,\nFangen blockiert!{PAUSE_UNTIL_PRESS}");
const u8 gText_BattleRules_NoItems_Player[]                 = _("Wettkampfregeln!\nKeine Items im Kampf!{PAUSE_UNTIL_PRESS}");


//HGSS_Ui PokedexPlus
const u8 gText_Stats_Buttons[]  = _("{A_BUTTON}TOGGLE   {DPAD_UPDOWN}ATTACKEN");
const u8 gText_Stats_Buttons_Decapped[]  = _("{A_BUTTON}Toggle   {DPAD_UPDOWN}Attacken");
const u8 gText_Stats_HP[]       = _("KP");
const u8 gText_Stats_Attack[]   = _("ATK");
const u8 gText_Stats_Defense[]  = _("DEF");
const u8 gText_Stats_Speed[]    = _("SPE");
const u8 gText_Stats_SpAttack[]    = _("SP.A");
const u8 gText_Stats_SpDefense[]    = _("SP.D");
const u8 gText_Stats_EV_Plus1[]     = _("{UP_ARROW_2}");
const u8 gText_Stats_EV_Plus2[]     = _("{UP_ARROW_2}{UP_ARROW_2}");
const u8 gText_Stats_EV_Plus3[]     = _("{UP_ARROW_2}{UP_ARROW_2}{UP_ARROW_2}");
const u8 gText_Stats_EvStr1Str2[]   = _("{STR_VAR_1}{STR_VAR_2}");
const u8 gText_Stats_MoveSelectedMax[]      = _("{STR_VAR_1} / {STR_VAR_2}");
const u8 gText_Stats_MoveLevel[]     = _("LVL");
const u8 gText_Stats_Gender_0[]      = _("♂");
const u8 gText_Stats_Gender_12_5[]   = _("♀ 1/7 ♂"); //_("♀ 12.5 / 87.5 ♂");
const u8 gText_Stats_Gender_25[]     = _("♀ 1/3 ♂");     //_("♀ 25 / 75 ♂");
const u8 gText_Stats_Gender_50[]     = _("♀ 1/1 ♂");     //_("♀ 50 / 50 ♂");
const u8 gText_Stats_Gender_75[]     = _("♀ 3/1 ♂");     //_("♀ 75 / 25 ♂");
const u8 gText_Stats_Gender_87_5[]   = _("♀ 7/1 ♂");
const u8 gText_Stats_Gender_100[]    = _("♀");
const u8 gText_Stats_CatchRate[]     = _("CATCH{0x5B}: ");
const u8 gText_Stats_CatchRate_Legend[]         = _("LEGENDÄR");
const u8 gText_Stats_CatchRate_VeryHard[]       = _("SEHR SCHWER");
const u8 gText_Stats_CatchRate_Difficult[]      = _("SCHWER");
const u8 gText_Stats_CatchRate_Medium[]         = _("NORMAL");
const u8 gText_Stats_CatchRate_Relaxed[]        = _("ENTSPANNT");
const u8 gText_Stats_CatchRate_Easy[]           = _("EINFACH");
const u8 gText_Stats_ExpYield[]      = _("EXP GEWINN: ");
const u8 gText_Stats_EggCycles[]     = _("SCHLÜPF SCHRITTE:");
const u8 gText_Stats_EggCycles_VeryFast[]   = _("{EMOJI_BOLT}{EMOJI_DIZZYEGG}");
const u8 gText_Stats_EggCycles_Fast[]       = _("{EMOJI_DIZZYEGG}");
const u8 gText_Stats_EggCycles_Normal[]     = _("{EMOJI_DIZZYEGG}{EMOJI_DIZZYEGG}");
const u8 gText_Stats_EggCycles_Slow[]       = _("{EMOJI_DIZZYEGG}{EMOJI_DIZZYEGG}{EMOJI_DIZZYEGG}");
const u8 gText_Stats_Growthrate[]    = _("WACHSTUM: ");
const u8 gText_Stats_Friendship[]    = _("FREUNDSCHAFT:");
const u8 gText_Stats_Friendship_BigAnger[]      = _("{EMOJI_BIGANGER}");
const u8 gText_Stats_Friendship_Neutral[]       = _("{EMOJI_NEUTRAL}");
const u8 gText_Stats_Friendship_Happy[]         = _("{EMOJI_HAPPY}");
const u8 gText_Stats_Friendship_BigSmile[]      = _("{EMOJI_BIGSMILE}");
const u8 gText_Stats_MEDIUM_FAST[]   = _("MED. SCHNELL");
const u8 gText_Stats_ERRATIC[]       = _("UNREGELMÄ?IG");
const u8 gText_Stats_FLUCTUATING[]   = _("ABWECHSELND");
const u8 gText_Stats_MEDIUM_SLOW[]   = _("MED. LANGSAM");
const u8 gText_Stats_FAST[]          = _("SCHNELL");
const u8 gText_Stats_SLOW[]          = _("LANGSAM");
const u8 gText_Stats_ContestHeart[]  = _("H");
const u8 gText_Stats_Minus[] = _("-");
const u8 gText_Stats_eggGroup[]             = _("EI G1:");
const u8 gText_Stats_eggGroup_Groups[]      = _("{STR_VAR_1}/{STR_VAR_2}");
const u8 gText_Stats_eggGroup_MONSTER[]     = _("MONSTER");
const u8 gText_Stats_eggGroup_WATER_1[]     = _("WASSER {CIRCLE_1}");
const u8 gText_Stats_eggGroup_BUG[]         = _("KÄFER");
const u8 gText_Stats_eggGroup_FLYING[]      = _("FLUG");
const u8 gText_Stats_eggGroup_FIELD[]       = _("FELD");
const u8 gText_Stats_eggGroup_FAIRY[]       = _("FEEN");
const u8 gText_Stats_eggGroup_GRASS[]       = _("PFLANZE");
const u8 gText_Stats_eggGroup_HUMAN_LIKE[]  = _("HUMANOID");
const u8 gText_Stats_eggGroup_WATER_3[]     = _("WASSER {CIRCLE_3}");
const u8 gText_Stats_eggGroup_MINERAL[]     = _("MINERAL");
const u8 gText_Stats_eggGroup_AMORPHOUS[]   = _("FORMLOS");
const u8 gText_Stats_eggGroup_WATER_2[]     = _("WASSER {CIRCLE_2}");
const u8 gText_Stats_eggGroup_DITTO[]       = _("DITTO");
const u8 gText_Stats_eggGroup_DRAGON[]      = _("DRACHE");
const u8 gText_Stats_eggGroup_UNDISCOVERED[]= _("---");
const u8 gText_Dex_SEEN[]   = _("GESEHEN");
const u8 gText_Dex_OWN[]    = _("GEFANGEN");

const u8 gText_EVO_Buttons[]                        = _("{DPAD_UPDOWN}EVOs  {A_BUTTON}CHECK");
const u8 gText_EVO_Buttons_Decapped[]               = _("{DPAD_UPDOWN}Evos  {A_BUTTON}Check");
const u8 gText_EVO_Buttons_PE[]                     = _("{DPAD_UPDOWN}EVOs  {A_BUTTON}CHECK  {START_BUTTON}FORMs");
const u8 gText_EVO_Buttons_Decapped_PE[]            = _("{DPAD_UPDOWN}Evos  {A_BUTTON}Check  {START_BUTTON}Froms");
const u8 gText_EVO_Name[]                           = _("{STR_VAR_3}:");
const u8 gText_EVO_PreEvo[]                         = _("{STR_VAR_1} entwickelt sich von {STR_VAR_2}");
const u8 gText_EVO_PreEvo_PE_Mega[]                 = _("{STR_VAR_1} mega evolves with {STR_VAR_2}");
const u8 gText_EVO_FRIENDSHIP[]                     = _("LvlUp, hohe freundschaft");
const u8 gText_EVO_FRIENDSHIP_DAY[]                 = _("LvlUp, hohe freundschaft, tag");
const u8 gText_EVO_FRIENDSHIP_NIGHT[]               = _("LvlUp, hohe freundschaft, nacht");
const u8 gText_EVO_LEVEL[]                          = _("LvlUp zu {STR_VAR_2}");
const u8 gText_EVO_TRADE[]                          = _("Tausch");
const u8 gText_EVO_TRADE_ITEM[]                     = _("Tausch, mit {STR_VAR_2}");
const u8 gText_EVO_ITEM[]                           = _("{STR_VAR_2} wird benutzt");
const u8 gText_EVO_LEVEL_ATK_GT_DEF[]               = _("LvlUp zu {STR_VAR_2}, Atk > Def");
const u8 gText_EVO_LEVEL_ATK_EQ_DEF[]               = _("LvlUp zu {STR_VAR_2}, Atk = Def");
const u8 gText_EVO_LEVEL_ATK_LT_DEF[]               = _("LvlUp zu {STR_VAR_2}, Atk < Def");
const u8 gText_EVO_LEVEL_SILCOON[]                  = _("LvlUp zu {STR_VAR_2}, Silcoon personality");
const u8 gText_EVO_LEVEL_CASCOON[]                  = _("LvlUp zu {STR_VAR_2}, Cascoon personality");
const u8 gText_EVO_LEVEL_NINJASK[]                  = _("LvlUp zu {STR_VAR_2}");
const u8 gText_EVO_LEVEL_SHEDINJA[]                 = _("LvlUp zu {STR_VAR_2}, team<6, 1x POKéBALL");
const u8 gText_EVO_BEAUTY[]                         = _("LvlUp, hohe schönheit");
const u8 gText_EVO_LEVEL_FEMALE[]                   = _("LvlUp zu {STR_VAR_2}, ist weibl");
const u8 gText_EVO_LEVEL_MALE[]                     = _("LvlUp zu {STR_VAR_2}, ist männl");
const u8 gText_EVO_LEVEL_NIGHT[]                    = _("LvlUp zu {STR_VAR_2}, nacht");
const u8 gText_EVO_LEVEL_DAY[]                      = _("LvlUp zu {STR_VAR_2}, tag");
const u8 gText_EVO_LEVEL_DUSK[]                     = _("LvlUp zu {STR_VAR_2}, morgens (6-9)");
const u8 gText_EVO_ITEM_HOLD_DAY[]                  = _("LvlUp, hält {STR_VAR_2}, tag");
const u8 gText_EVO_ITEM_HOLD_NIGHT[]                = _("LvlUp, hält {STR_VAR_2}, nacht");
const u8 gText_EVO_ITEM_HOLD[]                      = _("LvlUp, hält {STR_VAR_2}");
const u8 gText_EVO_MOVE[]                           = _("LvlUp, kennt {STR_VAR_2}");
const u8 gText_EVO_MOVE_TYPE[]                      = _("LvlUp, kennt {STR_VAR_2} attacke");
const u8 gText_EVO_MAPSEC[]                         = _("LvlUp auf {STR_VAR_2}");
const u8 gText_EVO_ITEM_MALE[]                      = _("{STR_VAR_2} benutzt für männl");
const u8 gText_EVO_ITEM_FEMALE[]                    = _("{STR_VAR_2} benutzt für weibl");
const u8 gText_EVO_LEVEL_RAIN[]                     = _("LvlUp zu {STR_VAR_2} bei regen");
const u8 gText_EVO_SPECIFIC_MON_IN_PARTY[]          = _("LvlUp mit {STR_VAR_2} in team");
const u8 gText_EVO_LEVEL_DARK_TYPE_MON_IN_PARTY[]   = _("LvlUp mit unlicht in team");
const u8 gText_EVO_TRADE_SPECIFIC_MON[]             = _("Tausch für {STR_VAR_2}");
const u8 gText_EVO_SPECIFIC_MAP[]                   = _("LvlUp auf {STR_VAR_2}");
const u8 gText_EVO_UNKNOWN[]                        = _("Methode unklar");
const u8 gText_EVO_NONE[]                           = _("{STR_VAR_1} hat keine entwicklung.");

const u8 gText_FORMS_Buttons_PE[]                   = _("{A_BUTTON}FORM MODUS  {START_BUTTON}EVOs");
const u8 gText_FORMS_Buttons_Decapped_PE[]          = _("{START_BUTTON}Evos");
const u8 gText_FORMS_Buttons_Submenu_PE[]           = _("{DPAD_NONE}FORMEN {A_BUTTON}CHECK {START_BUTTON}EVOs");
const u8 gText_FORMS_Buttons_Submenu_Decapped_PE[]  = _("{START_BUTTON}Evos");
const u8 gText_FORMS_NONE[]                         = _("{STR_VAR_1} hat keine alternative Form.");
const u8 gText_Var1DotVar2_Metric[]                 = _("{STR_VAR_1}.{STR_VAR_2}cm");
// end HnS

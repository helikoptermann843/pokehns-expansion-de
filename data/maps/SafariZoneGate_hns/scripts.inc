SafariZoneGate_hns_MapScripts::
	.byte 0

SafariZoneGate_EventScript_Trigger::
	clearflag FLAG_SAFARI_ZONE_WEST_EXPANSION
	clearflag FLAG_SAFARI_ZONE_EAST_EXPANSION
	setflag FLAG_VISITED_SAFARI_ZONE_GATE
	setvar VAR_SAFARI_ZONE_GATE_STATE, 3
	end

SafariZoneGate_EventScript_WorkerM::
	lock
	faceplayer
	msgbox SafariZone_Text_ForeignFeeling, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_EventScript_Silent::
	lock
	faceplayer
	msgbox SafariZone_Text_SilentNPC, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_EventScript_Kangaskhan::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
	msgbox SafariZone_Text_Kangaskhan, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SafariZoneGate_EventScript_Engineer::
	lock
	faceplayer
	msgbox SafariZone_Text_JigglypuffTrainer, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_EventScript_Girl::
	lock
	faceplayer
	msgbox SafariZone_Text_FirstCatch, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_EventScript_SlowpokeLady::
	lock
	faceplayer
	msgbox SafariZone_Text_SlowpokeFan, MSGBOX_DEFAULT
	closemessage
	release
	end


SafariZone_Text_ForeignFeeling::
	.string "Safari-Zone...\n"
	.string "Hier fühlt es sich an, als wäre\n"
	.string "ich in einem fremden Land.\p"
	.string "Es weckt ein seltsames Gefühl.$"

SafariZone_Text_SilentNPC::
	.string "..................\p"
	.string "(Ich rede nicht gerne.)$"

SafariZone_Text_Kangaskhan::
	.string "Kangama: ..................$"

SafariZone_Text_JigglypuffTrainer::
	.string "Diese Safari-Zone ist großartig! Ich\l"
	.string "habe einfach Pokémon gejagt,\n"
	.string "mein Pummeluff war deswegen aber\p"
	.string "verärgert...$"

SafariZone_Text_FirstCatch::
	.string "Ich wollte schon immer mein erstes\n"
	.string "Pokémon in der Safari-Zone fangen.$"

SafariZone_Text_SlowpokeFan::
	.string "Es gibt viele Pokémon zur Auswahl,\n"
	.string "aber nichts ist so süß wie Flegmon.\p"
	.string "Die Leute sagen oft, ich sehe aus\n"
	.string "wie eins!$"

SafariZone_Text_CustomSystem::
	.string "Du glaubst vielleicht, es gäbe\n"
	.string "ein ausgeklügeltes System,\l"
	.string "um die Safari-Zone zu gestalten, oder?\n"
	.string "\p"
	.string "Die Wahrheit ist...$"

SafariZone_Text_Sign:
	.string "Hier ist eine Nachricht…\p"
	.string "Bis auf weiteres bleibt das BÜRO\p"
	.string "der SAFARI-ZONE geschlossen.$"


SafariZoneGate_EventScript_IncenseClerk::
	goto_if_set FLAG_FINITE_TMS, SafariZoneGate_EventScript_IncenseClerkFinite
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SafariZoneGate_Pokemart_Incenses
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SafariZoneGate_Pokemart_Incenses:
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_NONE
	release
	end


SafariZoneGate_EventScript_IncenseClerkFinite::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SafariZoneGate_Pokemart_Incenses2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SafariZoneGate_Pokemart_Incenses2:
	.2byte ITEM_TM_HIDDEN_POWER
	.2byte ITEM_TM_SECRET_POWER
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_NONE
	release
	end

SafariZoneGate_EventScript_VitaminGuru::
	lock
	faceplayer
	message SafariZoneGate_Text_VitaminGuruSellWhatYouNeed
	waitmessage
	pokemart SafariZoneGate_Pokemart_VitaminGuru
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SafariZoneGate_Pokemart_VitaminGuru:
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CARBOS
	.2byte ITEM_ZINC
	.2byte ITEM_CALCIUM
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE
	release
	end


SafariZoneGate_Text_VitaminGuruSellWhatYouNeed:
	.string "Ich bin der Vitamin-Guru\n"
	.string "und verkaufe dir was du brauchst!$"


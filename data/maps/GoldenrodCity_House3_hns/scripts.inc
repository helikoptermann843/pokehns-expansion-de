GoldenrodCity_House3_hns_MapScripts::
	.byte 0

GoldenrodCity_House3_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodHappinessRater_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_House3_EventScript_Twin::
	lock
	faceplayer
	msgbox GoldenrodHappinessRater_Text_Twin, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodHappinessRater_Text_PokefanM:
	.string "Ständig verliere ich in Kämpfen und\p"
	.string "meine Pokémon werden immer besiegt…\p"
	.string "Das mag der Grund\n"
	.string "sein, warum mich meine Pokémon nicht\l"
	.string "mögen…$"

GoldenrodHappinessRater_Text_Twin:
	.string "Wenn ich meinem\n"
	.string "Pokémon ein Item gebe, dann freut es\l"
	.string "sich!$"

GoldenrodHappinessRater_EventScript_FriendshipRater::
	lock
	faceplayer
	msgbox GoldenrodHappinessRater_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case FRIENDSHIP_NONE, GoldenrodHappinessRater_EventScript_DetestsYou
	case FRIENDSHIP_1_TO_49, GoldenrodHappinessRater_EventScript_VeryWary
	case FRIENDSHIP_50_TO_99, GoldenrodHappinessRater_EventScript_NotUsedToYou
	case FRIENDSHIP_100_TO_149, GoldenrodHappinessRater_EventScript_GettingUsedToYou
	case FRIENDSHIP_150_TO_199, GoldenrodHappinessRater_EventScript_LikesYouQuiteALot
	case FRIENDSHIP_200_TO_254, GoldenrodHappinessRater_EventScript_VeryHappy
	case FRIENDSHIP_MAX, GoldenrodHappinessRater_EventScript_AdoresYou
	release
	end

GoldenrodHappinessRater_EventScript_DetestsYou::
	msgbox GoldenrodHappinessRater_Text_DetestsYou, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_VeryWary::
	msgbox GoldenrodHappinessRater_Text_VeryWary, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_NotUsedToYou::
	msgbox GoldenrodHappinessRater_Text_NotUsedToYou, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_GettingUsedToYou::
	msgbox GoldenrodHappinessRater_Text_GettingUsedToYou, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_LikesYouQuiteALot::
	msgbox GoldenrodHappinessRater_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_VeryHappy::
	msgbox GoldenrodHappinessRater_Text_VeryHappy, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_AdoresYou::
	msgbox GoldenrodHappinessRater_Text_AdoresYou, MSGBOX_DEFAULT
	release
	end

GoldenrodHappinessRater_EventScript_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox GoldenrodHappinessRater_Text_Pikachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GoldenrodHappinessRater_Text_SeeHowMuchPokemonLikesYou:
	.string "Lass mich dein Pokémon anschauen.\n"
	.string "Ich prüfe wie sehr es dich mag\p"
	.string "Oh. Dein Pokémon…$"

GoldenrodHappinessRater_Text_AdoresYou:
	.string "Behandelst du deine Pokémon gut,\p"
	.string "werden sie dich regelrecht lieben.\p"
	.string "Oh! Lass mich dein\n"
	.string "Pokémon sehen…$"

GoldenrodHappinessRater_Text_VeryHappy:
	.string "Behandelst du deine Pokémon gut,\p"
	.string "werden sie dich regelrecht lieben.\p"
	.string "Oh! Lass mich dein\n"
	.string "Pokémon sehen…$"

GoldenrodHappinessRater_Text_LikesYouQuiteALot:
	.string "Es sieht sehr\n"
	.string "glücklich aus! Es muss dich sehr gern\l"
	.string "haben.$"

GoldenrodHappinessRater_Text_GettingUsedToYou:
	.string "Du solltest es\n"
	.string "besser behandeln. Es hat sich noch\l"
	.string "nicht an dich gewöhnt.$"

GoldenrodHappinessRater_Text_NotUsedToYou:
	.string "Du solltest es\n"
	.string "besser behandeln. Es hat sich noch\l"
	.string "nicht an dich gewöhnt.$"

GoldenrodHappinessRater_Text_VeryWary:
	.string "Wenn ich meinem\n"
	.string "Pokémon ein Item gebe, dann freut es\l"
	.string "sich!$"

GoldenrodHappinessRater_Text_DetestsYou:
	.string "Ich habe den Ein-\n"
	.string "druck, dass es dir wirklich vertraut.$"

GoldenrodHappinessRater_Text_Pikachu:
	.string "Behandelst du deine Pokémon gut,\p"
	.string "werden sie dich regelrecht lieben.\p"
	.string "Oh! Lass mich dein\n"
	.string "Pokémon sehen…$"


TinTower_1F_hns_MapScripts::
	.byte 0

TinTower_1F_EventScript_SageA::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, TinTower_1F_EventScript_SageA_Hooh
	msgbox TinTower_1F_Sage4_Text2, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageA_Hooh::
	msgbox TinTower_1F_Sage4_Text1, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageB::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, TinTower_1F_EventScript_SageB_Hooh
	msgbox TinTower_1F_Sage2_Text, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageB_Hooh::
	msgbox TinTower_1F_Sage1_Text, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageC::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, TinTower_1F_EventScript_SageC_Hooh
	msgbox TinTower_1F_Sage6_Text2, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageC_Hooh::
	msgbox TinTower_1F_Sage3_Text, MSGBOX_DEFAULT
	closemessage
	release
	end


TinTower_1F_Sage1_Text:
	.string "Die Legende besagt …\p"
	.string "Kommunizieren die Seelen von Pokémon\p"
	.string "und Menschen,\n"
	.string "kommt ein regenbogenfarbenes\p"
	.string "Pokémon vom Himmel herab…\p"
	.string "Könnte das bedeuten, dass die\p"
	.string "legendären Pokémon\n"
	.string "uns Menschen auf die Probe stellen?$"

TinTower_1F_Sage2_Text:
	.string "Als der BRONZETURM abbrannte, sollen\p"
	.string "drei namenlose Pokémon im Feuer\p"
	.string "umgekommen sein. Eine Tragödie.\p"
	.string "Jedoch…\p"
	.string "Ein regenbogenfarbenes Pokémon…\p"
	.string "Genauer gesagt…\p"
	.string "HO-OH kam vom Himmel herab und\p"
	.string "erweckte die drei\n"
	.string "Pokémon wieder zum Leben.\p"
	.string "Es sind…\p"
	.string "SUICUNE, ENTEI und RAIKOU.\p"
	.string "So lautet die Legende.$"

TinTower_1F_Sage3_Text:
	.string "Die beiden TÜRME wurden errichtet,\p"
	.string "um Freundschaft und Hoffnung\p"
	.string "zwischen Pokémon\n"
	.string "und den Menschen zu festigen.\p"
	.string "Das war vor 700\n"
	.string "Jahren, aber diese Maxime ist noch\l"
	.string "heute gültig.$"

TinTower_1F_Sage4_Text1:
	.string "Es scheint, als ob HO-OH vom ZINNTURM\n"
	.string "\p"
	.string "heruntergekommen ist!$"

TinTower_1F_Sage4_Text2:
	.string "Die legendären Pokémon sollen\p"
	.string "die drei Mächte verkörpern…\p"
	.string "Die Blitze, die im TURM einschlugen.\p"
	.string "Das Feuer, das den TURM zerstörte.\p"
	.string "Und den Regen, der das Feuer löschte…$"

TinTower_1F_Sage6_Text2:
	.string "Von den legendären Pokémon soll\p"
	.string "SUICUNE die\n"
	.string "stärkste Bindung zu HO-OH haben.\p"
	.string "Ich habe gehört, dass es auch eine\p"
	.string "Verbindung zu ei-\n"
	.string "nem Pokémon namens ICOGNITO gibt.\p"
	.string "ICOGNITO muss einen kooperativen\p"
	.string "Bund mit SUICUNE haben.$"

TinTower_1F_EusineHoOh_Text:
	.string "Ich wusste es.\p"
	.string "Ich wusste, dass\n"
	.string "du das regenbogenfarbene Pokémon\p"
	.string "sehen würdest, {PLAYER}.\p"
	.string "Meine Vorhersehung ist eingetreten.\p"
	.string "Meine Forschung\n"
	.string "ist nicht übel, würde ich sagen.\p"
	.string "Ich werde weiter-\n"
	.string "hin Pokémon studieren, um ein\l"
	.string "berühmter - MANIAC zu werden!$"

TinTower_1F_EusineSuicune_Text:
	.string "EUSIN: Wahnsinn! Einfach Wahnsinn!\p"
	.string "Einen derartigen\n"
	.string "Kampf habe ich noch nie gesehen.\p"
	.string "Das hat mich sehr beeindruckt.\p"
	.string "SUICUNE war stark, aber du warst noch\n"
	.string "\p"
	.string "unglaublicher, {PLAYER}.\p"
	.string "Ich hörte, dass SUICUNEs mystische\p"
	.string "Kraft ein regen-\n"
	.string "bogenfarbenes Pokémon anlockt.\p"
	.string "Vielleicht zeigt\n"
	.string "sich dieses - MON, nach dem, was\p"
	.string "sich heute ereignete.\p"
	.string "Ich werde diese\n"
	.string "Legende noch einmal nachlesen.\p"
	.string "Danke, dass ich diesem Spitzen-\p"
	.string "kampf beiwohnen durfte.\p"
	.string "Bis dann, {PLAYER}!$"

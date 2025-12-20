Route44_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route44_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route44_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route44_EventScript_Wilton::
	trainerbattle_single TRAINER_WILTON Route44_Text_FisherWilton1Seen, Route44_Text_FisherWilton1Beaten
	msgbox Route44_Text_FisherWiltonHugePoliwag, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Edgar::
	trainerbattle_single TRAINER_EDGAR Route44_Text_FisherEdgarSeen, Route44_Text_FisherEdgarBeaten
	msgbox Route44_Text_FisherEdgarAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Vance::
	trainerbattle_single TRAINER_VANCE Route44_Text_BirdKeeperVance1Seen, Route44_Text_BirdKeeperVance1Beaten
	msgbox Route44_Text_BirdKeeperVanceBirds, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Phil::
	trainerbattle_single TRAINER_PHIL Route44_Text_PsychicPhilSeen, Route44_Text_PsychicPhilBeaten
	msgbox Route44_Text_PsychicPhilAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Zach::
	trainerbattle_single TRAINER_ZACH Route44_Text_PokemaniacZachSeen, Route44_Text_PokemaniacZachBeaten
	msgbox Route44_Text_PokemaniacZachAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN Route44_Text_CooltrainermAllenSeen, Route44_Text_CooltrainermAllenBeaten
	msgbox Route44_Text_CooltrainermAllenAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Cybil::
	trainerbattle_single TRAINER_CYBIL Route44_Text_CooltrainerfCybilSeen, Route44_Text_CooltrainerfCybilBeaten
	msgbox Route44_Text_CooltrainerfCybilAfter, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Sign1::
	msgbox Route44_Text_Sign1, MSGBOX_SIGN
	end

Route44_EventScript_Sign2::
	msgbox Route44_Text_Sign2, MSGBOX_SIGN
	end

Route44_EventScript_Item_MaxRepel::
	finditem ITEM_MAX_REPEL
	end

Route44_EventScript_Item_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

Route44_EventScript_Item_Elixir::
	finditem ITEM_ELIXIR
	end

Route44_Text_FisherWilton1Seen:
	.string "Aah! Wegen dir\n"
	.string "habe ich ein QUAPSEL verloren!\p"
	.string "Was wirst du deswegen unternehmen?$"

Route44_Text_FisherWilton1Beaten:
	.string "Vergiss es einfach.$"

Route44_Text_FisherWiltonHugePoliwag:
	.string "Dieses QUAPSEL,\n"
	.string "das geflohen ist… Das war riesig.\p"
	.string "Ich könnte\n"
	.string "schwören, dass es 5 Meter lang war!$"

Route44_Text_FisherEdgarSeen:
	.string "Ich angle so\n"
	.string "lange, bis ich nicht mehr kann.\p"
	.string "Und ich kämpfe bis zum Umfallen.\p"
	.string "So gehe ich\n"
	.string "auch mit meinen Pokémon um.$"

Route44_Text_FisherEdgarBeaten:
	.string "Hmm… Das ist nicht\p"
	.string "richtig.$"

Route44_Text_FisherEdgarAfter::
	.string "Das sind 100 Siege und 101\n"
	.string "Niederlagen. \p"
	.string "Ich werde eine Weile nicht mehr\n"
	.string "kämpfen.$"

Route44_Text_BirdKeeperVance1Seen:
	.string "Hast du schon von\n"
	.string "dem legendären Vogel-Pokémon gehört?$"

Route44_Text_BirdKeeperVance1Beaten:
	.string "Puh! Du bist nicht\n"
	.string "von schlechten Eltern.$"

Route44_Text_BirdKeeperVanceBirds::
	.string "Arktos, Zapdos und Lavados sind\n"
	.string "die drei legendären Vogel-Pokémon.\p"
	.string "Ich habe gehört, es gibt noch\n"
	.string "andere legendäre Vögel.$"

Route44_Text_PsychicPhilSeen:
	.string "Ich gewinne hundertprozentig!$"

Route44_Text_PsychicPhilBeaten:
	.string "Aah… Das ist\n"
	.string "eine schockierende Niederlage…$"

Route44_Text_PsychicPhilAfter::
	.string "Es ist wichtig überzeugt\n"
	.string "zu sein, von dem was du tust.$"

Route44_Text_PokemaniacZachSeen:
	.string "Ich tue alles,\n"
	.string "um seltene Pokémon in die Finger zu\l"
	.string "bekommen!$"

Route44_Text_PokemaniacZachBeaten:
	.string "Ach, deine Pokémon sind ja niedlich.$"

Route44_Text_PokemaniacZachAfter::
	.string "Wenn ein Pokémon andere Farben\n"
	.string "als üblicherweise hat,\n"
	.string "Ist es wertvoller\p"
	.string "Was? Du meinst, das stimmt nicht?$"

Route44_Text_CooltrainermAllenSeen:
	.string "Ich kann sehen,\n"
	.string "dass du ein guter Trainer bist.\p"
	.string "Ich kenne mich gut\n"
	.string "mit Pokémon aus und ich sehe, dass du\l"
	.string "das auch tust.$"

Route44_Text_CooltrainermAllenBeaten:
	.string "Puh! Das war ja der totale Reinfall!$"

Route44_Text_CooltrainermAllenAfter::
	.string "Wow. Du hast so viele Orden.\p"
	.string "Kein Wunder, dass du so stark bist.\p"
	.string "Ich frage mich, ob Jens von der\n"
	.string "Teak-City-Arena noch trainiert?\p"
	.string "Er hat mich wirklich gut geschlagen$"

Route44_Text_CooltrainerfCybilSeen:
	.string "Du siehst sehr stark aus.\p"
	.string "Gute Trainer\n"
	.string "suchen instinktiv nach starken\l"
	.string "Gegnern.$"

Route44_Text_CooltrainerfCybilBeaten:
	.string "Nein! So geht das auf gar keinen Fall.$"

Route44_Text_CooltrainerfCybilAfter::
	.string "Wir werden alle besser, wenn wir\n"
	.string "viele Kämpfe erleben.\p"
	.string "Ich habe viel gekämpft, um zu\n"
	.string "werden, was ich heute bin - \l"
	.string "eine Elite.$"

Route44_Text_Sign1:
	.string "ROUTE 44 EISPFAD VORAUS$"

Route44_Text_Sign2:
	.string "ROUTE 44\p"
	.string "MAHAGONIA CITY - EBENHOLZ CITY$"


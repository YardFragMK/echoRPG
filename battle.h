#pragma once
#include"characterbase.h"
#include"characters.h"

class Battle {
public:
	void runBattle(Player& player, characterBase& enemy);
	void isaLive(Player& player, characterBase& enemy, bool& runing);
};


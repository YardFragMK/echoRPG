#include"characterbase.h"
#include<string>

//=========================================================
// Player
//=========================================================
class Player : public characterBase {
public:
	std::string name;
	Player() {
		maxHealth=200;
		maxArmor=200;
		Health=100;
		Armor=0;
		Damage=10;
	}
};


//=========================================================
// Stilar
//=========================================================
class Stilar : public characterBase{
public:
	Stilar() {
		maxHealth = 50;
		maxArmor = 0;
		Health = 50;
		Armor = 0;
		Damage = 5;
	}
};
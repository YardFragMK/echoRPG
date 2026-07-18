#pragma once
#include<string>

class characterBase {
public:
	std::string Name;
	int maxHealth=200;
	int maxArmor=200;
	int Health=100;
	int Armor=0;
	int Damage=10;

	void takeDamage(int enemyDamage);
	void attack(characterBase& target);
	void showStats()  const;
private:

};
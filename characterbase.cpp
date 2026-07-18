#include"characterbase.h"
#include<iostream>

void characterBase::takeDamage(int enemyDamage) {
    if (Armor > 0)
    {
        int armorDamage = enemyDamage * 70 / 100;
        int healthDamage = enemyDamage * 30 / 100;

        if (Armor >= armorDamage)
        {
            Armor -= armorDamage;
            Health -= healthDamage;
        }
        else
        {
            int kalan = armorDamage - Armor;
            Armor = 0;
            Health -= healthDamage + kalan;
        }
    }
    else
    {
        Health -= enemyDamage;
    }
	if (Health < 0) {
		Health = 0;
	}

}
void characterBase::attack(characterBase& target) {
	target.takeDamage(Damage);
}

void characterBase::showStats()  const {
	std::cout << "  Can: " << Health << std::endl;
	std::cout << "  Zirh: " << Armor << std::endl;
	std::cout << "  Hasar: " << Damage << std::endl;
}
#include "battle.h"
#include<iostream>

void Battle::runBattle(Player& player, characterBase& enemy) {
    int secim;
    std::cout << "\nSavas yada kac! 1=savas 0=kac :   ";
    std::cin >> secim;
    if (secim == 0) {
        std::cout << "KACTIN.\n";
        return;
    }
    if (secim != 1) {
        std::cout << "Hatali secim!\n";
        return;
    }
    std::cout << "========================================\n";
    std::cout << player.Name << " " << enemy.Name<< "saldirdi!\n";
    std::cout << "========================================\n";
    player.attack(enemy);
    if (enemy.Health <= 0) {
        return;
    }
    std::cout << enemy.Name <<" degerleri\n";
    enemy.showStats();

    std::cout << "========================================\n";
    std::cout <<  enemy.Name << " sana saldirdi!\n";
    std::cout << "========================================\n";
    enemy.attack(player);
    if (player.Health <= 0) {
        return;
    }
    std::cout << player.Name << " degerleri=\n";
    player.showStats();
}

void Battle::isaLive(Player& player, characterBase& enemy, bool& runing) {
    if (enemy.Health <= 0) {
        std::cout << "\nKAZANDIN.\n";
        player.showStats();
        runing = false;
    }
    if (player.Health <= 0) {
        std::cout << "\nKAYBETTIN.\n";
        runing = false;
    }
}
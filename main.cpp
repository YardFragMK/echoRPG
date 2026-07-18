#include <iostream>
#include <conio.h> 
#include"characters.h"
#include"battle.h"

int main(){
    std::cout << "==========echoRPG==========\n";
    Player player1;
    std::cout << "Karakterine bir isim ver: ";
    std::cin >> player1.Name; 
    std::cout << "\n";


    std::cout << "\nIlk savas\n====================\n";

    Stilar stilar;
    Battle battle;
    bool running = true;
    while (running) {
        battle.runBattle(player1, stilar);
        if (stilar.Health <= 0) {
            std::cout << "\nKAZANDIN.\n";
            running = false;
        }
        if (player1.Health <= 0) {
            std::cout << "\nKAYBETTIN.\n";
            running = false;
        }
    }

    return 0;
}

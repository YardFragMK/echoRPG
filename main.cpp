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
    bool runing = true;
    while (runing) {
        battle.runBattle(player1, stilar);
        battle.isaLive(player1, stilar, runing);
    }

    return 0;
}

#include <iostream>
#include <conio.h> 
#include"characters.h"

int main(){
    std::cout << "===echoRPG===\n";
    Player player1;
    std::cout << "Karakterine bir isim ver: ";
    std::cin >> player1.name; 
    std::cout << "";


    std::cout << "ilk savas\n";
    int secim;
    Stilar stilar;
    while (true) {
        std::cout << "Savas yada kac! 1=savas 0=kac :\n";
        std::cin >> secim;
        if (secim == 0) {
            std::cout << "Kactin.\n";
            break;
        }
        if (secim != 1) {
            std::cout << "Hatali secim!\n";
            continue;
        }

        std::cout << player1.name << " Stilar'a saldirdi!\n";
        player1.attack(stilar);
        if (stilar.Health <= 0) {
            std::cout << "Kazandin.\n";
            break;
        }
        std::cout << "=Stilar'in degerleri=\n";
        stilar.showStats();
        std::cout << "Stilar sana saldirdi!\n";
        stilar.attack(player1);
        if (player1.Health <= 0) {
            std::cout << "Kaybettin.\n";
            break;
        }
        std::cout << "=" << player1.name << "'in degerleri=\n";
        player1.showStats();

    }


    return 0;
 

}

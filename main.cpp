#include <iostream>
#include <conio.h> 
#include"characters.h"

int main(){
    std::cout << "==========echoRPG==========\n";
    Player player1;
    std::cout << "Karakterine bir isim ver: ";
    std::cin >> player1.name; 
    std::cout << "";


    std::cout << "\nIlk savas\n====================\n";
    int secim;
    Stilar stilar;
    while (true) {
        std::cout << "\nSavas yada kac! 1=savas 0=kac :\n";
        std::cin >> secim;
        if (secim == 0) {
            std::cout << "KACTIN.\n";
            break;
        }
        if (secim != 1) {
            std::cout << "Hatali secim!\n";
            continue;
        }
        std::cout << "========================================\n";
        std::cout << player1.name << " Stilar'a saldirdi!\n";
        std::cout << "========================================\n";
        player1.attack(stilar);
        if (stilar.Health <= 0) {
            std::cout << "\nKAZANDIN.\n";
            break;
        }
        std::cout << "Stilar'in degerleri\n";
        stilar.showStats();

        std::cout << "========================================\n";
        std::cout << "Stilar sana saldirdi!\n";
        std::cout << "========================================\n";
        stilar.attack(player1);
        if (player1.Health <= 0) {
            std::cout << "\nKAYBETTIN.\n";
            break;
        }
        std::cout << player1.name << " degerleri=\n";
        player1.showStats();

    }


    return 0;
}

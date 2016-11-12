#include <iostream>
#include "units/Soldier.h"
#include "units/Rogue.h"

int main() {
    Soldier* soldier = new Soldier("Soldier", 150, 20);
    Rogue* rogue = new Rogue("Rogue", 100, 40);

    std::cout << *soldier << std::endl;
    std::cout << *rogue << std::endl;

    rogue->attack(soldier);

    std::cout << *soldier << std::endl;
    std::cout << *rogue << std::endl;

    delete soldier;
    delete rogue;
    return 0;
}

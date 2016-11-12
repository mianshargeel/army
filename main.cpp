#include <iostream>
#include "units/Soldier.h"

int main() {
    Soldier* s1 = new Soldier("Soldier1", 150, 20);
    Soldier* s2 = new Soldier("Soldier2", 150, 20);

    std::cout << *s1 << std::endl;
    std::cout << *s2 << std::endl;

    s1->attack(s2);

    std::cout << *s1 << std::endl;
    std::cout << *s2 << std::endl;

    delete s1;
    delete s2;
    return 0;
}

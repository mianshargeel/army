#include "Soldier.h"

Soldier::Soldier(std::string name, int hitPoints, int damage, std::string title) : Unit(name, hitPoints, damage, title) {}

Soldier::~Soldier() {}

void Soldier::attack(Unit* enemy) {
    Unit::attack(enemy);
}
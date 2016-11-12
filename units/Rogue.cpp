#include "Rogue.h"

Rogue::Rogue(std::string name, int hitPoints, int damage, std::string title) : Unit(name, hitPoints, damage, title) {}

Rogue::~Rogue() {}

void Rogue::attack(Unit* enemy) {
    unit->takeDamage(this->getDamage());
}

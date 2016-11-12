#include "Unit.h"

Unit::Unit(std::string name, int hitPoints, int damage, std::string title)
    : name(name), state(new State(title, hitPoints, damage)) {}

Unit::~Unit() {
    delete state;
}

const State& Unit::getState() const {
    return *(this->state);
}

const std::string& Unit::getName() const {
    return this->name;
}

const std::string& Unit::getTitle() const {
    return this->state->getTitle();
}

const int Unit::getHitPoints() const {
    return this->state->getHitPoints();
}

const int Unit::getHitPointsLimit() const {
    return this->state->getHitPointsLimit();
}

const int Unit::getDamage() const {
    return this->state->getDamage();
}

void Unit::takeDamage(int dmg) {
    this->state->takeDamage(dmg);
}

void Unit::addHitPoints(int hp) {
    this->state->addHitPoints(hp);
}

void Unit::attack(Unit* enemy) {
    enemy->takeDamage(this->getDamage());
    enemy->counterAttack(this);
}

void Unit::counterAttack(Unit* enemy) {
    enemy->takeDamage(this->getDamage() / 2);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getName() << " " << unit.getState();
    return out;
}
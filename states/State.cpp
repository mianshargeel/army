#include "State.h"

State::State(std::string title, int hitPoints, int damage)
    : title(title), hitPoints(hitPoints), hitPointsLimit(hitPoints),
      damage(damage) {}

State::~State() {}

const std::string& State::getTitle() const {
    return this->title;
}

const int State::getHitPoints() const {
    return this->hitPoints;
}

const int State::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

const int State::getDamage() const {
    return this->damage;
}

void State::ensureIsAlive() {
    if ( this->hitPoints == 0 ) {
        throw NoHitPointsException();
    }
}

void State::takeDamage(int dmg) {
    this->ensureIsAlive();

    if ( dmg > this->hitPoints ) {
        this->hitPoints = 0;
        return;
    }
    this->hitPoints -= dmg;
}

void State::addHitPoints(int hp) {
    this->ensureIsAlive();

    int total = this->hitPoints + hp;
    if ( total > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
        return;
    }
    this->hitPoints = total;
}

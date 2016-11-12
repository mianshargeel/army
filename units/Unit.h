#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../states/State.h"
#include "../exception.h"

class Unit {
    protected:
        std::string name;
        State* state;

    public:
        Unit(std::string name, std::string title, int hitPoints, int damage);
        virtual ~Unit();

        const State& getState() const;
        const std::string& getName() const;
        const std::string& getTitle() const;
        const int getHitPoints() const;
        const int getHitPointsLimit() const;
        const int getDamage() const;

        void takeDamage(int dmg);
        void addHitPoints(int hp);

        virtual void attack(Unit* enemy) = 0;
        virtual void counterAttack(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);


#endif // UNIT_H

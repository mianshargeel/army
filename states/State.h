#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "../exception.h"

class State {
    protected:
        std::string title;
        int hitPoints;
        int hitPointsLimit;
        int damage;

        void ensureIsAlive();

    public:
        State(std::string title, int hitPoints, int damage);
        virtual ~State();

        const std::string& getTitle() const;
        const int getHitPoints() const;
        const int getHitPointsLimit() const;
        const int getDamage() const;

        void takeDamage(int dmg);
        void addHitPoints(int hp);
};

std::ostream& operator<<(std::ostream& out, const State& state);

#endif // STATE_H

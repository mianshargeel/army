#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"

class Soldier : public Unit {
    public:
        Soldier(std::string name, int hitPoints, int damage, std::string title="Default");
        virtual ~Soldier();

        virtual void attack(Unit* enemy);
};


#endif // SOLDIER_H

#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"

class Rogue : public Unit {
    public:
        Rogue(std::string name, int hitPoints, int damage, std::string title="Default");
        virtual ~Rogue();

        virtual void attack(Unit* enemy);
};


#endif // ROGUE_H

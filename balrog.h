#ifndef balrog_h
#define balrog_h

#include "demon.h"
#include <string>

namespace cs_creature {
    class balrog : public demon {
    public:
        balrog();

        balrog(int newStrength, int newHitpoints);

        int getDamage() const;

        std::string getSpecies() const;
    };
}

#endif
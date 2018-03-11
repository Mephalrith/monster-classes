#ifndef elf_h
#define elf_h

#include "creature.h"
#include <string>

namespace cs_creature {
    class elf : public creature {
    public:
        elf();

        elf(int newStrength, int newHitpoints);

        int getDamage() const;

        std::string getSpecies() const;
    };
}

#endif
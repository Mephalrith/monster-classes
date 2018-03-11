#ifndef cyberdemon_h
#define cyberdemon_h

#include "demon.h"
#include <string>

namespace cs_creature {
    class cyberdemon : public demon {
    public:
        cyberdemon();

        cyberdemon(int newStrength, int newHitpoints);

        std::string getSpecies() const;
    };
}

#endif
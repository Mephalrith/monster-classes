#include "demon.h"
#include "cyberdemon.h"
#include <iostream>

using namespace std;

namespace cs_creature {
    cyberdemon::cyberdemon() = default;


    cyberdemon::cyberdemon(int newStrength, int newHitpoints)
            : demon(newStrength, newHitpoints) {
    }


    string cyberdemon::getSpecies() const {
        return "Cyberdemon";
    }
}
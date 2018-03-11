#include "human.h"
#include <iostream>

using namespace std;

namespace cs_creature {
    human::human() = default;


    human::human(int newStrength, int newHitpoints)
            : creature(newStrength, newHitpoints) {
    }


    string human::getSpecies() const {
        return "Human";
    }
}
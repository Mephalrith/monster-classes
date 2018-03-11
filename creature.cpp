#include "creature.h"
#include <iostream>

using namespace std;

namespace cs_creature {
    creature::creature() {
        strength = DEFAULT_STRENGTH;
        hitpoints = DEFAULT_HITPOINTS;
    }


    creature::creature(int newStrength, int newHitpoints) {
        strength = newStrength;
        hitpoints = newHitpoints;
    }


    int creature::getStrength() const {
        return strength;
    }


    int creature::getHitpoints() const {
        return hitpoints;
    }


    void creature::set_strength(int newStrength) {
        strength = newStrength;
    }


    void creature::set_hitpoints(int newHitpoints) {
        hitpoints = newHitpoints;
    }


    int creature::getDamage() const {
        int damage = (rand() % strength) + 1;
        // All creatures inflict damage which is a random number up to their strength
        cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
        return damage;
    }
}
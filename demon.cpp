#include "demon.h"
#include <iostream>

using namespace std;

namespace cs_creature {
    demon::demon() = default;


    demon::demon(int newStrength, int newHitpoints)
            : creature(newStrength, newHitpoints) {
    }


    int demon::getDamage() const {
        int damage = creature::getDamage();

        // Demons have a 25% chance to inflict extra damage
        if (rand() % 4 == 0) {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }

        return damage;
    }


    string demon::getSpecies() const {
        return "Demon";
    }
}
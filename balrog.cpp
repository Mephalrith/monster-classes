#include "demon.h"
#include "balrog.h"
#include <iostream>

using namespace std;

namespace cs_creature {
    balrog::balrog() = default;


    balrog::balrog(int newStrength, int newHitpoints)
            : demon(newStrength, newHitpoints) {
    }


    int balrog::getDamage() const {

        int damage = demon::getDamage();

        // Balrogs are so fast they get to attack twice
        int damage2 = rand() % demon::getStrength() + 1;
        cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage += damage2;

        return damage;
    }


    string balrog::getSpecies() const {
        return "Balrog";
    }
}
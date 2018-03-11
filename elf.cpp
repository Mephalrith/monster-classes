#include "elf.h"
#include <iostream>

using namespace std;

namespace cs_creature {
    elf::elf() = default;


    elf::elf(int newStrength, int newHitpoints)
            : creature(newStrength, newHitpoints) {
    }


    int elf::getDamage() const {
        int damage = creature::getDamage();

        // Elves inflict double magical damage with a 50% chance
        if ((rand() % 2) == 0) {
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
            damage *= 2;
        }

        return damage;
    }


    string elf::getSpecies() const {
        return "Elf";
    }
}
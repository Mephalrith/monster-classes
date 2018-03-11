#include "human.h"
#include "elf.h"
#include "cyberdemon.h"
#include "balrog.h"
#include <iostream>

using namespace std;
using namespace cs_creature;

void battleArena(creature &creature1, creature &creature2);

int main() {
    srand((time(0)));

    human h(50, 50);
    elf e(50, 50);
    cyberdemon c(50, 50);
    balrog b(50, 50);

    battleArena(e, b);
    battleArena(h, e);
    battleArena(c, b);
    battleArena(c, h);
}


void battleArena(creature &creature1, creature &creature2) {
    int c1hp = creature1.getHitpoints();
    int c2hp = creature2.getHitpoints();

    cout << "\nFight between " << creature1.getSpecies() << " and " << creature2.getSpecies() << "!\n" << endl;


    while (c1hp > 0 && c2hp > 0) {
        c2hp -= creature1.getDamage();

        if (c2hp < 0)        // to avoid negative HP
        {
            c2hp = 0;
        }

        cout << "The " << creature2.getSpecies() << " has " << c2hp << " remaining hit points!\n" << endl;

        c1hp -= creature2.getDamage();
        if (c1hp < 0) {
            c1hp = 0;
        }
        cout << "The " << creature1.getSpecies() << " has " << c1hp << " remaining hit points!\n" << endl;

    }


    if (c1hp > 0) {
        cout << "The " << creature1.getSpecies() << " has defeated the " << creature2.getSpecies() << "!\n" << endl;
    } else if (c2hp > 0) {
        cout << "The " << creature2.getSpecies() << " has defeated the " << creature1.getSpecies() << "!\n" << endl;
    } else {
        cout << "Tie! Both have died!\n" << endl;
    }
}






/*
OUTPUT:


Fight between Elf and Balrog!

The Elf attacks for 1 points!
Magical attack inflicts 1 additional damage points!
The Balrog has 48 remaining hit points!

The Balrog attacks for 27 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 26 additional damage points!
The Elf has 0 remaining hit points!

The Balrog has defeated the Elf!


Fight between Human and Elf!

The Human attacks for 17 points!
The Elf has 33 remaining hit points!

The Elf attacks for 2 points!
The Human has 48 remaining hit points!

The Human attacks for 22 points!
The Elf has 11 remaining hit points!

The Elf attacks for 29 points!
The Human has 19 remaining hit points!

The Human attacks for 28 points!
The Elf has 0 remaining hit points!

The Elf attacks for 48 points!
Magical attack inflicts 48 additional damage points!
The Human has 0 remaining hit points!

Tie! Both have died!


Fight between Cyberdemon and Balrog!

The Cyberdemon attacks for 31 points!
The Balrog has 19 remaining hit points!

The Balrog attacks for 24 points!
Balrog speed attack inflicts 36 additional damage points!
The Cyberdemon has 0 remaining hit points!

The Balrog has defeated the Cyberdemon!


Fight between Cyberdemon and Human!

The Cyberdemon attacks for 18 points!
Demonic attack inflicts 50 additional damage points!
The Human has 0 remaining hit points!

The Human attacks for 17 points!
The Cyberdemon has 33 remaining hit points!

The Cyberdemon has defeated the Human!


Process finished with exit code 0
*/
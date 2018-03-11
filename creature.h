#ifndef creature_h
#define creature_h

#include <string>

namespace cs_creature {
    class creature {
    public:
        creature();

        creature(int newStrength, int newHitpoints);

        int getStrength() const;

        int getHitpoints() const;

        void set_strength(int);

        void set_hitpoints(int);

        virtual int getDamage() const;

        virtual std::string getSpecies() const = 0;

    private:
        int strength;
        int hitpoints;
        const static int DEFAULT_STRENGTH = 10, DEFAULT_HITPOINTS = 10;
    };
}

#endif
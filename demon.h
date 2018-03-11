/*
Name: Brooke Porter
Class: CS 11, Section 0445 Online
Date: 10/14/15
Assignment: 9.1 [45 points]
Instructor: Dave Harden
File: demon.h

Documentation not required for this assignment.
*/

#ifndef demon_h
#define demon_h

#include "creature.h"
#include <string>

namespace cs_creature
{
	class demon : public creature
	{
	public:
		demon();
		demon(int newStrength, int newHitpoints);

		int getDamage() const;
		std::string getSpecies() const;
	};
}

#endif
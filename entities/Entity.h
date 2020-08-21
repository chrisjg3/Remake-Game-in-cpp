#ifndef GAMEENTITY_HPP
#define GAMEENTITY_HPP

#include <vector>
#include <iostream>

#include "../items/Item.h"
#include "../items/InventoryList.h"


class Entity
{
private:
// Skills effect how effective things are in-game.  Currently use (in order): Strength, Persuasion, Repairing, Animal-Handling
unsigned short skills[4]; // Override Operator to make [] work with strings for above skills? might be easier !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

unsigned short exp = 0;

public:
// Default Constructor
Entity();

// Main Constructor used in-game
Entity(unsigned short health, unsigned short healthMax, bool isPlayer);

// Copy constuctor?  How to make many enemies easy to make
//



// Leaving invetory as public for now, not sure if I want to change this
InventoryList inventory;

// Three GameStats are: Health, Damage Resitance (effected by armor/items), max health (keeps track of upper bound)
unsigned short gameStats[3]; 

// // inventory related functions
// void pickUpItem(Item&);

// void dropItem(Item&);

// // How do we compare items????!!! Gotta figuer out the best way to do this, maybe overload relational operators!!!!!!!!!!!!!!!!!!!!!!
// bool findItem(Item&); // Used when need to find exact item, returns true if found and used.


};

#endif
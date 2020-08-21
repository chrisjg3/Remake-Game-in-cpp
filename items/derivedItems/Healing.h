#ifndef HEALING_H
#define HEALING_H

#include <iostream>

#include "../Item.h"


// This class is for all items that can heal, they will have different names and heal amounts but that will be the only difference


class Healing: public Item
{
    // This derived class only needs is a defined amount to heal by, the specific use() function, and its Constructor.
    private:
    short healAmount;

    public:
    // Default Constructor:
    Healing();

    // Main Constuctor to be used:
    Healing(std::string name, bool isPortable, short amount): Item(name, isPortable) { healAmount = amount; }

    void use();

};

#endif
#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>

#include "../entities/Entity.hpp"

class Item
{
    private:
    bool isPortable;
    Entity* owner = nullptr;
    
    public:
    // Name is for displaying mainly, left public for now
    std::string name;

    // Used for link lists of inventories or storage places
    Item* next; 

    // Get (Accessor) Functions
    bool getPortable() {return isPortable; }
    Entity* getOwner() { return owner; }

    // Set (Mutator) Functions
    void setOwner(Entity &newOwner) { owner = &newOwner; }

    // Constructor
    Item(std::string name, bool isPortable) { this->name = name; this->isPortable = isPortable; }

    // Copy Consturctor
    Item(const Item&);

    // Code for each item type purpose.  Not sure exactly how I will implement everything, but for now this will be for derived classes
    virtual void use() = 0;
};


#endif
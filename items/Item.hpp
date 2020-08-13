#ifndef ITEM_HPP
#define ITEM_HPP

#include "../entities/Entity.hpp"

class Item
{
    private:
    bool isPortable;
    Entity* owner;
    
    public:
    // Used for link lists of inventories or storage places
    Item* next; 

    // Get (Accessor) Functions
    bool getPortable() {return isPortable; }

    // Set (Mutator) Functions
    void setOwner(Entity &newOwner) { owner = &newOwner; }

    // Copy Consturctor
    Item(const Item&);
};


#endif
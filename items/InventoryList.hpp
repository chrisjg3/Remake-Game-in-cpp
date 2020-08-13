#include <iostream>

#include "Item.hpp"
#include "../entities/Entity.hpp"

// The inventory class is a linked list that is used for characters to hold items.

class InventoryList
{
    private:
    Item* head;
    unsigned short size;

    public:
    InventoryList() { head = nullptr; size = 0; }

    ~InventoryList(); // NEED TO DEALLOCATE MEMORY !!!!!!!!!!!!!!!!!!!!!!!

    // Functions for use to add or drop or find in inventory
    void addItem(Item&, Entity&); 

    void removeItem();

    bool findItem();
};
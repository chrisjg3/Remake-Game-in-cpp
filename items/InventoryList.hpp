#include <iostream>

#include "Item.h"
#include "../entities/Entity.hpp"

// The inventory class is a linked list that is used for characters to hold items.

class InventoryList
{
    private:
    Item* head;
    unsigned short size;

    public:
    // Getsize function, just for debugging:
    unsigned short getSize() { return size; }

    // Default (And only) Constructor
    InventoryList() { head = nullptr; size = 0; }

    // Destructor
    ~InventoryList(); // NEED TO DEALLOCATE MEMORY !!!!!!!!!!!!!!!!!!!!!!!

    // Functions for use to add or drop or find in inventory
    void addItem(Item&, Entity&); 

    void removeItem();

    void listInventory();

    void userDropItem(int);

    void userUseItem(int);

    bool findItem();
};
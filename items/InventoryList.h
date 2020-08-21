#ifndef INVENTORYLIST_H
#define INVENTORYLIST_H

#include <iostream>

#include "Item.h"
#include "../entities/Entity.h"

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

    // Lists all inventory items with numbers
    void listInventory();

    void userDropItem(int);

    void userUseItem(int);

    // Returns the node before the 'found' item it so it can be removed/editted
    // returns nullptr if not found, so all methods that use it can check
    // if the return was nullptr to know if found. (string name used to indenify)
    Item* findItem(std::string);
    // Very similar to above overloaded version, but this uses number to identify
    // only will be used by the user, inputting the number they see in InvenotryList()
    Item* findItem(int);
};

#endif
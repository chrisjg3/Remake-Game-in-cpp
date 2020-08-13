#include "Item.hpp"
#include "../entities/Entity.hpp"

// The inventory class is a linked list that is used for characters to hold items.

class InventoryList
{
    private:
    Item* head;

    public:
    InventoryList() { head = nullptr; }

    ~InventoryList(); // NEED TO DEALLOCATE MEMORY !!!!!!!!!!!!!!!!!!!!!!!

    // Functions for use to add or drop or find in inventory
    // Didn't make Item a reference because need to copy it anyway, owner pointer will be reassigned anyway
    void addItem(Item, Entity&); 

    void removeItem();

    bool findItem();
};
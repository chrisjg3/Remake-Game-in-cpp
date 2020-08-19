#include "InventoryList.hpp"

// Adding something to inventory
void InventoryList::addItem(Item& item, Entity& player)
{
    // First, we check if the inventory is at its max (currently set at 30)
    if(this->size >= 30) { std::cout<<"\nInventor is full! \n"; return; }

    // Check if list is empty and add to head if it is (could also just check size == 0, either works)
    if(head == nullptr) 
    { 
        // Create item copy
        head = &item; 
        head->setOwner(player);
        size++;
    }
    else
    {
        // If code is here, then the list has items and so must be searched
        Item* last = head->next;
        // Looping through until at last item, aka last has an address pointing to the Item with next == nullptr
        while(last->next != nullptr)
        {
            last = last->next;
        }
        // Now at the end, create an item (based on reference) to attatch
        last->next = &item;
        // Then set the owner to player (the one with the inventory)
        last->next->setOwner(player);
        size++;
    }
    
}

// This is used to search for a specified item, it also helps with removal
bool InventoryList::findItem()
{
    // NOT IMPLEMENTED YET!
    std::cout<<"\nNOT IMPLEMENTED!!!!!!!!!!!!!";
    return false;
}

// This is used to list the inventory, it is mainly to see items and allow the user to drop items.
void InventoryList::listInventory()
{
    // First check if list even has anything on it
    if(head == nullptr) {std::cout<<"\n There aren't any items in your inventory. \n"; }
    else
    {
        Item* last = head->next;
        int counter = 0;
        while(last->next != nullptr)
        {
            std::cout<<'\n'<<++counter<<". "<<last->name;
            last = last->next;
        }
    }
    
}

// Removing something from inventory
void InventoryList::removeItem()
{
    //  Needs to be passed item to remove or something, could also make it searchable, so idk think of long-term best plan here
}

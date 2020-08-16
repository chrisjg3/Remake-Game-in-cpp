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
        Item* last = this->head->next;
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

// Removing something from inventory
void InventoryList::removeItem()
{
    //  Needs to be passed item to remove or something, could also make it searchable, so idk think of long-term best plan here
}
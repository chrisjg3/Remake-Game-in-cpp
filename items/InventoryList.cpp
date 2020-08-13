#include "InventoryList.hpp"

void InventoryList::addItem(Item& item, Entity& player)
{
    // First, we check if the inventory is at its max (currently set at 30)
    if(this->size >= 30) { std::cout<<"\nInventor is full! \n"; return; }

    // Check if list is empty and add to head if it is (could also just check size == 0, either works)
    if(head == nullptr) 
    { 
        // Create item copy
        head = new Item(item); 
        head->setOwner(player);
        size++;
    }
    else
    {
        // If code is here, then the list has items and so must be searched
        Item* last = this->head->next;

    }
    
}
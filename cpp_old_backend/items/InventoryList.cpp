#include "InventoryList.h"

// Adding something to inventory
void InventoryList::addItem(Item& item, Entity& player)
{
    // First, we check if the inventory is at its max (currently set at 30)
    if(this->size >= 30) { std::cout<<"\nsize is "<<size<<" \nInventor is full! \n"; return; }

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
Item* InventoryList::findItem(std::string name)
{
    // NOT IMPLEMENTED YET!
    std::cout<<"\nNOT IMPLEMENTED!!!!!!!!!!!!!";
    /*
    This will be used for when something interacts with the player and needs to check for an item
    Name will be the best move, since it will be used to identify the item without having to
    know exactly where it is.
    The int overload version will be for the player, who inputs the number.
    */
    return nullptr;
}

// Finding an item by number, only used by user after seeing number in InventoryList()
Item* InventoryList::findItem(int position)
{
    // Don't need to check for head being null since it is done in all methods before this is called
    Item* temp = head; // Set to just head since I have the counter starting at 0, so the first item is the first iteration
    Item* previousPtr;
    int counter = 0;
    while(temp->next != nullptr && counter < position)
    {
        // First iteration just sets temp = to first member on list and sets counter to 1
        // Afterward counts upward
        previousPtr = temp;
        temp = temp->next;
        counter++;
    }
    if(temp->next == nullptr) { return nullptr; } // The number entered was out of range

    return previousPtr; // Previous pointer returned so item can be removed if needed, or moved to next if not
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



void InventoryList::userDropItem(int)
{
    if (this->head == nullptr) { std::cout<<"\n Inventory is empty. \n"; return; } // Leaves Function if inveotry empty
    
    // Lists inventory so that user can pick item to drop
    listInventory();
    int dropNum;

    std::cout<<"INPUT NUMBER TO DROP: \n";
    std::cin>>dropNum;                      // MAY WANT TO EDIT SO THAT WRONG INPUTS DON'T CAUSE ISSUES!!!!!!!!!!!!!

    // find returns the ptr before the item we want to drop
    Item* ptrBefore = findItem(dropNum);
    // Check if null, which is what happens when it isn't found
    if(ptrBefore == nullptr) { std::cout<<"\nNumber out of range\n"; return; } // Leaves function if not found
    // Set up a temp ptr to prevent a memory leak
    Item* temp = ptrBefore->next;
    // make the previous pointer 'next' equal to the ptr of the item after the one we will remove
    ptrBefore->next = ptrBefore->next->next;
    // We will free dynamic memory in a second, but I want to use temp to say "{item name} removed" first

    std::cout<<"\nThe item, "<<temp->name<<" was successfully removed! \n";
    // Now we can free the dynamic memory of the item removed
    delete temp;
}



void InventoryList::userUseItem(int)
{
    // 
}
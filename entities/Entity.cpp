
#include "Entity.h"

Entity::Entity(unsigned short health, unsigned short healthMax, bool isPlayer)
{
    // debating overriding [] operator to have ["health"] or something similar, but I can't decide
    this->gameStats[0] = health;
    this->gameStats[1] = 0;
    this->gameStats[2] = healthMax;

    if(isPlayer)
    {
        // This section builds the skills if this entity is the player character
        // Currently use (in order): Strength, Persuasion, Repairing, Animal-Handling
        std::cout << "\nPlease input skills...(Currently not implemented)!!!\n";
        skills[0] = 3; // Strength
        skills[1] = 4; // Persuasion
        skills[2] = 5; // Repair
        skills[3] = 6; // Animal-Handling
    }
}


// // Inventory related methods:
// void Entity::pickUpItem(Item& item)
// {
//     // Max size is 30 items, so needs return message if full
//     if(!(inventory.size() < 30)) { std::cout<<"\nInventory is full! \n"; return; }

//     // Next need to check if item isPortable, to see if it can be picked up
//     if(item.getPortable() == false);


// }



// void Entity::dropItem(Item&)
// {
    
// }




// bool Entity::findItem(Item&)
// {
//     // Maybe check if there is item type?
// }
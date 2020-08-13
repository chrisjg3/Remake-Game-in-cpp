
#include "GameEntity.hpp"

Entity::Entity(unsigned short health, unsigned short healthMax, bool isPlayer)
{
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


// Inventory related methods:
void Entity::pickUpItem(Item&)
{
    if((!inventory.size()) < 30) { std::cout<<"\nInventory is full! \n"; return; }


}



void Entity::dropItem(Item&)
{
    
}




bool Entity::findItem(Item&)
{
    
}
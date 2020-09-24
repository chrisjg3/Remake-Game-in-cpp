#include "Healing.h"

void Healing::use()
{
    // Debating building an execption class for an item being called w/ owner == nullptr, but for now that shouldn't be an issue

    // First add to health
    this->getOwner()->gameStats[0] += this->healAmount;

    // Then make sure health is not over max, and bring it down if it is
    if(this->getOwner()->gameStats[0] > this->getOwner()->gameStats[2]) { this->getOwner()->gameStats[0] = this->getOwner()->gameStats[2]; }

    // Then write something to console so it is clear the item was used
    std::cout<<"\nA "<<this->name<<" was used. You healed "<<this->healAmount<<"\n and now have "<<this->getOwner()->gameStats[0]<<" health.\n";

    // NEED TO DELETE IT IF NOT USABLE AGAIN.  TimescanUse will be incremented down.  It should be deleted once that hits 0/
    // I am thinking like, food will obviously have 1 use, but maybe certain bandages or something have many uses
}
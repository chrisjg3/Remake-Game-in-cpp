
#include "Item.hpp"

Item::Item(const Item& original)
{
    this->name = original.name;
    this->next = nullptr;
    this->isPortable = original.isPortable;
    this->owner = nullptr;
}
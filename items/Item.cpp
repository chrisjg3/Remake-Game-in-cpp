
#include "Item.hpp"

Item::Item(const Item& original)
{
    this->next = nullptr;
    this->isPortable = original.isPortable;
    this->owner = nullptr;
}
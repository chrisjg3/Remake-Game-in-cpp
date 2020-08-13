#ifndef ITEM_HPP
#define ITEM_HPP

class Item
{
    private:
    Item* next; // Used for link lists of inventories or storage places
    bool isPortable;

    public:
    bool getPortable() {return isPortable; }

};


#endif
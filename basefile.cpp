
// Adventure/Surivival Game.  

#include "basefile.h"

void gameSetUp();

int main()
{
    // gameSetUp();

    // Maybe build three main while loops for game, this way at a popint of no return, all other variables go out of scope and free some memory
    // Just a good idea for good practice




    // ---------------------- THIS IS FOR TESTING, NO CODE BELOW THIS IS SHOULD BE IMPORTANT ---------------------------

    std::cout<<"\nCreating Player...\n";
    Entity player1 = Entity(20, 40, true);
    std::cout<<"Player Succesfully Made!\n\n";

    std::string trash;
    std::cout<<"Continue? \n";
    getline(std::cin, trash);

    Healing item = Healing("Apple", true, 15);
    std::cout<<"\nYou collected an item";
    player1.inventory->addItem(item, player1);
    std::cout<<"\n Item added succesfully!";
    
    std::cout<<"Continue? \n";
    getline(std::cin, trash);

    std::cout<<"\nYou will use the item to heal now:";
    item.use();


    // Test out the InventoryList drop function, make sure pointers are working correctly



    return 0;
}


void gameSetUp()
{
    // Nothing for now
}

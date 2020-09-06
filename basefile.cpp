
// Adventure/Surivival Game.  

#include "basefile.h"

void gameSetUp();

int main()
{

    // Maybe build three main while loops for game, this way at a popint of no return, all other variables go out of scope and free some memory
    // Just a good idea for good practice


    // ----------- Building here a basic envirnment, where the game can be simulated

    bool levelOne = true; // building a primitive save/load feature using bools
    gameSetUp();
    while(levelOne)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout<<"\nYou are in level 1!"<<std::endl;
        break;
    }



    // ---------------------- THIS IS FOR TESTING, NO CODE BELOW THIS IS SHOULD BE IMPORTANT ---------------------------

    // std::cout<<"\nCreating Player...\n";
    // Entity player1 = Entity(25, 40, true);
    // std::cout<<"Player Succesfully Made!\n\n";

    // std::string trash;
    // std::cout<<"Continue? \n";
    // getline(std::cin, trash);

    // Healing item = Healing("Apple", true, 15);
    // std::cout<<"\nYou collected an item";
    // player1.inventory->addItem(item, player1);
    // std::cout<<"\n Item added succesfully!";
    
    // std::cout<<"Continue? \n";
    // getline(std::cin, trash);

    // std::cout<<"\nYou will use the item to heal now:";
    // item.use();


    // Test out the InventoryList drop function, make sure pointers are working correctly



    return 0;
}



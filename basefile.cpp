
// Adventure/Surivival Game.  

#include "basefile.h"

void gameSetUp();

int main()
{
    // These two objects handle the game data and game levels.
    GameData gmdata; // game data - saving and loading games
    LevelStruct gmlevels; // game levels - each level is a method called in this class




    // ----------- Building here a basic envirnment, where the game can be simulated

    // These bools will be used as save points and passed into gameData to be changed to where savepoint is
    bool levelOne = true; 
    bool levelTwo = false;
    bool levelThree = false;
    // bool gameActive = true;  // Not sure if gonna use this

    gmdata.gameSetUp(levelOne, levelTwo, levelThree);


    while(levelOne)
    {
        gmlevels.runLevelOne(levelOne);
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



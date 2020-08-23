
// Adventure/Surivival Game.  

#include "basefile.h"

void gameSetUp();

int main()
{

    // Maybe build three main while loops for game, this way at a popint of no return, all other variables go out of scope and free some memory
    // Just a good idea for good practice


    // ----------- Building here a basic envirnment, where the game can be simulated
    bool levelOne = true; // Could add in save where it reads a file ro pinpoint place but that is that
    gameSetUp();
    while(!levelOne)
    {
        
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


void gameSetUp()
{
    // Title here - included some endl to flush the buffer
    std::system("clear"); // Clears screen
    std::cout<<"\n\n\n-------------------------------------";
    std::cout<<"\n|                                   |";
    std::cout<<"\n|          Untitiled Game           |";
    std::cout<<"\n|   Revenge of the Working Title    |"<<std::endl;
    std::cout<<"|                                   |";
    std::cout<<"\n-------------------------------------"<<std::endl;


    std::cout<<"\n\n\n"<<endl;

    // Saves/Load Game - NOT IMPLEMENTED - Could have show saves here and lskip rest of code if load save (maybe have func return number or bool to show what was picked)
    



    // Set up of Player begins here





    // NOT IMPLMENTED - Could have some settings here.
}

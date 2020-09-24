#include "GameData.h"



void GameData::gameSetUp(bool level1, bool level2, bool level3)
{
    // Title here - included some endl to flush the buffer
    std::system("clear"); // Clears screen
    std::cout<<"\n\n\n-------------------------------------";
    std::cout<<"\n|                                   |";
    std::cout<<"\n|          Untitiled Game           |";
    std::cout<<"\n|   Revenge of the Working Title    |"<<std::endl;
    std::cout<<"|                                   |";
    std::cout<<"\n-------------------------------------"<<std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout<<"\n\n\n"<<std::endl;

    // Saves/Load Game - NOT IMPLEMENTED - Could have show saves here and lskip rest of code if load save (maybe have func return number or bool to show what was picked)
    
    std::this_thread::sleep_for(std::chrono::seconds(3));


    // Set up of Player begins here
    std::cout<<"\n~~PlaceHolder Text~~ Will eventually implement intro here \n";
    std::cout<<"Lets create your player..."<<std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout<<"Will later implement choosing of stats, for now player is given a set standard (health 35/40)..."<<std::endl;

    std::cout<<"\nCreating Player...\n";
    Entity player1 = Entity(35, 40, true);
    std::cout<<"Player Succesfully Made!\n"<<std::endl;

    

    // NOT IMPLMENTED - Could have some settings here.
}

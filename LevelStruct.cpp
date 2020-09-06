#include "LevelStruct.h"


void LevelStruct::runLevelOne(bool& levelOne)
{
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout<<"\nYou are in level 1!"<<std::endl;
    levelOne = false;
}
#ifndef GAMEDATA_H
#define GAMEDATA_H

#include <fstream>
#include <iostream>
#include <thread>

#include "entities/Entity.h"

class GameData
{
    private:


    public:
    // Asks for loading game, if so returns bools to load game, if not starts intro
    void gameSetUp(bool, bool, bool);

    void showSavedGames();

    void saveGame();

    void loadGame();  // Can't decide if this is worth it (as a method called in gameSetUP())
};


#endif
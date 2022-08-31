#ifndef __GAME_H__
#define __GAME_H__

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

class Game
{
    private:
        int choice;
        bool playing;
    public:
        Game();
        virtual ~Game();

        //Operators

        //Functions
        void mainMenu();

        //Accesors
        inline bool getPlaying() const {return this->playing;}

        //Modifiers
};

#endif
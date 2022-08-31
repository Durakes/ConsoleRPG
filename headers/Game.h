#ifndef __GAME_H__
#define __GAME_H__

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Character.h"

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
        //! inline, palabra reservada para funciones cortas, evita el llamar a la función y la reemplaza donde se esté "llamando"
        //! const para que no se pueda modificar sin querer el valor de lo que esté devolviendo la función.
        inline bool getPlaying() const {return this->playing;}

        //Modifiers
};

#endif
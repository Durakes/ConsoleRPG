#ifndef __GAME_H__
#define __GAME_H__

#include <ctime>
#include "..\src\Character.cpp"

class Game
{
    private:
        int choice;
        bool playing;
        Character character;
    public:
        Game();
        virtual ~Game();

        //Operators

        //Functions
        void mainMenu();
        void initGame();

        //Accesors
        //! inline, palabra reservada para funciones cortas, evita el llamar a la función y la reemplaza donde se esté "llamando"
        //! const para que no se pueda modificar sin querer el valor de lo que esté devolviendo la función.
        inline bool getPlaying() const {return this->playing;}

        //Modifiers
};

#endif
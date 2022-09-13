#ifndef __GAME_CPP__
#define __GAME_CPP__
#include "..\headers\Game.h"

Game::Game()
{
    choice = 0;
    playing = true;
}

Game::~Game()
{
    
}

void Game::initGame()
{
    string name;
    cout << "Enter name for character: ";
    getline(cin, name);
    
    character.initialize(name);

}

void Game::mainMenu()
{
    cout << "= MAIN MENU  = \n" << endl;
    cout << "0: Quit" << endl;
    cout << "1: Travel" << endl;
    cout << "2: Shop" << endl;
    cout << "3: Level up" << endl;
    cout << "4: Rest" << endl;
    cout << "5: Character sheet \n" << endl;



    cout << endl << "Choice: "; 
    cin >> choice;
    cout << endl;

    switch (choice)
    {
        case 0:
            playing = false;
            break;

        case 5:
            character.printStats();
            system("pause");
            break;  

        default:
            break;
    }
}

#endif
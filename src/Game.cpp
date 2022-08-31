#include "..\headers\Game.h"

Game::Game()
{
    choice = 0;
    playing = true;
}

Game::~Game()
{
    
}

void Game::mainMenu()
{
    cout << "MAIN MENU \n" << endl;
    cout << "0: Quit" << endl;
    cout << "1: Travel" << endl;
    cout << "2: Shop" << endl;
    cout << "3: Level up" << endl;
    cout << "4: Rest" << endl;
    cout << "5: Character sheet" << endl;

    cout << endl << "Choice: "; 
    cin >> choice;

    switch (choice)
    {
        case 0:
            playing = false;
            break;

        default:
            break;
    }
}
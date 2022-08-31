#include "Game.cpp"

int main()
{
    system("cls");
    srand(time(NULL));

    Game game;

    while (game.getPlaying())
    {
        game.mainMenu();
    }
    
    return 0;
}
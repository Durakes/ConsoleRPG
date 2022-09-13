#include "Game.cpp"

int main()
{
    system("cls");
    srand(time(NULL));

    Game game;
    game.initGame();

    while (game.getPlaying())
    {
        game.mainMenu();
    }
    
    return 0;
}
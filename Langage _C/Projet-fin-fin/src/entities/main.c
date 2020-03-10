#include "rogue.h"
#include "mainMenu.h"
#include "game.h"
#include "utils.h"
#include "Tutoriel.h"
#include "Credis.h"

void menuLoop()
{

    int choice;
    char * choices[] = {"Start Game", "Tutoriel", "Credis", "End Game"};

    Game game;
    game.currentLevel = 0;

    while (true)
    {
        choice = mainMenu(4, choices);
        switch (choice)
        {
            case START_GAME:
                gameLoop(&game);
                clear();
                break;

            case CREDIS:
            	clear();
            	Credis();
            	clear();
            	break;


            case TUTORIAL:
            	clear();
            	Tuto();
            	clear();
            	break;

            case QUIT_GAME:
                return;
                break;
        }
    }
}

int main ()
{
    screenSetUp();
    menuLoop();
    endwin();


    return 0;
}
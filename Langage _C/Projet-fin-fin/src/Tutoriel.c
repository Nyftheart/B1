#include "rogue.h"
#include "main.h"


void Tuto()
{
    
    int ch = 'e';
    
    /* main game loop */

        if (ch != 'e')
        {
            menuLoop();
        }
        printw("Tuto\n");
        printw(" 'z' 'q' 's' 'd' pour vous deplacer\n");
        printw(" 'i' pour l'inventaire\n");
        printw(" 'X' sont des arraignees et 'G' des gobelins \n");
        printw(" Pour combatre rentre dans les enemie\n");
        printw(" But detruire tout les adversaire\n");



        ch = getch();
        
    

}
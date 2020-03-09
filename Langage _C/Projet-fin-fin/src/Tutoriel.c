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

        ch = getch();
        
    

}
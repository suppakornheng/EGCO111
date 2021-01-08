#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <windows.h>
#include <time.h>
void delay(int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}


int main()
{
    char c;
    initscr();
    nodelay(stdscr,TRUE);

////////////////////////////////////////////////
    /*do
    {
        c=getch();
        printf(".");
        delay(1000);
    }while(c==ERR);*/
/////////////////////////////////////////////////
    for(;;)
    {
        c=getch();
        if(c==ERR)
        {
            //User hasn't responded
            delay(1000);
            printf("a");
        }
        else
        {
            //User input
            printf("b");
        }
        fflush(stdin);
    }
 ////////////////////////////////////////////////
 return 0;
}

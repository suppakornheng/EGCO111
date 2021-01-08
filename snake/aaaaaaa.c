#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
#include <windows.h>
#include <time.h>

void delay(int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
main()
{
    char c;
    initscr;
    nodelay(stdscr,TRUE);
    delay(1000);
    c=getch();
    if(c==ERR)
    {
        printf("ERR");
    }
    else
    {
        printf("%c",c);
    }
    printf("\n\n\nw8");
}

#include<stdio.h>
main()
{
    char a[20],i;
    do
    {
        printf("Guess my favorite color? ");
        gets(a);

    }while(strcmp(a,"blue")!=0);
    printf("Correct!!!");
}

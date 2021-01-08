#include<stdio.h>
#include<string.h>
main()
{
    char a[100],t[100]="xx-xxxxxxx";
    printf("Word is %s\n\n",t);
    printf("Enter your word: ");
    gets(a);
    strcpy(t,a);
    printf("Word is %s\n\n",t);
    printf("Enter your word: ");
    gets(a);
    strcat(t," ");
    strcat(t,a);
    printf("Word is %s",t);


}

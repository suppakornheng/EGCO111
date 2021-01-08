#include<stdio.h>
#include<string.h>
main()
{
    int i;
    char a[100];
    printf("Enter your name and surname: ");
    gets(a);
    printf("Reverse of your name and surname: ");
    for(i=strlen(a);i>=0;i--)
        printf("%c",a[i]);
}

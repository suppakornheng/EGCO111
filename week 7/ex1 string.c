#include<stdio.h>
main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if(a>='a' && a<='z')
        a='A'+a-'a';
    else if(a>='A' && a<='Z')
        a='a'+a-'A';
    else
        printf("The character you entered is not valid\n");
    printf("Result of character shifted: %c",a);

}

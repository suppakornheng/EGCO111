#include<stdio.h>
#include<stdlib.h>
main()
{
    int c=0,j=0,i;
    char *p;
    p=(char*)malloc(50);
    printf("Enter Word: ");
    gets(p);
    for(i=0;*(p+i)!='\0';i++)
        j++;
    for(i=0;i<j;i++)
    {
        if(*(p+i)>='A' && *(p+i)<='Z')
            *(p+i)=*(p+i)+'a'-'A';
    }
    for(i=0;i<j/2;i++)
    {
            if(*(p+i)==*(p+strlen(p)-i-1))
                c++;
    }
    if(c==(j/2))
        printf("Your word is Palindrome");
    else
        printf("Your word is not Palindrome");
}

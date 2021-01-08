#include<stdio.h>
#include<string.h>
main()
{
    int a=0,e=0,i=0,o=0,u=0,c=0,z;
    char sen[1000];
    printf("sentence:");
    gets(sen);
    strlwr(sen);
    for(z=0;z<strlen(sen);z++)
    {
        switch(sen[z])
        {
            case 'a':a++;break;
            case 'e':e++;break;
            case 'i':i++;break;
            case 'o':o++;break;
            case 'u':u++;break;
            case ' ':break;
            default :c++;
        }
    }
    printf("Output:\n");
    printf("Consonant = %d\n",c);
    printf("Vowel 'a' = %d\n",a);
    printf("Vowel 'e' = %d\n",e);
    printf("Vowel 'i' = %d\n",i);
    printf("Vowel 'o' = %d\n",o);
    printf("Vowel 'u' = %d\n",u);
}

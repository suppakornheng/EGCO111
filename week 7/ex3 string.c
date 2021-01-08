#include<stdio.h>
main()
{
    int cu=0,cl=0,i;
    char m[100];
    printf("Enter your message: ");
    gets(m);
    for(i=0;i<100;i++)
    {
        if(m[i]>='a'&&m[i]<='z')
            m[i]='A'+m[i]-'a';
        else if(m[i]=='\0')
            break;
    }
    printf("%s",m);

}

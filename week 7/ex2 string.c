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
            cl++;
        else if(m[i]>='A'&&m[i]<='Z')
            cu++;
        else if(m[i]=='\0')
            break;
    }
    printf("Total of uppercase Letters : %d\n",cu);
    printf("Total of lowercase Letters : %d\n",cl);

}

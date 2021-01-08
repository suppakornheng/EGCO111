#include<stdio.h>
#include<string.h>
main()
{
    int count,a=-1,i;
    char check,name[20][50];
    printf("------------------------------------\n");
    printf("             My Cat                 \n");
    printf("------------------------------------\n");
    do
    {
        a++;
        do
        {
            count=0;
            check='T';
            printf("Cat name[%d]: ",a+1);
            gets(name[a]);
            strlwr(name[a]);
        //////////////check////////////////////////
            for(i=0;i<a;i++)
            {
                if(strcmp(name[a],name[i])==0)
                {
                    check='F';
                    printf("[%s] repeat!!!\n",name[a]);
                    printf("------------------------------------\n");
                    break;
                }
            }
        }while(check=='F');
        //////////////check////////////////////////
/////////////////strlen/////////////////
        count=0;
        for(i=0; ;i++)
        {
            if(name[a][i]=='\0')
                break;
            else
                count++;
        }
/////////////////strlen/////////////////
        if(strcmp(name[a],"end")!=0)
        {
            printf("Name length : %d\n",count);
        }
    printf("------------------------------------\n");
    }while(strcmp(name[a],"end")!=0);

    printf("My cat :> ");
    for(i=0;i<a;i++)
        printf("%s ",name[i]);

}

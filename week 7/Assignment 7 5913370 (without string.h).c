#include<stdio.h>
main()
{
    int count,a=-1,i,j;
    char check='T',name[20][50],name2[20][50];
    printf("------------------------------------\n");
    printf("             My Cat                 \n");
    printf("------------------------------------\n");
    for(i=0;i<20;i++)
        for(j=0;j<50;j++)
            name2[i][j]='\0';
    do
    {
        a++;
        do
        {
            printf("Cat name[%d]: ",a+1);
            gets(name[a]);
            //////////////strlwr////////////////////////
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
              for(i=0;i<count;i++)
              {
                  if(name[a][i]>='A' && name[a][i]<='Z')
                      name2[a][i]=name[a][i]+'a'-'A';
                  else
                      name2[a][i]=name[a][i];
              }
              //////////////strlwr///////////////////////
            //////////////check///////////////////////////
            if(a>0)
            {
                for(i=0;i<a;i++)
                {
                    check='F';
                    for(j=0;j<count;j++)
                    {
                        if(name2[a][j]!=name2[i][j])
                        {
                            check='T';
                            break;
                        }
                    }
                }
                if(check=='F')
                {
                    printf("[%s] repeat!!!\n",name[a]);
                    printf("------------------------------------\n");
                }
            }
        }while(check=='F');
        //////////////check///////////////////////////
        if(!(name[a][0]=='e'&&name[a][1]=='n'&&name[a][2]=='d'&&name[a][3]=='\0'))
        {
            printf("Name length : %d\n",count);
        }
    printf("------------------------------------\n");
    }while(!(name[a][0]=='e'&&name[a][1]=='n'&&name[a][2]=='d'&&name[a][3]=='\0'));

    printf("My cat :> ");
    for(i=0;i<a;i++)
        printf("%s ",name[i]);

}

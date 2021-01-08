#include<stdio.h>
main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<2*a;i++)
    {
        if(i<a)
            {
                for(j=0;j<i;j++)
                    printf(" ");
                printf("%d",i+1);
                printf("\n");
            }
        if(i>=a)
            {
                for(j=2*a-1;j>i;j--)
                    printf(" ");
                printf("%d",2*a-i);
                printf("\n");
            }

    }



}

#include<stdio.h>
//x^2+y^2=r^2
main()
{
    int i,j,r;
    scanf("%d",&r);
    for(i=0;i<=2*r;i++)
    {
        for(j=0;j<=2*r;j++)
        {
            if(((r-i)*(r-i)+(r-j)*(r-j))<(r*r))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

}

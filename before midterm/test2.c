#include<stdio.h>
main()
{
    int a[2][4],i,j,max,min;
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("N[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
            if(i==0 && j==0)
                {
                    max=a[i][j];
                    min=a[i][j];
                }
            if(a[i][j]>max)
                max=a[i][j];
            if(a[i][j]<min)
                min=a[i][j];
        }
    }
    printf("max= %d\n min= %d",max,min);
}

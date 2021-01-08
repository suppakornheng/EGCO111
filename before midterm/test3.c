#include<stdio.h>
main()
{
    int z,x,i,j;
    scanf("%d %d",&x,&z);
    int a[x][z],r[x];
    for(i=0;i<x;i++)
        r[i]=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<z;j++)
            {
                printf("N[%d][%d]: ",i,j);
                scanf("%d",&a[i][j]);
                if(i%2==0 && j%2==0)
                    {r[i]+=a[i][j];}
                else if(i%2==1 && j%2==1)
                    {r[i]+=a[i][j];}
            }
    }
    for(i=0;i<x;i++)
        printf("r[%d]= %d\n",i,r[i]);

}

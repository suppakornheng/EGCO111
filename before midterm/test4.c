#include<stdio.h>
main()
{
    int r,c,i,j,k,t,max;
    scanf("%d %d",&r,&c);
    if(r>c)
        max=r;
    else if(c>r)
        max=c;
    int a[r][c],o[2][max];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("N[i][j]: ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            o[1][i]+=a[i][j];
        }
        o[1][i]=o[1][i]/c;
    }





}

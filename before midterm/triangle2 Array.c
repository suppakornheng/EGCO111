#include<stdio.h>
main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<a[i]*2;j++)
        {
            if(j<=a[i])
                {
                    for(k=0;k<j;k++)
                        printf("*");
                }
            else
                {
                    for(k=2*a[i];k>j;k--)
                        printf("*");
                }
            if(j<a[i]*2-1)
                printf("\n");
        }
    }
}

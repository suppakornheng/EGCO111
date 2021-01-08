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
        for(j=0;j<2*a[i];j++)
        {
            if(j<a[i])
            {
            for(k=0;k<j;k++)
                printf(" ");
            printf("\\");
            printf("\n");
            }
            if(j>=a[i])
            {
            for(k=a[i]*2;k>j+1;k--)
                printf(" ");
            printf("/");
            printf("\n");
            }
        }
    }
}

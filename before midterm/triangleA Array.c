#include<stdio.h>
main()
{
    int n,i,j,k,max=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>max)
                max=a[i];
        }
    printf("max= %d\n\n",max);
    for(i=0;i<max;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]<max-i)
            {
                for(k=0;k<(2*a[j]-1);k++)
                    printf("a");
            }
            else
            {
                for(k=0;k<(max-i-1);k++)
                    printf("b");
            }
            if(a[j]>max-i-1)
            {
                for(k=0;k<(2*i-a[j]);k++)
                    printf("*");
                for(k=0;k<(max-i-1);k++)
                    printf("c");
            }
        }
        printf("\n");
    }
}

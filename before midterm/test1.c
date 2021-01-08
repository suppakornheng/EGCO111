#include<stdio.h>
main()
{
    int m,i,a[4];
    for(i=0;i<4;i++)
        {
            printf("Enter your number : ");
            scanf("%d",&a[i]);
            if(i==0)
                m=a[i];
            if(a[i]>m)
                m=a[i];
        }
    printf("max = %d",m);
}

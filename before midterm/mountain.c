#include<stdio.h>
main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=0;j<a-i-1;j++)
            printf(" ");
        printf("%d",a-i);
        for(j=0;j<2*i;j++)
            printf(" ");
        printf("%d",a-i);
        printf("\n");
    }
}

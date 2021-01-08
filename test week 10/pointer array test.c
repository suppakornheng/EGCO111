#include<stdio.h>
#include<string.h>
main()
{
    int a[10][10];
    int *p;
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            a[i][j]=i*10+j;
        }
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    p=&a[0][0];
    printf("pointer point = %d\n",p);
    printf("pointer value = %d\n",*p);

}

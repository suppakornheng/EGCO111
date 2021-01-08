#include<stdio.h>
#define size 5
void readarray(int[]);
void comparearray(int[],int[],int[]);
void printarray(int[]);
main()
{
    int a[size],b[size],c[size];
    printf("First array[5]\n");
    readarray(a);
    printf("\nSecond array[5]\n");
    readarray(b);
    comparearray(a,b,c);
    printarray(c);
}
void readarray(int a[])
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("Enter member[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
}
void comparearray(int a[],int b[],int c[])
{
    int i;
    for(i=0;i<size;i++)
    {
        if(a[i]>b[i])
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[i];
        }
    }
}
void printarray(int c[])
{
    int i;
    printf("\nResult array[5]:\n");
    for(i=0;i<size;i++)
    {
        printf("Answer[%d]:%d\n",i+1,c[i]);
    }
}

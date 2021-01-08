#include<stdio.h>
void firstandlast(int a)
{
    int i;
    for(i=0;i<a;i++)
        printf("*");
}
void rectangle(int a,int b)
{
    int i,j;
    firstandlast(a);
    for(i=0;i<b;i++)
    {
        printf("\n");
        printf("*");
        for(j=0;j<a-2;j++)
            printf(" ");
        printf("*");
    }
    printf("\n");
    firstandlast(a);
}
void input()
{
    int a,b;
    printf("Rectangle size: ");
    scanf("%dx%d",&a,&b);
    rectangle(a,b);
}
main()
{
    input();

}

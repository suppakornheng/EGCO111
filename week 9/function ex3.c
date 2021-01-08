#include<stdio.h>
void multiple(int a,int b)
{
    printf("Multiply of %d and %d is %d",a,b,a*b);
}
void check(int a,int b)
{
    if(a>=5 && a<=50 && b>=5 && b<=50)
        multiple(a,b);
    else
        {
        printf("Enter number in range >=5 and <=50\n");
        input();
        }
}
void input()
{
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    check(x,y);
}
main()
{
    input();
}

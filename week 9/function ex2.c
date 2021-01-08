#include<stdio.h>
int even(int a)
{
    return (a%2==0);
}
int odd(int a)
{
    return (a%2==1);
}
void input()
{
    int a;
    printf("Enter an integer number: ");
    scanf("%d",&a);
    printf("The number is even = %d\n",even(a));
    printf("The number is odd = %d",odd(a));
}
main()
{
    input();
}

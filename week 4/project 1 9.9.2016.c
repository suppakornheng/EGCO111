#include<stdio.h>
main()
{
    int x,y;
    printf("Enter two numbers (x:y): ");
    scanf("%d:%d",&x,&y);
    if(x>0 && y>0)
    printf("Your numbers are positive");
    printf("\nFinish");
}

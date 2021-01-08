#include<stdio.h>
main()
{
    int x,y;
    printf("Enter two numbers (x:y): ");
    scanf("%d:%d",&x,&y);
    if(x>0 && y>0)
        printf("Your numbers are positive\n");
    else if(x<0 && y<0)
        printf("Your numbers are negative\n");
    else
        printf("One number is negative\n");
    printf("Your numbers entered are %d and %d",x,y);
    printf("\nFinish");
}

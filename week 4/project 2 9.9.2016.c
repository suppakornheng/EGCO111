#include<stdio.h>
main()
{
    int x,y;
    printf("Enter two numbers (x y): ");
    scanf("%d %d",&x,&y);
    if(x>y)
     printf("x is greather than y");
    if(x<y)
     printf("x is smaller than y");
    if(x==y)
     printf("x is equal to y");
    printf("\nFinish");
}

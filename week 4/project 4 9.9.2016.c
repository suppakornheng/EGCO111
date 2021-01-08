#include<stdio.h>
main()
{   int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    if(num>0)
        printf("Positive and ");
    else if(num<0)
        printf("Negative and ");

    if(num%2==0)
        printf("even");
    else
        printf("odd");
    printf("\nFinish");
}


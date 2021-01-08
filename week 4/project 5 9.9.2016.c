#include<stdio.h>
main()
{
    float mark;
    printf("Enter your total marks: ");
    scanf("%f",&mark);
    printf("Your grade is ");
    if(mark>80)
        printf("A");
    else if(mark>70)
        printf("B");
    else if(mark>60)
        printf("C");
    else if(mark>50)
        printf("D");
    else
        printf("F");
}

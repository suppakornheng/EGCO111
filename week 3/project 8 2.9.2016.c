#include <stdio.h>
main()
{
    int w1,w2,h;
    float area;
    printf("Enter (w1:w1:h): ");
    scanf("%d:%d:%d",&w1,&w2,&h);
    area =(float) (w1+w2)*h/2;
    printf("Area of trapezoid = %.2f",area);



}

#include <stdio.h>
main()
{
    float F,C;
    printf("Enter Fahrenheit: ");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("\n%.2f Fahrenheit = %.2f Celsius",F,C);
}

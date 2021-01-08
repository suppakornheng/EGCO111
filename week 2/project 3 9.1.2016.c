#include <stdio.h>
main()
{
    float fahrenheit,celsius;
    fahrenheit = 98.6;
    celsius = (fahrenheit-32)*5/9;
    printf("%.2f Fahrenheit = %.2f Celsius\n",fahrenheit,celsius);
}

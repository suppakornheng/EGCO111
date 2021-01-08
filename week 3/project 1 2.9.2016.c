#include <stdio.h>

main()
{
    int x,y,z,averageint;
    float averagefloat;
    x=65;
    y=87;
    z=21;
    averageint = (float)(x+y+z)/3;
    averagefloat = (float)(x+y+z)/3;
    printf("1.averageint is %.2d\n",averageint);
    printf("3.average is %.2f\n",(x+y+z)/3);
    printf("2.averageint is %.2f\n",(float)averageint);
    printf("4.average is %.2f\n",(float)(x+y+z)/3);
    printf("5.averagefloat is %.2f\n",averagefloat);
    averagefloat = (x+y+z)/3;
    printf("6.averagefloat is %.2f",averagefloat);
}

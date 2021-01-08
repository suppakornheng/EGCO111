#include<stdio.h>
#define Pi 3.14
main()
{
    float radius=2.5,length=40.5,width=30.8;

    printf("area of rectangle is %.2f square cm\n",(float)length*width);
    printf("area of circle is %.2f square cm\n",(float)Pi*radius*radius);
    printf("%d circle(s)\n",(int)(length/(2*radius))*(int)(width/(2*radius)));
}

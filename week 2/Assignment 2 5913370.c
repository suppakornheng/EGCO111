#include <stdio.h>
#define PI 3.14159265
main()
{
    float radius1, radius2, radius3;
    radius1 = 2.5;
    radius2 = 34.42;
    radius3 = 191.365;
    printf("Radius of circle is %.7f\n",radius1);
    printf("Radius of circle is %.7f\n",radius2);
    printf("Radius of circle is %.7f\n",radius3);
    printf("Conclusion\n");
    printf("**********************************************\n");
    printf("Radius\t\t      Area\t   Circular\n");
    printf("**********************************************\n");
    printf("%.2f\t\t%11.3f\t\%11.2f\n",radius1,PI*radius1*radius1,2*PI*radius1);
    printf("%.2f\t\t%11.3f\t%11.2f\n",radius2,PI*radius2*radius2,2*PI*radius2);
    printf("%.2f\t\t%11.3f\t%11.2f\n",radius3,PI*radius3*radius3,2*PI*radius3);
    printf("**********************************************\n");
    printf("**********************************************\n");
    printf("1234567890\t1234567890\t   1234567890\n\n");
}

#include <stdio.h>

main()
{
    int a,b,c;
    a=3;
    b=4;
    printf("Before\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);

    printf("------------------------------------\n");
    a=3;
    b=4;
    printf("Before\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);


}

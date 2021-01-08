#include<stdio.h>
main()
{
    double n,i=0;
    scanf("%lf",&n);
    while(i*i<n)
    {
        i=i+0.000000010;
    }
    printf("sqrt(%.2lf) = %lf",n,i);

}

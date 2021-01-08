#include<stdio.h>
#define Pi 3.14
main()
{
    float r=2.5,lr=40.5,wr=30.8;
    int lc,wc,cir;
    lc = lr/(2*r);
    wc = wr/(2*r);
    cir = wc*lc;
    printf("area rec = %.2f\n",lr*wr);
    printf("area cir = %.2f\n",Pi*r*r);
    printf("circle => %d\n",cir);
}

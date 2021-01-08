#include<stdio.h>
main()
{
    int x=7,y=2;
    printf("x:%d,y:%d\n",x,y);
    x+=y;
    printf("x+=y => %d\n",x);
    x-=y;
    printf("x-=y => %d\n",x);
    x*=y;
    printf("x*=y => %d\n",x);
    x/=y;
    printf("x/=y => %d\n",x);
    x%=y;
    printf("x%=y => %d\n",x);
    printf("-----------------------\n");
    x=7,y=2;
    printf("x:%d,y:%d\n",x,y);
    printf("x+=y => %d\n",x+=y);
    printf("x-=y => %d\n",x-=y);
    printf("x*=y => %d\n",x*=y);
    printf("x/=y => %d\n",x/=y);
    printf("x%%=y => %d\n",x%=y);
}

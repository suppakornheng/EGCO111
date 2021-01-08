#include <stdio.h>
main()
{
    int x,y,z;
    printf("x:%d ,y:%d ,z:%d\n",x=6,y=3,z=0);
    z=(x++)+(++y);
    printf("x:%d ,y:%d ,z:%d\n",x,y,z);
    z=2*5+(--x);
    printf("x:%d ,y:%d ,z:%d\n",x,y,z);
    z=(--x)-(--y);
    printf("x:%d ,y:%d ,z:%d\n",x,y,z);

    printf("-------------------------------------\n");

    printf("x:%d ,y:%d ,z:%d\n",x=6,y=3,z=0);

    printf("x:%d ,y:%d ,z:%d\n",x,y,z=(x++)+(++y));

    printf("x:%d ,y:%d ,z:%d\n",x,y,z=2*5+(--x));

    printf("x:%d ,y:%d ,z:%d\n",x,y,z=(--x)-(--y));
}

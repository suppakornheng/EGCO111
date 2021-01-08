#include<stdio.h>
void swap(int *a, int *b)
{
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}
main()
{
    int x,y,*px,*py;
    px=&x;
    py=&y;
    printf("Enter two numbers: ");
    scanf("%d %d",px,py);
    printf("Before swap: x = %d, y = %d\n",x,y);
    swap(px,py);
    printf("After  swap: x = %d, y = %d",x,y);

}

#include <stdio.h>
//string มีช่องว่าง 1 ช่อง แต่ array ไม่มี ทำให้สามารถหาค่าตัวสุดท้ายของ string แต่ไม่สามารถหาตัวสุดท้ายของ arrays ได้
main()
{
    int i,j,fibo[9]={1,1,2,3,5,8,13,21,34};
    printf("\tBefore\t\t\t\tAfter\n");
    printf("Element\t\tData\t\tElement\t\tData\n");
    for(i=0,j=8;i<9,j>=0;i++,j--)
    {
        printf("fibo[%d]\t\t%2d\t\tfibo[%d]\t\t%d\n",i,fibo[i],j,fibo[j]);
    }

}

#include <stdio.h>
//string �ժ�ͧ��ҧ 1 ��ͧ �� array ����� ���������ö�Ҥ�ҵ���ش���¢ͧ string ���������ö�ҵ���ش���¢ͧ arrays ��
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

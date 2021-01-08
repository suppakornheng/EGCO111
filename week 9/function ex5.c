#include<stdio.h>
float average(int a[]);
main()
{
    int i,a[5];
    float avg;
    printf("Number[5]\n");
    for(i=0;i<5;i++)
    {
        printf("Enter member[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    avg=average(a);
    printf("Average of elements in array is %.2f",avg);
}

float average(int a[])
{
    int sum=0,i;
    for(i=0;i<5;i++)
        sum+=a[i];
    return (float)sum/5;
}

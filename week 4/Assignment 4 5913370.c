#include<stdio.h>
main()
{
    float in,tax=0;
    printf("Enter your Income : ");
    scanf("%f",&in);

    if(in>4000000)
    {
        tax+=(in-4000000)*35/100;
        in=4000000;
    }
    if(in>2000000)
    {
        tax+=(in-2000000)*30/100;
        in=2000000;
    }
    if(in>1000000)
    {
        tax+=(in-1000000)*25/100;
        in=1000000;

    }
    if(in>750000)
    {
        tax+=(in-750000)*20/100;
        in=750000;
    }
    if(in>500000)
    {
        tax+=(in-500000)*15/100;
        in=500000;
    }
    if(in>300000)
    {
        tax+=(in-300000)*10/100;
        in=300000;
    }
    if(in>150000)
    {
        tax+=(in-150000)*5/100;
        in=150000;
    }
    printf("your tax is %.5f",tax);
}

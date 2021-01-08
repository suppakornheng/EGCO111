#include<stdio.h>
main()
{
    float sumday,sumweek=0,cost[7][3];
    int d,p;
    for(d=0;d<7;d++)
    {
        sumday=0;
        for(p=0;p<3;p++)
        {
            printf("Cost of food(Day%d,Period%d): ",d+1,p+1);
            scanf("%f",&cost[d][p]);
            sumday+=cost[d][p];
            sumweek+=cost[d][p];
        }
        printf("Average of Day%d is %.2f\n",d,sumday/3);
    }
    printf("Average of week is %.2f",sumweek/21);
}

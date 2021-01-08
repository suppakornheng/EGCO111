#include<stdio.h>
main()
{
    int days,month,day;
    printf("Enter Days : ");
    scanf("%d",&days);
    month =days/30;
    day=days%30;
    printf("%d days = %d month(s) and %d day(s)",days,month,day);

}

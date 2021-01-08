#include <stdio.h>
main()
{
    int year,i;
    float score;
    char grade;
    char name[3];
    for(i=0;i<3;i++)
        name[i]='\0';

    printf("Year:Score:Grade:Name => ");
    scanf("%d:%f:%c:%s",&year,&score,&grade,&name);

    printf("I'm %s,year %d\n",name,year);
    printf("My score is %.2f and I get %c",score,grade);

}

#include<stdio.h>
main()
{
    int year,i;
    float score;
    char grade;
    char name[50];
    for(i=0;i<50;i++)
        name[i]='\0';

    printf("Name : ");
    scanf("%s",&name);
    printf("Year : ");
    scanf("%d",&year);
    printf("Score : ");
    scanf("%f",&score);
    //rewind(stdin);
    printf("Grade : ");
    scanf("% c",&grade);

    printf("I'm %s,year %d\n",name,year);
    printf("My score is %.2f and I get %c",score,grade);




}

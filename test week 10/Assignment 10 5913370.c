#include<stdio.h>
char grading(float score)
{
    if(score>80)
        return 'A';
    else if(score>70)
        return 'B';
    else if(score>60)
        return 'C';
    else if(score>50)
        return 'D';
    else
        return 'F';
}
main()
{
    int num,i;
    float avg=0;
    printf("How many students that you want to input data?: ");
    scanf("%d",&num);
    typedef struct
    {
        int id[10];
        float mids,fins,labs,sums;
        char grade;
    }student;
    student st[num];
    printf("\n");
    for(i=0;i<num;i++)
    {
        printf("Enter number of student ID %d: ",i+1);
        scanf("%s",&st[i].id);
        printf("Enter Midterm score %d: ",i+1);
        scanf("%f",&st[i].mids);
        printf("Enter Final score %d: ",i+1);
        scanf("%f",&st[i].fins);
        printf("Enter Lab score %d: ",i+1);
        scanf("%f",&st[i].labs);
        printf("\n");
        st[i].sums=st[i].mids+st[i].fins+st[i].labs;
        avg+=st[i].sums;
        st[i].grade=grading(st[i].sums);
    }
    printf("=========================Grade report=========================\n");
    printf("NO\tStudent ID\t\tScores\t\tGrade\n");
    printf("==============================================================\n");
    for(i=0;i<num;i++)
    {
        printf("%d\t%s\t\t%.2f\t\t%c\n",i+1,st[i].id,st[i].sums,st[i].grade);
    }
    printf("==============================================================\n");
    printf("AVG =\t%.2f\n",avg/num);
    printf("==============================================================\n");
}

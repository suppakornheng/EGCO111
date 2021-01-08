#include<stdio.h>
main()
{
    int i;
    struct student
    {
        char name[20];
        char surname[20];
        float salary;
    };
    struct student st[2];
    for(i=0;i<2;i++)
    {
        printf("Enter name: ");
        fflush(stdin);
        gets(st[i].name);
        printf("Enter surname: ");
        gets(st[i].surname);
        printf("Enter salary: ");
        scanf("%f",&st[i].salary);
    }
    for(i=0;i<2;i++)
    {
         if(st[i].salary>=15000)
        {
            printf("%s %s\n",st[i].name,st[i].surname);
            printf("%.2f",st[i].salary);
        }
    }
}

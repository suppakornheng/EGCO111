#include<stdio.h>
main()
{
    struct student
    {
        char name[20];
        char surname[20];
        char address[20];
        float salary;
    };
    struct student st;
    printf("Enter name: ");
    gets(st.name);
    printf("Enter surname: ");
    gets(st.surname);
    printf("Enter address: ");
    gets(st.address);
    printf("Enter salary: ");
    scanf("%f",&st.salary);
    printf("%s %s\n",st.name,st.surname);
    printf("%s\n",st.address);
    printf("%.2f\n",st.salary);
    if(st.salary>=25000)
    {
        printf("Your salary is greater than 25000");
    }
    else
    {
        printf("Your salary is lower than 25000");
    }
}

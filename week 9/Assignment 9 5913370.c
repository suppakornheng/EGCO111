#include<stdio.h>
void line(void);
void read(char[]);
void input(char[]);
void output(char[],char[],char[]);
int strlen(char[]);
void upper(char[]);
float gradeeeee(char[]);
main()
{
    char id[10],name[50],grade[5];
    line();
    printf("   Enter ID       : ");
    read(id);
    printf("   Enter Namezt   : ");
    read(name);
    line();
    input(grade);
    line();
    output(id,name,grade);
    line();
}
void line()
{
    printf("**************************************************\n");
}
void read(char a[])
{
    gets(a);
}
void input(char a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("   Grade <EE11%d> : ",i);
        scanf(" %c",&a[i]);
    }
}
void output(char a[],char b[],char c[])
{
    upper(b);
    upper(c);
    printf("   ID : %s : Name : %s : GPA : %.2f\n",a,b,gradeeeee(c));
}
int strlen(char a[])
{
    int i,j=0;
    for(i=0;a[i]!='\0';i++)
    {
        j++;
    }
    return j;
}
void upper(char a[])
{
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]='A'+a[i]-'a';
        }
    }
}
float gradeeeee(char a[])
{
    int i;
    float sum=0;
    for(i=0;i<5;i++)
    {
        switch(a[i])
        {
            case 'A': sum+=4 ; break;
            case 'B': sum+=3 ; break;
            case 'C': sum+=2 ; break;
            case 'D': sum+=1 ; break;
            case 'F': sum+=0 ; break;
        }
    }
    return sum/5;
}

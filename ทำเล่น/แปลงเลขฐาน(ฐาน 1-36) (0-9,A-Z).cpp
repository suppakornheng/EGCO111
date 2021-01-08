#include <stdio.h>
#include <string.h>
int transatoi(char a)
{
    if(a>='0' && a<='9')
        return a-'0';
    if(a>='A' && a<='Z')
        return a-'A'+10;
    if(a>='a' && a<='z')
        return a-'a'+10;
}
char transitoa(int a)
{
    if(a>=0 && a<=9)
        return a+'0';
    if(a>=10 && a<=35)
        return a+'A'-10;
}



main()
{
    char num1[100],num2[100];
    int innary,outnary,numi,a,b,c,numi2,   d,e,f,g,h,i,j,k,l,m,n,o,p;

    for(i=0;i<100;i++)
    {
        num1[i]='\0';
        num2[i]='\0';
    }

    printf("input num : ");
    gets (num1);
    printf("input innary : ");
    scanf("%d",&innary);
    printf("input outnary : ");
    scanf("%d",&outnary);

    printf("input num is %s\n",num1);
    printf("strlen is %d\n",strlen(num1));
    printf("num1 is %s\n",num1);

    a=1;
    b=strlen(num1);
    numi=0;
    for(i=0;i<b;i++)
    {
        a=1;
        for(j=b-i-1;j>0;j--)
           {
             a=a*innary;
           }
        c=transatoi(num1[i]);
        numi=numi+c*a;

        printf("Loop %d\n",i+1);
        printf("c : %d\n",c);
        printf("a : %d\n",a);
        printf("c*a : %d\n",a);
        printf("numi : %d\n\n",numi);
    }
    numi2=numi;
    i=0;
    while(numi2>0)
    {
        numi2/=outnary;
        i++;
    }
    k=1;
    i--;
    numi2=numi;
    while(numi2>0)
    {
        d=numi2%outnary;
        num2[i]=transitoa(d);

        printf("Loop %d\n",k);
        printf("d : %d\n",d);
        printf("numi2 : %d\n",numi2);
        printf("num2[%d] : %c\n",i,num2[i]);
        k++;
        numi2/=outnary;
        i--;

    }

        printf("\nOutput is %s",num2);

}

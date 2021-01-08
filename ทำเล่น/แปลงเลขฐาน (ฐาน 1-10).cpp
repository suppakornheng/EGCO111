#include <stdio.h>
#include <math.h>
int main()
{
    int innary,outnary,n1;
    int a1,b,c,d,e,f,i,j,k,z;
    printf("Input1 (1-10) : ");
    scanf("%d",&innary);
    printf("Input2 (1-10) : ");
    scanf("%d",&outnary);
    printf("Input3 (integer) : ");
    scanf("%d",&n1);


    i=1;
    j=1;


    while(n1%i!=n1)
    {
        i=i*10;
        j++;
    }

    j--;
    i=i/10;
    a1=n1;
    b=0;
    e=0;
    while(a1/i!=a1)
    {
        c=1;
        for(k=1;k<j;k++)
            {c=c*innary;}

        b=b+(a1/i)*c;
        a1=a1%i;
        i=i/10;
        j--;
        e++;

    }
        b=b+a1;
    j=0;
    d=b;
    e=0;
    z=0;
    while(d>0)
    {
        f=1;
        for(k=0;k<j;k++)
        {f=f*10;}
        e=e+(d%outnary)*f;
        d=d/outnary;
        j++;
        z++;
    }

    printf("output : %d",e);



    return 0;


}

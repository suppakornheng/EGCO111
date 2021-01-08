
#include <stdio.h>
#include <conio.h>
int main()
{    int n,input[1000],i,j,k,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",input+i);
        if(input[i]>max)max=input[i];
    }
    for(i=1;i<=max;i++)
    {
        for(j=0;j<n;j++)
            {
                if(input[j]+i<=max)
                    {
                        for(k=0;k<input[j]*2;k++)
                        {putchar(' ');}
                    }
                else
                {
                    for(k=0;k<input[j];k++)
                    {
                        if(max-i==k)putchar('/');
                        else putchar(' ');
                    }
                    for(k=input[j]-1;k>=0;k--)
                    {
                        if(max-i==k)putchar('\\');
                        else putchar(' ');
                    }
                }
            }
            putchar('\n');
    }
getch();
}

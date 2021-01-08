#include<stdio.h>
#include<string.h>
main()
{
    int i,j,k,count;
    char w[200];
    gets(w);
    strlwr(w);
    for(i='a';i<='z';i++)
    {
        count=0;
        for(j=0;j<strlen(w);j++)
        {
            if(i==w[j])
            {
                printf("%c = ",i);
                for(k=0;k<strlen(w);k++)
                {
                    if(w[k]==i)
                        count++;
                }
                printf("%d\n",count);
                break;
            }
        }
    }

}

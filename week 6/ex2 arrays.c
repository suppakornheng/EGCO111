#include <stdio.h>
main()
{
    int max=-9999999999999999,min=9999999999999999999999,data[6],i;
    for(i=0;i<6;i++)
    {
        printf("Enter data[%d]: ",i);
        scanf("%d",&data[i]);
        if(data[i]>max)
            max=data[i];
        if(data[i]<min)
            min=data[i];
    }
    printf("Your data:");
    for(i=0;i<6;i++)
        printf("%d ",data[i]);
    printf("\nMaximum value is %d\n",max);
    printf("Minimum value is %d",min);
}

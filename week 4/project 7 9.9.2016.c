#include<stdio.h>
main()
{
   int year;
   printf("Enter your college year: ");
   scanf("%d",&year);
   if(year>4)
        printf("Freshman");
   else if(year>3)
        printf("Sophomore");
   else if(year>2)
        printf("Junior");
   else if(year>1)
        printf("Senior");
   else if(year>0)
        printf("Super Senior");
   else
        printf("Cannot answer");


}

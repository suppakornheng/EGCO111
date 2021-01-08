#include<stdio.h>
main()
{
   int year;
   printf("Enter your college year: ");
   scanf("%d",&year);
   switch(year)
   {
       case 1:printf("Freshman");break;
       case 2:printf("Sophomore");break;
       case 3:printf("Junior");break;
       case 4:printf("Senior");break;
       case 5:printf("Super Senior");break;
       default :printf("Cannot answer");
   }

}

#include<stdio.h>
main()
{
   char Moving,CharParkRow;
   int IntParkRow,ParkColumn,i,j,row,column,parking,ParkingCar[26][1000],ExitOrStay=1,WrongInput=0;
   /////////parkingcar=0////////
   for(i=0;i<26;i++)
    for(j=0;j<1000;j++)
        ParkingCar[i][j]=0;
   ///////////Parking///////////
   printf("Input parking lot (row column): ");
   //////////Check Input////////
   do
   {
       WrongInput=0;
       scanf("%d %d",&row,&column);
    if(row<=0 && column<=0)
       {
           printf("Both row and column is below or equal to zero\n");
           WrongInput=1;
       }
       else if(row<=0)
       {
           printf("Your row is below or equal to zero\n");
           WrongInput=1;
       }
       else if(column<=0)
       {
           printf("Your column is below or equal to zero\n");
           WrongInput=1;
       }
       else if(row>26)
       {
           printf("Your row must below or equal to 26\n");
           WrongInput=1;
       }
       else if(column>1000)
       {
           printf("Sorry! This Program have domain of column = [1,1000]\n");
           WrongInput=1;
       }
   }while(WrongInput==1);

   parking=row*column;
   printf("You have %d Parking(s)\n",parking);
   ///////// Nothing~ //////////
   if(row==1 && column>1)
    printf("Input [(+,-) (a,A) (1-%d)]",column);
   else if(row>1 && column==1 )
    printf("Input [(+,-) (a,A-%c,%c) (1)]",'a'-1+row,'A'-1+row);
   else if(row==1 && column==1)
    printf("Input [(+,-) (a,A) (1)]");
   else
    printf("Input [(+,-) (a,A-%c,%c) (1-%d)]",'a'-1+row,'A'-1+row,column);
    ////////How to Exit Loop////////
    printf(" or Input [+ - 0] to Exit\n");
    ////////Enter the paradox///////
    do
    {
        do
        {
            WrongInput=0;
            scanf(" %c %c %d",&Moving,&CharParkRow,&ParkColumn);
            ////////////Check Input////////////
            if(Moving=='+'&&CharParkRow=='-'&&ParkColumn==0)
            {
                ExitOrStay=0;
            }
            else if(!(Moving=='+'||Moving=='-'))
            {
                printf("Moving must be '+' or '-'\n");
                WrongInput=1;
            }
            else if(CharParkRow>'A'-1+row && CharParkRow<='Z')
            {
                printf("Your Row is not that much\n");
                WrongInput=1;
            }
            else if(CharParkRow>'a'-1+row && CharParkRow<='z')
            {
                printf("Your Row is not that much\n");
                WrongInput=1;
            }
            else if( (CharParkRow>'z') || (CharParkRow<'a' && CharParkRow>'z') || (CharParkRow<'A') )
            {
                printf("Your Row is out of domain\n");
                WrongInput=1;
            }
            else if(ParkColumn>column)
            {
                printf("Your Column is not that much\n");
                WrongInput=1;
            }
            else if(ParkColumn<1)
            {
                printf("Your Column is out of domain\n");
                WrongInput=1;
            }
            else
            {
                ////////////Char to Int////////////
                if(CharParkRow>='a' && CharParkRow<='z')
                    IntParkRow=CharParkRow-'a';
                else if(CharParkRow>='A' && CharParkRow<='Z')
                    IntParkRow=CharParkRow-'A';
                ////////////+- A-Z a-z 1-xxx///////
                if(Moving=='+'&& ParkingCar[IntParkRow][ParkColumn-1]==0)
                {
                    ParkingCar[IntParkRow][ParkColumn-1]=1;
                    parking--;
                    printf("Parking left: %d\n",parking);
                }
                else if(Moving=='-'&&ParkingCar[IntParkRow][ParkColumn-1]==1)
                {
                    ParkingCar[IntParkRow][ParkColumn-1]=0;
                    parking++;
                    printf("Parking left: %d\n",parking);
                }
                else if(Moving=='+'&&ParkingCar[IntParkRow][ParkColumn-1]==1)
                {
                    printf("Can't Parking\n");
                }
                else if(Moving=='-'&&ParkingCar[IntParkRow][ParkColumn-1]==0)
                {
                    printf("No car to move out\n");
                }
            }
        }while(WrongInput==1);
    }while(ExitOrStay!=0);
 printf("Exit");
}

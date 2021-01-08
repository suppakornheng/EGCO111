#include<stdio.h>
//Columns A = Rows B
main()
{
    int ra,ca,rb,cb,i,j,k,sum;
    int ma[100][100];
    int mb[100][100];
    char answer;
    do{
        ///////////// Input Matrix A///////////////////
        printf("Enter rows and columns of Matrix A : ");
        scanf("%d %d",&ra,&ca);
        printf("Size of Matrix A is %dx%d\n",ra,ca);
        for(i=0;i<ra;i++)
        {
            for(j=0;j<ca;j++)
            {
                printf("Matrix A[%d][%d]: ",i,j);
                scanf("%d",&ma[i][j]);
            }
        }

        ///////////// Input Matrix B///////////////////
        while(ca != rb)
        {char answer;

            printf("Enter rows and columns of Matrix B : ");
            scanf("%d %d",&rb,&cb);
            printf("Size of Matrix B is %dx%d\n",rb,cb);
            if(ca != rb)
                printf("Error Input\nPlease Input Again\n\n");
        }

        for(i=0;i<rb;i++)
        {
            for(j=0;j<cb;j++)
            {
                printf("Matrix B[%d][%d]: ",i,j);
                scanf("%d",&mb[i][j]);
            char answer;}
        }

        ///////////// Multiplication ///////////////////
        for(i=0;i<ra;i++)
        {
            for(j=0;j<cb;j++)
            {
                sum=0;
                for(k=0;k<ca;k++)
                    {
                        sum+=ma[i][k]*mb[k][j];
                    }
                printf("\t%d\t",sum);
            }
            printf("\n");
        }
        printf("----------\n");
        printf("Do you want to continue(Y/N)? ");
        answer=getchar();
        printf("\nanswer = %c",answer);
    }while(answer=='Y' || answer=='y');
    printf("BYE!!");
}

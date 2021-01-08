#include<stdio.h>
main()
{
    int ra,ca,rb,cb,i,j;
    int ma[100][100];
    int mb[100][100];
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
    while(rb!=ra || cb!=ca)
    {

        printf("Enter rows and columns of Matrix B : ");
        scanf("%d %d",&rb,&cb);
        printf("Size of Matrix B is %dx%d\n",rb,cb);
        if(rb!=ra || cb!=ca)
            printf("Error Input\nPlease Input Again\n\n");
    }

    for(i=0;i<rb;i++)
    {
        for(j=0;j<cb;j++)
        {
            printf("Matrix B[%d][%d]: ",i,j);
            scanf("%d",&mb[i][j]);
        }
    }

    printf("MatrixA + MatrixB\n");

    for(i=0;i<rb;i++)
    {
        for(j=0;j<cb;j++)
        {
            printf("\t%d\t",ma[i][j]+mb[i][j]);

        }
        printf("\n");
    }

}

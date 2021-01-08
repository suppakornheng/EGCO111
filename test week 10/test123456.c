#include<stdio.h>
void print(int a[10][10]);
void move(char c,int a[10][10])
{
    int i,j,x,y;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[i][j]==888)
            {
                x=j;
                y=i;
            }
        }
    }
    printf("\nx=%d\ny=%d\n",x,y);
    if(c=='w')
    {
        a[y-1][x]=a[y][x];
        a[y][x]=y*10+x;
    }
    else if(c=='a')
    {
        a[y][x-1]=a[y][x];
        a[y][x]=y*10+x;
    }
    else if(c=='s')
    {
        a[y+1][x]=a[y][x];
        a[y][x]=y*10+x;
    }
    else if(c=='d')
    {
        a[y][x+1]=a[y][x];
        a[y][x]=y*10+x;
    }

}
main()
{
    char c;
    int a[10][10];
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            a[i][j]=i*10+j;
        }
    }
    for(i=0;i<4;i++)
    {
        a[5][i+3]=888;
    }
    print(a);

    for(;;)
    {
        scanf(" %c",&c);
        move(c,a);
        printf("\n\n");
        print(a);
    }
}
void print(int a[10][10])
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}

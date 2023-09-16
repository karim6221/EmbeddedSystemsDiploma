#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter rows and ccolumn of matrix: ");
    scanf("%d",&x);scanf("%d",&y);
    int a[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("enter elements a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered Matrix\n");
    for(int q=0 ; q < x ; q++)
    {
        printf("\n");
        for(int w = 0; w < y ;w++)
        {
            printf("%d\t",a[q][w]);
        }
    }
    printf("\ntranspose of Matrix:\n");
    for(int e=0 ; e < y ; e++)
    {
        printf("\n");
        for(int r = 0; r < x ;r++)
        {
            printf("%d\t",a[r][e]);
        }
    }
}
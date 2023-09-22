#include<stdio.h>
//code to get transpose of array two dimintion [2][3]-->[3][2]
int main()
{
    int x,y;
    printf("Enter rows and column of matrix: ");
    //input number of rows and column
    scanf("%d",&x);scanf("%d",&y);
    int a[x][y];
    //input elements of array 
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("enter elements a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered Matrix\n"); 
    
    //print the input array
    for(int q=0 ; q < x ; q++)
    {
        printf("\n");
        for(int w = 0; w < y ;w++)
        {
            printf("%d\t",a[q][w]);
        }
    }
    printf("\ntranspose of Matrix:\n");

    //print the transpose array
    for(int e=0 ; e < y ; e++)
    {
        printf("\n");
        for(int r = 0; r < x ;r++)
        {
            printf("%d\t",a[r][e]);
        }
    }
}
#include<stdio.h>
//code to get sum of two demintion array
int main()
{
    float a[2][2],b[2][2];
    printf("enter the elemnts of 1st matrix\n");
    //for loop to input elemnts of array 1
    for(int i = 0; i < 2 ; i++)
    {
        for(int j = 0; j < 2 ; j++)
        {
            printf("enter a%d%d: ",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }
    printf("enter the elemnts of 2nd matrix\n");
    //for loop to input elemnts of array 2
    for(int w = 0; w < 2 ; w++)
    {
        for(int e = 0; e < 2 ; e++)
        {
            printf("enter b%d%d: ",w+1,e+1);
            scanf("%f",&b[w][e]);
        }
    }
    printf("sum of matrix\n");
    //for loop to print the sum of two array
    for(int r = 0; r < 2 ; r++)
    {
        for(int t = 0; t < 2 ; t++)
        {
            printf("%0.1f\t",a[r][t]+b[r][t]);
        }
        printf("\n");
    }
    
}
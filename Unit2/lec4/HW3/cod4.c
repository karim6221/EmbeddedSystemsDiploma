#include<stdio.h>
//code to add number to array with location
int main()
{
    int x,y,z, temp,gg;
    printf("Enter no of elements = ");
    //number of elements of array
    scanf("%d",&x);
    int a[x+1];
    //input the data if array
    for (int i = 0 ; i < x ; i++ )
    {
        scanf("%d",&a[i]);
    }

    printf("enter element = ");
    //input the number need to add
    scanf("%d",&y);
    printf("enter place = ");
    //number of location of added number
    scanf("%d",&z);
    //for loop to switch places of data
    for (int k = x ;k >= z-1 ; k--)
    {
        a[k] = a[k-1];
    }
    //put added number in location
    a[z-1] = y;
    //for loop to print the output
    for (int j = 0 ; j < x+1 ; j++ )
    {
        printf("%d",a[j]);
    }
}
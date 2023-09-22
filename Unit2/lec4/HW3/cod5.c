#include<stdio.h>
//code to search in array to find one element
int main()
{
    int x,y;
    printf("Enter no of elements = ");
    //input number of elements of array
    scanf("%d",&x);
    int a[x];

    //input array values
    for (int i = 0 ; i < x ; i++ )
    {
        scanf("%d",&a[i]);
    }
    printf("Enter num you searched : ");
    //input number need to find
    scanf("%d",&y);
    //for loop to searh in all of array
    for (int j = 0 ; j < x ; j++ )
    {
        if(a[j] == y)
        {
            printf("Number found locaited = %d",j+1);
        }
    }
}
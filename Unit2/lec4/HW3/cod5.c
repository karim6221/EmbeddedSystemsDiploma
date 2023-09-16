#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter no of elements = ");
    scanf("%d",&x);
    int a[x];
    for (int i = 0 ; i < x ; i++ )
    {
        scanf("%d",&a[i]);
    }
    printf("Enter num you searched : ");
    scanf("%d",&y);
    for (int j = 0 ; j < x ; j++ )
    {
        if(a[j] == y)
        {
            printf("Number found locaited = %d",j+1);
        }
    }
}
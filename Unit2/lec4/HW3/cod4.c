#include<stdio.h>
int main()
{
    int x,y,z, temp,gg;
    printf("Enter no of elements = ");
    scanf("%d",&x);
    int a[x+1];
    for (int i = 0 ; i < x ; i++ )
    {
        scanf("%d",&a[i]);
    }

    printf("enter element = ");
    scanf("%d",&y);
    printf("enter place = ");
    scanf("%d",&z);

    for (int k = x ;k >= z-1 ; k--)
    {
        a[k] = a[k-1];
    }
    a[z-1] = y;
  
    for (int j = 0 ; j < x+1 ; j++ )
    {
        printf("%d",a[j]);
    }
}
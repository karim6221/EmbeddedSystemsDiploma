#include<stdio.h>
int main()
{
    float x , y , z ;
    printf("Enter value of a: ");
    scanf("%f",&x);
    printf("Enter value of a:");
    scanf("%f",&y);
    z = x ;
    x = y ;
    y = z ;
    printf("After swapping, value of a = %0.2f\n",x);
    printf("After swapping, value of b = %0.2f",y);

}
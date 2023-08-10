#include <stdio.h>
int main()
{
    int x ;
    printf("Enter an integer you want to check : ");
    scanf("%d",&x);
     
    if (x % 2 == 1 )
    {
        printf("%d is odd", x);
    }
    else if (x % 2 == 0)
    {
        printf("%d is even", x);
    }
}
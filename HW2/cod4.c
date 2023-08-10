#include <stdio.h>
int main()
{
    float x;
    printf("Enter number : ");
    scanf("%f",&x);
    if (x > 0)
    {
        printf("%f is postive ",x);
    }
    else if (x < 0)
    {
        printf("%f is negative ",x);
    }
    else 
    {
        printf("%f is zero ",x);
    }
}
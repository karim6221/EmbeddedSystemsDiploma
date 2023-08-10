#include <stdio.h>
int main()
{
    int x , sum=0;
    printf("Enter an integer = ");
    scanf("%d",&x);
    if (x > 0)
    {
        for(int i ; i <= x ; i++)
        {
            sum = sum + i;

        }        
    }
    printf("Sum = %d ",sum);
    
}
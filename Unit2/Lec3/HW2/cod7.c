#include <stdio.h>
int main()
{
    int x , sum=1;
    printf("Enter an integer = ");
    scanf("%d",&x);
    if (x > 0)
    {
        for(int i=1 ; i <= x ; i++)
        {
            sum = sum * i;
        }        
    }
    else if (x < 0 ){
        printf("Error !!! factorial of negative number doesn't exist");
    }
    printf("Sum = %d ",sum);
    
}
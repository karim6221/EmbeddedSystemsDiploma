#include <stdio.h>
int main()
{
    float x , larg = 0 ;
    printf("Enter three numbers : ");
    for(int i = 0 ; i < 3 ; i++)
    {
        scanf("%f",&x);
        if(larg < x)
        {
            larg = x ;
        }
    }
    printf("Largest number = %f",larg);

    
    
}
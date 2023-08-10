#include <stdio.h>
int main()
{
    char x;
    float y,z;
    printf("Enter operator + or - or * or divide :- ");
    scanf("%c",&x);
    printf("Enter two operands : ");
    scanf("%f",&y);
    scanf("%f",&z);
   
    switch(x)
    {
        case '+':
        printf("%f + %f = %f",y , z , y + z );
        break;
        case '*':
        printf("%f * %f = %f",y , z , y * z );
        break;
        case '/':
        printf("%f / %f = %f",y , z , y / z );
        break;
        case '-':
        printf("%f - %f = %f",y , z , y - z );
        break;
    }
    
}
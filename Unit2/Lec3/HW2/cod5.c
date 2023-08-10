#include<stdio.h>
int main()
{ 
    char x;
    printf("Enter charater : ");
    scanf("%c",&x);
    if(x >= 97 & x <= 122)
    {
        printf("%c is an alphabet",x);
    }
    else if(x >= 65 & x <= 90)
    {
        printf("%c is an alphabet",x);
    }
    else {
        printf("%C is not an alphabet",x);
    }


}
#include <stdio.h>
int main()
{
    char x;
    printf("Enter an elphabet : ");
    scanf("%c",&x);
    if (x == 'a' | 'i' | 'u' | 'e' | 'o' )
    {
        printf("%c is a vowel",x);
    }
    else 
    {
        printf ("%c is a cosntant",x);
    }
}
#include<stdio.h>
#include<string.h>
int main()
{
    char x[30];
    char y;
    int z = 0;
    printf("Enter a string = ");
    scanf("%s",x);

    printf("Enter charcater to find frequncy = ");
    scanf(" %c",&y);
    for(int i = 0 ; i < 30 ; i++)
    {
        if (x[i] == y)
        {
            z++ ;
        }
    }
    printf("frequncy of %C = %d",y,z);

}
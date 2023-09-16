#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int i;
    printf("Enter your string = ");
    scanf(" %s",x);
    for(i = 0 ; x[i] != 0 ; i++){}
    
    printf("%d",i);

}
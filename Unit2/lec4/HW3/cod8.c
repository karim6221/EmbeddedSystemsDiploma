#include<stdio.h>
// code for reverse string
//array we store string in
char a[1000];
int main()
{ 
    printf("Enter to string = ");
    gets(a);//input string
    int i;
    //for loop to know the length of input string
    for (i = 0 ; a[i] !='\0' ; i++){}
    int j = 0;
    printf("Reverse string = ");
    //for loop to print the reverse of string
    for (j = i;j >= 0;j--)
    {
        printf("%c",a[j]);
    }

    
}
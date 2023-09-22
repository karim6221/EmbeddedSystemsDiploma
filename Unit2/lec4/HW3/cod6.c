#include<stdio.h>
#include<string.h>
//frequence of characters
int main()
{
    char x[100];//the array store string on it
    char y;//store char we search about it
    int z = 0;//store in it how many frequence of character
    
    printf("Enter a string = ");
    //input string in array x
    gets(x);

    printf("Enter charcater to find frequncy = ");
    //input character we need to find it's frequence
    scanf(" %c",&y);
    //for loop to search about frequence of character
    for(int i = 0 ; x[i] !='\0' ; i++)
    {
        if (x[i] == y)
        {
            z++ ;
        }
    }
    //output : number about frequence of character
    printf("frequncy of %C = %d",y,z);

}
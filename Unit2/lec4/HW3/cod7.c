#include<stdio.h>
#include<string.h>
//code to find lenght of string manually
int main()
{
    char x[100];
    int i;
    int y=0;
    printf("Enter your string = ");
    //input string 
    gets(x);
    //for loop to count number of character before null 
    for(i = 0 ; x[i] != '\0' ; i++){
        //if we don't want to count spaces with character(character only)
        /* if(x[i] == 32)
        {
            z++;
        }*/
    }

    //the output number of character and space
    printf("manually = %d\n",i);
    //lenght of string with function
    y= strlen(x);
    printf("using function = %d",y);

}
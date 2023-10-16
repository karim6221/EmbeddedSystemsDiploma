#include<stdio.h>
#include<string.h>

char y[100]; 
char x[100];
char rev (char q[],char w[],int len)
{
    /*int j = 0;
    for(int i= len-1; i >= 0; i--)
    {
        w[i] = q[j];
        j++;
    }*/
    printf("%c",q[len]);
    --len;
    if (len >= 0)
    {
        rev(q,w,len);
    }
}
int main()
{
    scanf("%s",x);
    int r = strlen(x);
    rev(x,y,r);
    //printf("\n\t%s\t",y);
}
#include<stdio.h>
int y =1;
//function get factorial of number by useing recursion
void fac (int x,int *p);
int main()
{
    int x;
    printf("enter an positive integer num = ");
    scanf("%d",&x);
    //postive input number
    if (x > 0)
    {
        fac(x,&y);
        printf("the factorial = %d",y);
    }
    //if input negative number
    else if(x < 0)
    {
        printf("negative num !!");
    }
}
void fac (int x,int *p)
{
    *p = *p * x;
    --x;
    if(x>0)
    {
        fac(x,&y);//recusion
    }
    
}
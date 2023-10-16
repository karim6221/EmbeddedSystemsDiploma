#include<stdio.h>
//function to  search about prime numbers between two numbers
int fun (int p1);
int main()
{
    int x,y,k =0;
    //num 1(x) --> num2(y)
    printf("enter two numbers = ");
    //input two numbers
    scanf("%d%d",&x,&y);
    //defintion array will store prime numbers
    int arr[y-x];
    
    for(int i =x; i <= y;i++)
    {
        fun(i);
        if(fun(i)>0)
        {
            arr[k] = fun(i);
            k++;
        }
    }
    arr[k] = '\0';
    for(int p =0;arr[p] != '\0';p++)
    {
        printf("%d\t",arr[p]);
    }
}
//function whose search
int fun (int p1)
{
    int flag =0;
    for(int j =2;j <= (p1/2);j++)
    {
        if(p1 % j == 0)
        {
            flag++; 
            break;         
        }
        if(flag == 0)
        {
            return(p1);
        }
    }
}
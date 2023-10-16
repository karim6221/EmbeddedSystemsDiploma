#include<stdio.h>
int fun (int g,int p);
int r = 1;
int main()
{
    int x;
    printf("Enter base num = ");
    scanf("%d",&x);
    int y;
    printf("enter power integer = ");
    scanf("%d",&y);
    int z;
    z = fun(x,y);
    printf("%d",z);    
}
int fun (int g,int p)
{
    /*
    for(int i = 0;i < p ;i++)
    {
        r *= g;
    }*/
    r *= g;
    p--;
    if (p > 0)
    {
        //r *= g;
        fun(g,p);
    }
    //printf("%d",r);
    if(p==0)
    {
        return r;
    }
}
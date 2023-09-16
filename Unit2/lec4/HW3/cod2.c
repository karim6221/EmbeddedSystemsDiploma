#include<stdio.h>
int main()
{
    int x;
    printf("Enter the numbers of data: ");
    scanf("%d",&x);
    float num[x],sum = 0;
    for(int i=0 ; i < x ; i++)
    {
        printf("enter number: ");
        scanf("%f",&num[i]);
        sum +=num[i];
    }
    printf("AVERAGE = %0.2f",sum/x);
}
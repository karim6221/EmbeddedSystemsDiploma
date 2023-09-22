#include<stdio.h>
//code to get average of data
int main()
{
    int x;
    printf("Enter the numbers of data: ");
    //input number of data (x)
    scanf("%d",&x);
    float num[x],sum = 0;
    //for loop to input the data
    for(int i=0 ; i < x ; i++)
    {
        printf("enter number: ");
        scanf("%f",&num[i]);
        //sum of the data in variable (sum)
        sum +=num[i];
    }
    //print the average
    printf("AVERAGE = %0.2f",sum/x);
}
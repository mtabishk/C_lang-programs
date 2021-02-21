#include<stdio.h>
int main()
{
    int n,a,i=1,sum;
    float ave;
    printf("Average of n numbers \nEnter the value of n");
    scanf("%d,&n");

    for(i=1; i<=n; i++)
    {
    printf("\nEnter the number");
    scanf("%d", &a);
    sum=sum+a;
    }
    ave=sum/n;
    printf("\nAverage of %d numbers is %f", n,ave);


}


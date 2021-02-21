/* Program to calculate average of n numbers using Arrays*/

#include<stdio.h>

#define n 10

void main()

{
	int a[n];
	int i;
	float ave,sum=0;


	printf("Enter 10 numbers");

	for(i=1;i<=n;i++)
	{
	scanf("%d", &a[i]);
	sum= sum+a[i];
	}

	ave= sum/n;
	printf("\n\nAverage of %d numbers is %f",n,ave);
    getch();

}

/*Program to find average of n numbers*/
#include<stdio.h>
void main()
{
	int n,i;
	float sum=0,ave;
	printf("Average of n numbers\nEnter the value of n\n");
	scanf("%d",&n);
	printf("Enter n numbers\n ");
	for(i=0;i<=n;i++)
		{
			scanf("%d",&i);
			sum=sum+i;
		}
		ave=sum/n;
		printf("Average of n numbers is %f",ave);
		getch();

	}
/* Program to calculate average of n numbers*/

#include<stdio.h>
void main()
{
	int i,n,a,sum=0;
	float ave;
	printf("\nAverage of n integers \n\n\nEnter value of n ");
	scanf("%d", &n);

	for(i=1;i<=n;i++)
	{
	    printf("\nEnter x%d= ",i);
		scanf(" %d",&a);
		sum=sum+a;
	}

	ave=sum/n;
	printf("\n\nAverage of %d integers is %f",n,ave);

}




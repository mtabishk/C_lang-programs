/* Program to calculate repeated average of numbers*/

#include<stdio.h>
void main()
{
        int i,n,a,lists,loop;
        float ave,sum;

	printf("How many lists? ");
	scanf("%d", &lists);

	for(loop=1; loop <= lists; loop++)
	{
	sum=0;
	printf("\n\nList number %d", loop);

        printf("\n\nAverage of n integers \nEnter value of n ");
        scanf("%d", &n);

        for(i=1;i<=n;i++)
        {
            printf("\nEnter x%d= ",i);
                scanf(" %d",&a);
                sum=sum+a;
        }

        ave=sum/n;
        printf("\nAverage of %d integers is %f",n,ave);
	}

}


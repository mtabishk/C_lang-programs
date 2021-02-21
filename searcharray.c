/*Program to search a number in an array*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,data;
	printf("\t\t<<Search a number in the array>>\nEnter the number of elements in the array");
	scanf("%d",&n);

	int a[n];
	
	printf("\nEnter the elements of array");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("\nEnter the element to be searched");
	scanf("%d",&data);

	printf("\n Display the array");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);

	for(i=0;i<n;i++)
	{
		if(a[i]==data)
			{
				printf("\nSearch sucessfull \n %d found at %d place",data,i+1);
			break;
			}
	}

	if(i==n)
		printf("\nSearch unsucessful");
	getch();
}

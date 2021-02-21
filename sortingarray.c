

/*Bubble Sort or Sorting Arrays in accending or decending order*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,swap;
	printf("\t\t<<Bubble Sort>>\nEnter the number of elements\n");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if( a[i] > a[j] ) 				//Assumption that a[0] is greatest and then comparing...
			{
				swap=a[i];
				a[i]=a[j];
				a[j]=swap;
			}
		}
	}

	printf("\nSorted array is");
	for(i=0;i<n;i++)
		{
			printf(" %d",a[i] );
		}

	getch();
}

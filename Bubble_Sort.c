/*Program to implement Bubble Sort Technique */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,t,n;
	printf("\t==========BUBBLE SORT=========\nEnter total elements of Array");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//Logic For Bubble Sort ==> In every iteration Highest element is bubbled to the last location
	for (i=0 ; i<n-1 ; i++) {
		for (j=0 ; j<n-1-i ; j++) {
			if ( a[j] > a[j+1] ) {
				//Swapping 
				t = a[j];			
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	printf("\nSorted Array is:\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
getch();
}
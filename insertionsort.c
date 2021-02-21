//Program to implement Insertion Sort Technique
#include<stdio.h>
int main()
{
	int i,j,t,n;
	printf("\nInsertion Sort\n===============\nEnter the number of elements");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	// Here nth element is compared with all of its preceeding elements. i=1; because we are first comparing 2nd element with 1st element
	for(i=1;i<n;i++){
		key=a[i]; 					
		j=i-1;						
		while( (j>=0)  && (a[j] > key) ){  	 	
			a[j+1] = a[j];
			j--;					
		}
		a[j+1]=key ;
	}

	printf("\nSorted Array is:\n");
	for(i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
	return 0;
}
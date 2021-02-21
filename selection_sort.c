// Selection sort
#include <stdio.h>
#define MAX 100
int main() 
{
	int arr[MAX], i,j,n,temp,min;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for (i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	// selection sort 
	for (i=0;i<n-1;i++) {
		// find the index of smallest element
		min = i;
		for (j=i+1;j<n;j++) {
			if ( arr[min] > arr[j] )
				min = j;
		}
		if (i!=min) {
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	printf("\nSorted Array is:\n");
	for (i=0;i<n;i++) {
		printf("  %d",arr[i]);
	}
	return 0;
}
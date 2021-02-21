// Program to implement binary search technique
// It works only on sorted arrays
#include <stdio.h>
int main()
{
	int i,first,last,middle,n,search;
	printf("\tBinary\tSearch\nEnter the total number of elements in array\n");
	scanf("%d",&n);
	int array[n];
	printf("\nEnter the elements\n");
	for(i=0;i<n;++i) {
		scanf("%d",&array[i]);
	}
	printf("\nEnter the element to be searched\n");
	scanf("%d",&search);
	// calulating first,last and middle positions
	first = 0;
	last = n-1;
	middle = (first + last) / 2;
	// binary search will search elements at middle, if element is not found in middle then it will split array into parts and if element to be searched is less than middle then it will search only in lower part and if greater then in upper part
	while (first <= last) {
		if (array[middle] == search) {
			printf("\n%d found at location %d",search,middle+1);
			break;
		}	
		else if (array[middle] < search)
			first = middle + 1;
		else 
			last = middle -1 ;
		
		middle = (first + last) / 2;
	}	
	if (first > last)
		printf("\nNot Found");
	
	return 0;
}
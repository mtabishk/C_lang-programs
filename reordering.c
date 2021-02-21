// Reordering a one dimensional array in accending order using pointer notation

#include <stdio.h>
#include <stdlib.h>

void reorder(int n,int *x);
int main() 
{
	int i,n;
	// int *x is equivalent to int x[] ==> 1D int Array
	int *x;
	printf("\tReordering a one dimensional array in accending order using pointer notation\nHow many numbers will be entered\n");
	scanf("%d",&n);
	// allocating memory using malloc
	x = (int *) malloc (n * sizeof(int));

	// reading numbers
	for (i=0;i<n;++i) 
		scanf("%d",(x+i));
	// calling function for reordering numbers
	reorder(n,x);
	// printing reordered list of numbers
	printf("\nReordered List is:\n");
	for (i=0;i<n;++i) {
		printf(" %d ", *(x+i) );
	}

	return 0;
}

void reorder(int n, int *x) {
	int i,j,temp;
	for(i=0;i<n;++i) {
		// find the smallest of the remaining elements.Logic= In first iteration, we are comparing first element with rest of array elements,if first element is larger than the next then swapping takes place otherwise not.Similarly in next iteration,second element is compared with the rest of elements and so on.... 
		for(j=i+1;j<n;++j){
			if( *(x+i) > *(x+j) ) {
				// interchange two elements
				temp = *(x + i);
				*(x + i) = *(x + j);
				*(x + j) = temp;
			}
 		}
	}
	return;
}
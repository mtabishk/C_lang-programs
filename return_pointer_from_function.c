// Return pointers from a function and allocating space on heap using malloc function 
#include <stdio.h>
#include <stdlib.h>
// Here actually pointer is returned from the function, therefore return type used is int*
int* increment(int n);

int main() 
{
	int *p;
	p = increment(1);
	printf("%d\n", *p);
	free(p);
	p=0;
	return 0;
}
int* increment(int n) {
	int *ptr;
	ptr = (int *) malloc( 1 * sizeof(int) );
	*ptr = n+1;
	return (ptr);
}
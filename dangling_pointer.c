// Dangling Pointer
#include <stdio.h>
// increment function whose return type is a pointer 
int* increment(int n);
// start of main body of our program
int main() 
{
	int *p;
	p= increment(1);
	printf("\n%d\n", *p);
	return 0;
	// end of main body of our program
}
// definition of increment function
int* increment(int n) {
	int temp;
	int *ptr;
	ptr = &temp;
	temp = n+1;
	return (ptr);
}
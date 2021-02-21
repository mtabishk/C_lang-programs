// Program in which a function returns a pointer 

#include <stdio.h>
// Function Prototype
int* fun(int f[]);

int main() 
{
	int i;
	int *pz;
	int z[10];
	printf("Before Calling in main function\n");
	for(i=0;i<10;i++) {
		z[i] = i+1;
		printf(" %d",z[i]);
	}
	// Function Calling and returning value of fun(z) to a pointer
	pz = fun(z);
	printf("\n\nAfter Calling in main function\n");
	for(i=0;i<10;i++) {
		printf(" %d",z[i]);
	}
	return 0;
}
// Function Definition
int* fun(int f[]) {
	int i;
	p;
	printf("\n\nInside fun Function after Calling\n");
	for(i=0;i<10;i++) {
		f[i] = i+11;
		printf(" %d",f[i]);
	}
	return (pf);
}

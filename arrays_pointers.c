// Passing Arrays to function also using the concept of pointers

#include <stdio.h>
// Function Prototype
void process(int *num);

int main() {
	int i;
	int num[10];
	printf("In the main function before calling\n");
	for(i=0;i<10;i++) {
		num[i] = i+1;
		printf(" %d",num[i]);
	}
	// Function Calling
	process(&num[5]);
	printf("\n\nAfter Calling in main function\n");
	for(i=0;i<10;i++) {
		printf(" %d",num[i]);
	}
	return 0;
}
// Function Definition
void process(int *num) {
	printf("\n\nAfter calling in process Function\n");
	int i;
	for(i=5;i<10;i++) {
		num[i] = i+11;
		printf(" %d",num[i]);
	}
	return;
}
// Program for function pointer ==> Here a pointer points to a function
#include <stdio.h>
// Function Prototype
int fun1(int x);

int main()
{
	// Function Pointer (*p): a pointer that points function fun1 whose return type is int and has one argument of int type.
	int (*p)(int x);
	// Address of function is simply fun1
	p=fun1;
	// Function Calling and printing its value
	printf("\n%d",p(5));

	return 0;
}
// Function Definition 
int fun1(int x) {
	printf("\n%d",x);
	return(x+1);
}


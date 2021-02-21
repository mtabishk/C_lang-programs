// Pointer to a function

#include <stdio.h>
// Here call function is given two arguments, first is a pointer to a function and second is integer
int call(int (*func)(int) , int arg);

int inc(int var);

int main()
{
	int c;
	// Here while calling we are passing address of inc() function to function pointer
	c=call(inc,8);
	printf(" %d ",c);
	return 0;
}

int call(int (*func)(int) , int arg) {
	return func(arg);
}

int inc(int var) {
	return ++var;
}
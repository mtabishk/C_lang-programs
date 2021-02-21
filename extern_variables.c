// Using the concept of extern variables
#include <stdio.h>
int main()
{	
	extern int a,b,c;
	int sum = a+b+c;
	printf("Sum = %d",sum);
	return 0; 
}
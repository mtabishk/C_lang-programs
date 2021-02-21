// Fibonacci 
#include <stdio.h>
int main() 
{
	int i,num,first=0,second=1,fib=0;
	printf("Enter the number upto which you want to calculate Fibonacci series\n");
	scanf("%d",&num);
	if (i == 1)
		printf("%d",first);
	else if(i == 2)
		printf("%d %d",first,second);
	else {
		for(i=1;i<=num;i++) {
			printf(" %d",fib);
			first = second;
			second = fib;
			fib = first + second;
			
		}
	}
	return 0;
}
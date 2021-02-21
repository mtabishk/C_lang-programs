/*Program to print fibonacci sequence using recursion*/
#include<stdio.h>
#include<conio.h>

int recfibonacci(int x,int y);

int main()
{
	int n,i;
	printf("\t\tFibonacci series of n terms\nEnter the value of n");
	scanf("%d",&n);
	printf("\nFibonacci series is:\n");
	// function calling
	recfibonacci(0,n);
	return 0;
}

int recfibonacci(int x,int y)
{
	int fib;
	if (x>y)
		return 0;
	//if (x==0 || x==1)
	//	return x;
	else {
		fib= recfibonacci(x-1,y)+recfibonacci(x-2,y) ;
		printf(" %d",fib);
		x++;
	}
	return 0;
}


/*Program to print fibonacci sequence using recursion*/
#include<stdio.h>
#include<conio.h>

int recfibonacci(int x);

void main()
{
	int n,i;
	printf("\t\tFibonacci series of n terms\nEnter the value of n");
	scanf("%d",&n);

	printf("\nFibonacci series is \n");

	for(i=0;i<=n;i++)
		printf("%d\n",recfibonacci(i) );
	
getch();
}

int recfibonacci(int x)
{
	int fib;
	if(x==0)
		return (0);
	else if(x==1)
		return (1);
		else
		{
			fib= recfibonacci(x-1)+recfibonacci(x-2) ;
			return (fib);
		}
	
}


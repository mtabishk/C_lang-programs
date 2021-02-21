/*Progarm to print factorial of a number using recursion*/
#include<stdio.h>
#include<conio.h>

int recfac(int x);

int main()
{
	int fac,n;
	printf("\t\tFactorial of number n\nEnter the value of n");
	scanf("%d",&n);

	fac=recfac(n);

	printf("The factorial of %d is %d",n,fac);

	getch();

}

int recfac(int x)
{
	int f;
	if(x==0)
		return (1);
	else
		{
			f= x * recfac(x-1);
			return (f);
		}
}
/*Program to print Factorial using loops*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,fac=1;
	printf("\t\t<<Factorial of number n\nEnter the value of n");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		fac=fac*i;
	}
	printf("\nFactorial of %d is %d",n,fac);
getch();
}
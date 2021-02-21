/*Program to print the sum of digits of a number*/
#include<stdio.h>
#include<conio.h>

void main()
{
	long int digit,n,num,sum=0;
	printf("\t\tProgram to print sum of digits of a number\nEnter the digit");
	scanf("%ld",&digit);
	n=digit;


	for(int i=1;digit > 0;i++)
	{
		num=digit%10;
		digit=digit/10;
		sum+=num;
	}
	
	/*
	do
	{
		num=digit%10;
		digit=digit/10;
		sum+=num;
	}
	while(digit>0);
	*/
	printf("\nSum of digits of number %ld is \t%ld ",n,sum);

getch();
}
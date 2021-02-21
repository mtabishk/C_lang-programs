/* Program to check if a number is armstrong */
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,num,number,digit,mul=0;
	printf("\t\t<<Program to check Armstrong number>>\nEnter Number");
	scanf("%d",&num);
	
	number=num;

	/*
	while(num>0)		// Here while loop can't be used because when one iteration is completed then command comes out of loop 
						condition is checked but value of num is also changed => value of number also changes respectively. 
						Hence at last when condition is checked then always number=num;
	{
		digit=num % 10; 				
		num=num/10;						

		mul=mul+digit*digit*digit;
		
	}
	*/

	do
	{
		digit=num % 10; 				//gives us last digit of number
		num=num/10;						//decrease one digit in number from right

		mul=mul+digit*digit*digit;	
	}
	while(num>0);
	
	if(number==mul)
		printf("\nThe number %d is Armstrong Number",number);
	else
		printf("\nThe number %d is not a Armstrong Number",number);
	
	getch();
}
	
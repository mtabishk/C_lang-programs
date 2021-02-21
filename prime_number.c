// Program to check if a number is a prime number or not

#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	int num,i=2,t;
	printf("\tChecking if a number is a prime number or not\n\nEnter your number\n");
	scanf("%d",&num);
	t=sqrt(num);
	// looping condition
	while (i<=t) {
		if (num%i == 0)
			break;
		i++;
	}
	if(i>t)
		printf("\nNumber %d is a prime number",num);
	else
		printf("Number %d is not a prime number",num);
	getch();

}
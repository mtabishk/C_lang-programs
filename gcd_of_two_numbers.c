// GCD or HCF of two numbers

#include <stdio.h>
int main()
{
	int num1,num2,i,gcd;
	printf("\tGCD or HCF of two numbers\n\nEnter two numbers\n");
	scanf("%d%d",&num1,&num2);
	// looping condition for finding GCD
	for (i=1; i<=num1 && i<=num2 ; i++) {
		if (num1%i==0 && num2%i==0 )
			gcd = i;
	}
	printf("GCD or HCF of %d and %d id \t %d",num1,num2,gcd);
	return 0;	
}
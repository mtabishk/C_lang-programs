// LCM of two numbers

#include <stdio.h>

int main()
{
	int num1,num2,min_mul;
	printf("\tLCM of two numbers\n\nEnter two numbers\n");
	scanf("%d%d",&num1,&num2);
	min_mul = (num1>num2) ? num1 : num2 ;
	// Looping condition for finding LCM
	while(1) {
		if ( (min_mul % num1==0) && (min_mul % num2==0) ) {
			printf("LCM of %d and %d =\t%d",num1,num2,min_mul);
			break;
		}
		min_mul++;
	} 
	return 0;
}
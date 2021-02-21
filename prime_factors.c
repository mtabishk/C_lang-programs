// Program to find the prime factors of a number
#include <stdio.h>
void factors(int number);
void check_prime(int number);

int main()
{
	int number;
	printf("\t\tPrime Factors of a number\n\nEnter the number\n");
	scanf("%d",&number);
	printf("\nPrime Factors are\n");
	factors(number);
	return 0;
}

void factors(int number) {
	for (int i=1;i<=number;i++) {
		if (number%i==0)
			check_prime(i);
	}
	return;
}
void check_prime(int number) {
	for(int i=2;i<number;i++) {
		if(number%i==0) 
			return;
	}
	printf("\n%d",number);
	return;
}
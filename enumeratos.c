// Program to use enumerators
#include <stdio.h>
enum boolean 
{
	// here first element is stored as 0 and second element as 1 . Remember there is no semicolon inside the braces and member elements are separated with semicolon
	false,true
};

enum boolean isPrime(int num);
int main() 
{
	int num;
	enum boolean result;
	printf("\tNumber is prime or not\n\nEnter the number\n");
	scanf("%d",&num);
	result = isPrime(num);
	if (result == true)
		printf("\nNumber %d is a prime number",num);
	else 
		printf("\nNumber %d is not a prime number",num);
	return 0;
}
enum boolean isPrime(int num) {
	if (num%2 == 0)
		return (true);
	else 
		return (false);
}
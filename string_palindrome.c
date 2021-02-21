// program to check if a string is a palindrome 
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char string_a[20];
	char string_b[20];
	printf("Enter the string to check if the string is a palindrome\n");
	gets(string_a);
	strcpy(string_b,string_a);
	strrev(string_a);
	if ( strcmpi(string_a,string_b) ==0)
		goto flag;
		//printf("\nThe string %s is a palindrome ");
	else
		printf("\nThe string %s is not a palindrome");
	flag: printf("I am inside flag");
	return 0;
}
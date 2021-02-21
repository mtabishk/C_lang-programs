/* Conversion of Lowercase Single Character to Uppercase */
/* Using Single character input and output functions i.e., toupper and tolower functions */

#include<stdio.h>
#include<ctype.h> 

int main()
{
	/* Variable Declaration */
	char c;

	/* Single character input and output functions */
	c = getchar();

	printf("Enter any character value \n");
	printf("The Equivalent uppercase character is: ");

	putchar(toupper (c));
}

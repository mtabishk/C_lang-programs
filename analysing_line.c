// Analysing a line of text => Count the number of vovels,consonents, digits, whitespace characters and "other" characters in a line of text

#include <stdio.h>
// for including the function toupper();
#include <ctype.h>

// Function Prototype
void scan_line(char line[],int *pvovels,int *pconsonents,int *pdigits,int *pwhitespace,int *pother);
// Main body
int main()
{
	char line[200];
	int vovels=0;
	int consonents=0;
	int digits=0;
	int whitespace=0;
	int other=0;

	printf("Enter a line of text below:\n");
	scanf(" %[^\n]",line);

	// Function Calling and passing address of variables to function whose arguments contain their respective pointer variables 
	scan_line(line,&vovels,&consonents,&digits,&whitespace,&other);

	printf("\nNo. of vovels: %d",vovels);
	printf("\nNo. of consonents: %d",consonents);
	printf("\nNo. of digits: %d",digits);
	printf("\nNo. of whitespace characters: %d",whitespace);
	printf("\nNo. of other characters: %d",other);

	return 0;
}

void scan_line(char line[],int *pvovels,int *pconsonents,int *pdigits,int *pwhitespace,int *pother) {
	// Analysing the characters in a line of text 
	int i=0;
	char c;
	while ( (c = toupper(line[i]) ) != '\0') {
		if ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
			++ *pvovels;
		else if ( c >= 'A' && c <= 'Z')
			++ *pconsonents;
		else if ( c >= '0' && c <= '9')
			++ *pdigits;
		else if ( c == ' ' || c == '\t' )
			++ *pwhitespace;
		else
			++ *pother;
		++i;
	}
	printf("\nvovels= %d",*pvovels);
	printf("\nwhitespace= %d",*pwhitespace);
	return;
}


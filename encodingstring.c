/* Encoding a string in such a way that each letter is replaced by its preceeding letter*/

#include<stdio.h>

#define EOL '\0'

void main()
{
	char line[80];
	int i;

	printf("Enter a line of text below: \n");
	scanf(" %[^\n]", line);

	for(i=0; line[i] != EOL; ++i)
	{
	if( ((line[i] >= '0') && (line[i] < '9'))  ||  ((line[i] >= 'A') && (line[i] < 'Z'))  ||  ((line[i] >= 'a') && (line[i] < 'z')) )
		putchar(line[i] +1);     // check for line[i+1]

	else if (line[i] =='9') putchar('0');
	else if (line[i] =='Z') putchar('A');
	else if (line[i] =='z') putchar('a');
		else putchar('.');
	}

}


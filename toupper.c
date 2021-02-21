/*Program to get a string from user in lowercase and convert it to uppercase using while loop also */

#include<stdio.h>
#include<ctype.h>

#define EOL '\n'               // EOL = End of Line

void main()
{
	char letter[80];
	int i=0, t;

	while( (letter[i] = getchar()) != EOL ) 
	i++;
    	

	t=i;
	i=0;
	
	while(i<t)
	{
		putchar( toupper(letter[i]) ) ;
		i++;
	}

}



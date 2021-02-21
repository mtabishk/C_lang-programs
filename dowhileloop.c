/* Use of do-while loop*/

#include<stdio.h>
void main()
{
	int digit=0;
	
	do
		printf("%d\n",digit++);      // Don't write ++digit
	while(digit<=9);
}

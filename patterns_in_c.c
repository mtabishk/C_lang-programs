/* Pattern Printing A
 				   ABC
 				  ABCDE    
 		called PASCAL'S Triangle 
#include <stdio.h>
int main()
{
	int i,j,row,space;
	char ch;
	printf("\tPrinting a pattern\n\nEnter the number of rows\n");
	scanf("%d",&row);
	// looping condition
	for (i=1;i<=row;i++) {
		// loop for spaces
		for (space=1 ; space < row-i ; ++space) {
			printf(" ");
		}
		// loop for priting characters
		ch = 'A';
		for (j=1 ; j<= (2*i)-1 ; j++) {
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
*/


/* Program for * pyramids declining 
         also called FLOYD's Triangle*/



#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	printf("\nEnter the number of rows");
	scanf("%d",&n);
	printf("\nThe pattern is:\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" * ");
		}
		printf("\n");	
	}
	getch();
}



/* Program for * pyramids inclining */
/*
#include <stdio.h>
int main()
{
	int row,i,j;
	printf("\nEnter the number of rows");
	scanf("%d",&row);
	printf("\nThe pattern is:\n");
	for(i=0;i<row;i++){
		for(j=row-i;j>1;j--){
			printf(" * ");
		}
		printf("\n");	
	}

}
*/
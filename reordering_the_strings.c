// Reordering a list of strings in alphabetical order using array of pointers 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reorder(int n, char *x[]);
int main()
{
	int i,n=0;
	char *x[10];
	printf("Enter each string on a separate line below\n\n");
	printf("Enter END when finished\n\n");
	// read in the list of strings
	do
	{
		// allocate memory 
		x[n] = (char*) malloc (12 * sizeof(char));

		printf("String %d : ",n+1);
		scanf(" %[^\n]", x[n]);
	}while (strcmpi(x[n++],"END"));
	
	// reorder the list of strings 
	reorder(--n,x);

	// display the reordered list of strings
	printf("\n\nReordered list of strings : \n");
	for (i=0;i<n;i++) {
		printf("\nstring %d: %s",i+1,x[i]);
	}

	return 0;
}
void reorder(int n, char *x[]) {
	char *temp;
	int i,item;

	for(item=0;item<n-1;++item) {
		// find the lowest of the remaining strings
		for (i=item+1;i<n;++i) {
			if (strcmpi(x[item], x[i]) > 0) {
				// interchange the two strings
				temp = x[item];
				x[item] = x[i];
				x[i] = temp;
			}
		}
	}
	return;
}
/*Write a program using structures that describes the set of books in a library. For each book the members are names of author, publisher, rate and branch information.
 i.  Print a list of books supplied by a publisher 
 ii. Print a list of books in a particular branch
 */
#include <stdio.h>
#include <string.h>

// data structure of library for storing details of each book 
struct library
{
	char title[50];
	char author[20];
	char publisher[20]; 
	float rate;
	char branch[10];
};

#define MAX 10

int main() 
{
	int i=0,j=0;
	char string_p[20],string_b[10];
	// defining the contents of each book present in structure library 
	struct library books[MAX] = {
							{"C Language","Ritche","PHI",45.55,"CSE"},
							{"Programming in C","Kochan","PHI",350.50,"CSE"},
							{"Engg Physics 1", "K.K Sharma", "Kirti",280.50,"CSE"},
							{"Engg Physics 2", "K.K Sharma", "Kirti",280.50,"CSE"},
							{"Building Material","B N Gupta","SKK",400.00,"CIVIL"},
							{"Mechanics","Haliday","Mc Graw",899.99,"CIVIL"}
							};
	// printing the list of books using name of publisher
	printf("Enter the name of publisher to print the list of books\n");
	gets(string_p);
	while (i<MAX) {
		if (strcmpi(string_p,books[i].publisher) == 0) 
			printf("\n %s",books[i].title);
		i++;
	}	
	// printing the list of books using branch name
	printf("\nEnter the name of branch to print the list of books\n");
	gets(string_b);
	while (j<MAX) {
		if (strcmpi(string_b,books[j].branch) == 0) 
			printf("\n %s",books[j].title);
		j++;
	}
	return 0;
}
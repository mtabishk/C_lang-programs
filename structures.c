// Program to enter values into the structure

#include <stdio.h>
#include <string.h>

// Data structure for students
struct file
{
	char name[10][50];
	char parentage[10][50];
	char address[10][100];
	int contact_no[10][10];
}biodata;

int main()
{
	int i,n,c;
	char name[50];
	printf("\tStoring biodata in structures\nEnter number of clients\n");
	scanf("%d",&n);

	// Function that makes input buffer clear so that scanf function can take input 
	fflush(stdin);

	// for loop for taking biodata of n clients
	for(i=1;i<=n;i++){
	// Taking input from user and storing them in structures
	printf("\nClient %d \n============\n",i);
	printf("Enter name: \n");
	gets(biodata.name[i] );
	printf("Enter parentage: \n");
	gets( biodata.parentage[i] );
	printf("Enter Address: \n");
	gets( biodata.address[i] );
	printf("Enter Contact Number: \n");
	scanf("%d", biodata.contact_no[i] );
	fflush(stdin);
	}
	
	// Printing the biodata of desired client
	printf("\nEnter the client name to print its biodata\n");
	gets(name);
	
	for(i=0;i<10;i++){
		if( (strcmpi(biodata.name[i],name)) != 0)
			continue;
		
		else if ( (strcmpi(biodata.name[i],name) ) == 0 ){
			// Printing information of desired client
			printf("\nBiodata of client %d \n=======================\n",i+1);
			printf("\nName: %s",biodata.name[i]);
			printf("\nParentage: %s",biodata.parentage[i]);
			printf("\nAddress: %s",biodata.address[i]);
			printf("\nContact Number: %s",biodata.contact_no[i]);
			break;
		}
		else
			printf("\nClient not in scope");
	}
	
	return 0;
}
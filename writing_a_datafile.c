// Writing a data file 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
	char name[50];
	char parentage[50];
	char blood_group[2];
}dataitems[20];

int main() {
	int i=0;
	char end[3];
	FILE *fp;
	fp=fopen("data.txt","w");
	
	if(fp==NULL) {
		printf("FILE not found");
		exit(1);
	}

	printf("Storing data items in a file\n");
	// Reading data items	
	while (1)
	{
		printf("Client %d\n============\n",i+1);
		printf("Enter Name or Enter <end> to exit:\n");
		scanf(" %[^\n]",dataitems[i].name);
		if(strcmpi(dataitems[i].name, "end") == 0)
			exit(1);
		fprintf(fp,"%s",dataitems[i].name);
		printf("Enter parentage:\n");
		scanf(" %[^\n]",dataitems[i].parentage);
		fprintf(fp, "\t%s",dataitems[i].parentage);
		printf("Enter Blood Group:\n");
		scanf(" %[^\n]",dataitems[i].blood_group);
		fprintf(fp, "\t%s",dataitems[i].blood_group);
		i++;
		fprintf(fp, "\n");
	}
	
	fclose(fp);

	return 0;

}
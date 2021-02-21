//CSV File Program

#include<stdio.h>
int main() {
	char filepath[200]="report.csv";
	FILE *fptr = fopen(filepath, "r");
	char token;
	do
	{
		token = fgetc(fptr);
		if(token == ',')
			printf("\t");
		else if(token == '\n')
			printf("\n============\n");
		else
			printf("%c",token);
	}
	while(token != EOF);
	return 0;
}


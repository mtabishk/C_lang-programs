//Program of union

#include<stdio.h>
#include<string.h>

union student {
	char name[20];
	char subject[20];
	float percentage;     
};
struct teacher {
	char name[20];
	char subject[20];
	float percentage;
};
int main() {
	union student record;
	struct teacher data;

	printf("Structure\n==================\n");
	strcpy(data.name,"Raju");
	strcpy(data.subject,"Maths");
	data.percentage = 86.50;
	printf("Name: %s \n",data.name);
	printf("Subject: %s \n",data.subject);
	printf("Percentage: %f \n",data.percentage);
	
	//float datatype has max memory size 4 bytes. Hence only value of float variable is printed.
	printf("\n\nUnion\n===================\n");
	strcpy(record.name,"Raju");
	strcpy(record.subject,"Maths");
	record.percentage = 86.50;
	printf("Name: %s \n",record.name);
	printf("Subject: %s \n",record.subject);
	printf("Percentage: %f \n",record.percentage);
	
	return 0;
}

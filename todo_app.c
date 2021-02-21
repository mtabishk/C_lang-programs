// TO DO Application

#include <stdio.h>
#include <string.h>

// Data structure for TO DO application
struct ToDo
{
	char title[10][20];
	char description[10][100];
	char start_date[10][20];
	char end_date[10][20];
	char location[10][30];
}var_todo;

int main() 
{
	// Variable declarations
	int i,events;
	printf("\tTO DO Application\n\n");
	printf("Enter number of events you wish to add\n");
	scanf("%d",&events);
	
	// Taking all the event details from the user
	for(i=0;i<events;i++){
		printf("\nEvent %d\n================\n",i+1);
		printf("Enter the Title of event\n");
		scanf(" %[^\n]",var_todo.title[i]);
		printf("Enter the description of event\n");
		scanf(" %[^\n]",var_todo.description[i]);
		printf("Enter start date __/__/____\n");
		scanf(" %[^\n]",var_todo.start_date[i]);
		printf("Enter end date __/__/____\n");
		scanf(" %[^\n]",var_todo.end_date[i]);
		printf("Enter location of event\n");
		scanf(" %[^\n]",var_todo.location[i]);
	}
	// Searching for the event, the user wants to check
	char search[20];
	printf("\n\nEnter the event title you wish to check\n");
	scanf(" %[^\n]",search);
	
	for(i=0;i<10;i++){
		if( (strcmpi(var_todo.title[i],search)) != 0)
			continue;
		else if ( (strcmpi(var_todo.title[i],search) ) == 0 ){
			// Printing information of desired event
			printf("\n\nTitle: %s",var_todo.title[i]);
			printf("\nDescription: %s",var_todo.description[i]);
			printf("\nStart Date: %s",var_todo.start_date[i]);
			printf("\nEnd Date: %s",var_todo.end_date[i]);
			printf("\nLocation: %s",var_todo.location[i]);
			break;
		}

	}
	if(i==10 && (strcmpi(var_todo.title[i],search)) != 0 )
		printf("\n\t Sorry this EVENT ain't found.....<<try again>>");
	return(0);

}

// Program of reading data from a csv file, storing them into a structure array and use that data in this program 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Data structure for contents
struct contents{
	char name[50];
	char roll_no[20];
	int physics_marks;
	int math_marks;
	int c_progg_marks;
	int e_d_marks;
	int mpd_marks;
	char temp[3];
	int sum;
	float percentage;
}details[5];

int main() {

	// Variable declarations 
	char ch;
	int row=1,col=1,i=0,j=0;

	FILE *fp;
	fp = fopen("report_card2.csv", "r");

	if (fp==NULL){
		printf("File not found");
		exit(1);
	}

	// Do while looping condition
	do
	{
		// scanning character by character
		ch = fgetc(fp);
		if(ch==','){
			
		//Converting temp string to its actual data item 
			if(col==3){
				details[j].physics_marks = atoi(details[j].temp);
			}else if(col==4){
				details[j].math_marks = atoi(details[j].temp);
			}else if(col==5){
				details[j].c_progg_marks = atoi(details[j].temp);
			}else if(col==6){
				details[j].e_d_marks = atoi(details[j].temp);
			} 
			col++;
			i=0;

		} else if (ch=='\n') {
			details[j].mpd_marks = atoi(details[j].temp);
			row++;
			col=1;
			i=0;
			j++;
		} else {
			if(col==1){
				details[j].name[i] = ch;
			} else if(col==2){
				details[j].roll_no[i] = ch;
			} else if(col==3){
				details[j].temp[i]=  ch;
			} else if(col==4){
				details[j].temp[i] =  ch;
			} else if(col==5){
				details[j].temp[i]=  ch;
			} else if(col==6){
				details[j].temp[i] =  ch;
			} else if(col==7){
				details[j].temp[i]=  ch;
			}
			i++;
		}
	} while(ch != EOF);

	fclose(fp);

	// Calculating percentage of each student
	for(j=0;j<3;j++){
		details[j].sum=0;
		details[j].sum= details[j].physics_marks + details[j].math_marks +  details[j].c_progg_marks + details[j].e_d_marks + details[j].mpd_marks;
		
		details[j].percentage = ( (float)((details[j].sum)/500.00) * 100 ) ;
	}

	//Printing the data stored in CSV File and printing their percentage
	printf("NAME\tROLL NO.  PHY MARKS  MATH  C PROGG.  E.D MARKS  MPD MARKS  PERCENTAGE %\n");
	for(row=0;row<3;row++){
		printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t\t%.2f",details[row].name,details[row].roll_no,details[row].physics_marks,details[row].math_marks,details[row].c_progg_marks,details[row].e_d_marks,details[row].mpd_marks,details[row].percentage);
		printf("\n");
	}

	return 0;
}
#include<stdio.h>
void main()
{
	int tc,tcs,cm,option,rc,ac;      //tc=total classes, tcs=total classes attended by student, cm= classes missed, rc= remidial classes, ac= attendence charges  
	int ap,tccc ;              //ap=attendence percentage
	printf("\nOfficial: Enter the total number of classes held");
	scanf("%d", &tc);

		printf("\n\n\nEnter the total classes attended by student? ");
		scanf("%d", &tcs);
		cm=tc-tcs;
		printf("\n\nClasses missed by student= %d", cm);
	/*	ap= (tcs/tc) * 100 ;
		printf("\n\nAttendence percentage of student= %f",&ap);
	*/

		if(ap>=75)
			printf("\n\n\nStudent Eligible for exams");
		else
			printf("\n\n\n Student NOT Eligible for exams");
	
		

		printf("\n\n Do you want 1.Remidial Classes     2.Attendence Charges    3.Nothing");
		scanf("%d", &option);
		
		switch(option)
		{
			case 1: 

			tccc= 75 * tc / 100 ; //tccc= total classes that a student must attend to achive 75% attendence
			rc= tccc - tcs ;
			printf("\nTotal Remidial classes that student needs= %d", rc);
			break;
		case 2:
			
			tccc= 75 * tc / 100 ; //tccc= total classes that a student must attend to achive 75% attendence
			rc= tccc - tcs ;
			ac = rc *  50;
			printf("\nAttendence charges= %d", ac);
			break;

		case 3: 
			printf("\n\nYou are in shortage \n     <<<GET LOST>>>");
			break;

		default:
			printf("\nINVALID OPTION");
			break;
		}

		
}




	






/* Average of three Scores with the name of student */

#include<stdio.h>
int main(){

	char name[80];
	float score1, score2, score3, average;

	printf(" Please enter your Name: \n");
	scanf("%[^\n]", name);

	printf(" Please enter the first score: \n");
	scanf("%f", score1);

	printf(" Please enter the second score \n");
	scanf("%f", score2);

	printf(" Please enter the third score: \n");
	scanf("%f", score3);

	average= (score1 + score2 + score3)/3 ;

	printf("\n\n Name: %s \n", name);
	printf("Score1: %5.2f \n", score1);
	printf("Score2: %5.2f \n", score2);
	printf("Score3: %5.2f \n", score3);
	printf("Average: %5.2f \n", average);


	
}

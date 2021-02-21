//Program to print ***** sequence

//Library File Access
#include<stdio.h>
//Function Heading
int main(){
	//Variable Declaration
	int i,j,n;
	//Output Statement
	printf("\nPrinting Sequence **** \nEnter the number of rows\n");
	//Input Statement
	scanf("%d",&n);
	//Nested Looping Condition
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			printf("*");
		}
		//newline character in order to change line
		printf("\n");
	}
}

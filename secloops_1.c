
//Program to print sequence 1,4,9,16......n*n

//Library File Access
#include<stdio.h>
//Function Heading
int main() {
	//Variable Declaration
	int i,n;
	//Output Statement
	printf("\nSequence Printing\n Enter the value of n");
	//Input Statement
	scanf("%d",&n);
	//Looping Condition 
	for(i=1;i<=n;i++){
		//if-else condition
		if(i==n)
			printf(" %d",i*i);
		else
			printf(" %d,",i*i);
	}
}

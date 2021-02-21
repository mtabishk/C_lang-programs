//Program to print sequence 1,4,9,16,.....n*n using recursion

//Library File Accesss
#include<stdio.h>
//User Defined Function Prototype
void recsec(int x, int y);
//Function Heading
int main(){
	//Variable Declaration
	int n;
	//Output Statement
	printf("\nSequence Printing\n");
	//Input Statement
	scanf("%d",&n);
	//User defined function calling
	recsec(1,n);
}
//User Defined Function Definition
void recsec(int x,int y){
	//if -else condition
	if(x>y)
		//closure condition
		return;
	else if(x==y)
		printf(" %d",x*x);
	else{
		//self repeating logic
		printf(" %d,",x*x);
		//Increment Operator
		x++;
		//Function Calling 
		recsec(x,y);
	}
}


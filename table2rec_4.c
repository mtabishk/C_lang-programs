//Program to print Table of 2 using Recursion
//Library File Access
#include<stdio.h>
//User Defined Function Prototype
void rectable2(int x,int y);
//Function Heading
int main(){
	//Variable Declaration
	int n;
	//Output Statement
	printf("\nTable of 2 upto 2 * n \nEnter the value of n");
	//Input Statement
	scanf("%d",&n);
	//User Defined Function Calling
	rectable2(1,n);
}
//User Defined Function Definition
void rectable2(int x,int y){
	if(x>y)
		return;
	else{
		printf("\n2 * %d = %d",x,2*x);
		x++;
		rectable2(x,y);
	}
	return;
}

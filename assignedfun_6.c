//Program to use exp(a) function --Assigned by Sir

//Library File Access
#include<stdio.h>
#include<math.h>
//Function Heading
int main(){
	//Variable Declaration
	int a;
	float c;
	printf("\nEnter the number to calculate the exponential of it");
	scanf("%d",&a);
	c=exp(a);
	printf("\nexp(%d) = \t%f",a,c);
}

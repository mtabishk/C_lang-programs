//Program to generate the table of values for equation y=2(e^-0.1t)sin0.5t

//Library File Access
#include<stdio.h>
#include<math.h>
//Function Heading
int main() {
	int inc,t=0;
	float y,z;
	printf("To print the table of values for equation y=2(e^-0.1t)sin0.5t\nEnter the value of increment operator ");
	scanf("%d",&inc);
	//Looping condition
	for (t=0;t<=60;t+=inc) {
		y=2.0 * exp(-0.1 * t) * sin(0.5 * t);
		printf("\nt=%d\ty=%f",t,y);	
	}
	/*do{
		y=2.0 * exp(-0.1 * t) * sin(0.5 * t);
		printf("\nt=%d\ty=%f",t,y);
		t=t+inc;
	}
	while(t<=60);
	*/
	return 0;
}

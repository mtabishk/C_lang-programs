/*Program to print Fibonacci Series */
#include<stdio.h>
int rf(int a, int b, int max);
int c;
int main(){
	/*int n;
	printf("Enter the number upto which you want to calculate the fibonacci series \n");
	scanf("%d", &n); */

	rf(0,1,100);
	return (0);
}

int rf(int a, int b, int max)
{
	if(a==0 && b==1)
	
	c = a + b;
	
	if(c<=max)
	printf("%d \n", c);

	a = b;
	b = c;
	
	rf(a,b,max);
}



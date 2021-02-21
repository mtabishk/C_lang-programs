/*Program to print fibonacci series of n terms using loops*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,first=0,second=1,fib;
	printf("\nEnter the value of n to calculate fibonacci series");
	scanf("%d",&n);
	if(n==0)
		printf("\nInvalid number of terms");
	else if(n==1)
		printf("%d",first);
	else if(n==2)
		printf("%d %d",first,second);
	else if(n>=3)
		printf(" %d %d ",first,second);
	for(int i=3;i<=n;i++){
		fib=first+second;
		first=second;
		second=fib;
		printf(" %d ",fib);
	}
getch();
}

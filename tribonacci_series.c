/*Program for Tribonacci series==Series that is formed by adding the previous three numbers(0 1 2 are first three digits)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,first=0,second=1,third=2,fib;
	printf("\nEnter the value of n to calculate Tribonacci series");
	scanf("%d",&n);
	if(n==0)
		printf("\nInvalid number of terms");
	else if(n==1)
		printf("%d",first);
	else if(n==2)
		printf("%d %d",first,second);
	else if(n==3)
		printf("%d %d %d ",first,second,third);
	else if(n>=3)
		printf(" %d %d %d ",first,second,third);
	for(int i=4;i<=n;i++){
		fib=first+second+third;
		first=second;
		second=third;
		third=fib;
		printf(" %d ",fib);
	}
getch();
}

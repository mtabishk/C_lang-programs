/*Program to print prime numbers till n*/
#include<stdio.h>
#include<conio.h>

int checkprime(int x);

void main()
{
	int i,j,n,prime;
	printf("\t\tPrime number till n\n\nEnter the value of n\n");
	scanf("%d",&n);

	if(n>1) {	
		for(i=1;i<=n;i++) {
			prime=checkprime(i);
			if(prime!=0)
				printf("\n%d",prime);
		}
	}
	else
		printf("Value of n is not correct");
getch();
}

int checkprime(int x)
{
	int i;
	if (x==1)
		return x;
	for(i=2;i<x;i++) {
     	if(x%i==0)
	    return(0);
    }
    return x;
}











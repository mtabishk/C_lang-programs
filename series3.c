//Printing sum of series 1 - 3/2 + 5/6 - 7/24 + ........- n/n!

#include<stdio.h>

int factorial(int x);

int main() {
	int i,j,n;
	float sum=0;
	printf("\tPrinting sum of series 1 - 3/2 + 5/6 - 7/24 + ........- n/n!\nEnter the value of n");
	scanf("%d",&n);
	for(i=1,j=1;i<=n,j<=n;i+=2,j++){
		if(j%2 == 0)
			sum-= (float)i / factorial(j);
		else
			sum+= (float)i / factorial(j);
	}
	printf("Sum of series =\t%f",sum);
}
int factorial(int x) {
	int f;
	if(x==0)
		return (1);
	else{
		f= x * factorial(x-1);
		return (f);
	}

}
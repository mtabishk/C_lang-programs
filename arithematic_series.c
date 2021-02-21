// Program to print arithmatic sequence 

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,a,d,n,term;
	printf("\tPrinting Arithmatic Series upto n terms\n\nEnter the value of first term a\n");
	scanf("%d",&a);
	printf("Enter the value of common difference d\n");
	scanf("%d",&d);
	printf("Enter the value of no. of terms n\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		term = a + ((i-1) * d);
		printf(" %d",term);
	}
	return 0;
}
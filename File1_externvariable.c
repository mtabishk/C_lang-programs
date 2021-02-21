//File 1 for external variable 
extern int a,b,c;

#include<stdio.h>
int main() {
	int sum=a+b+c;
	printf("\nIn File 1\n=====================\na=%d\tb=%d\tc=%d\tsum=%d",a,b,c,sum);
	return 0;
}
//Program 1 to calculate fibonacci sequence using static and extern 

#include<stdio.h>

//Global or external declaration of function
extern int fibonacci(int i);

int main() {
	int i,n;
	printf("\nEnter the number upto which you want to calculate fibonacci series\n");
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		printf(" %d",fibonacci(i));
	}
	return 0;
}
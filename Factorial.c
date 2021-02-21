#include<stdio.h>
int fac(int n);
int main(){
	int i,n,factorial,f=1;
	printf("Enter the number for factorial calculation \n");
	scanf("%d", &n);

	for(i=n;i>=1;i--)
	{
	f=f*i;
	}
	
	printf("Factorial of %d is %d \n", n, f);
        
	factorial=fac(n);
	
	printf("Factorial of %d is %d \n", n, factorial);

}
 	int fac(int n)
	{
	if(n<=1)
	return (1);
	else
	return (n * fac(n-1));
}


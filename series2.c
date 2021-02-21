//Printing sum of series 1 + 3^2 + 5^2 +..............................

#include<stdio.h>
#include<math.h>
int main() {
	int i,n,sum=0;
	printf("\tPrinting series 1 + 3^2 + 5^2 +.....n^2 \nEnter the value of n  ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%2!=0)
			sum+=i*i;
	}
	printf("Sum=\t%d",sum);

	return 0;
} 
//Sum of series x - x^3/3! + x^5/5! - x^7/7! + ...............n termd

#include<stdio.h>
#include<math.h>
int factorial(int n);
int main() {
	int i,j,x,n;
	float sum=0,fp;
	printf("Sum of series x - x^3/3! + x^5/5! - x^7/7! + ...............n terms\nEnter value of x and n");
	scanf("%d%d",&x,&n);
	for(i=1,j=1;i<=n,j<=n;i+=2,j++) {
		fp = (float) i/factorial(i);
		if(j%2 == 0)
			sum-= (float) pow(x,fp);
		else
			sum+= (float) pow(x,fp);
	}
	printf("\nSum of series:%f",sum);
}

int factorial(int n) {
	int f;
	if(n==0)
		return 0;
	else{
		f=n * factorial(n-1);
		return (f);
	}
}
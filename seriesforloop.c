#include<stdio.h>
#include<math.h>
int main() {
	int i,j,x,n;
	float t,sum=0;
	printf("\nEnter the value of x and n");
	scanf("%d%d",&x,&n);
	for(i=1,j=0;i<=n,j<n;i+=2,j++) {
		t= (float) pow(x,i) / i;
		if(j%2!=0)
			sum+=t;
		else
			sum-=t;

	}
	printf("\nSum of series =%f",sum);
	return 0;
}
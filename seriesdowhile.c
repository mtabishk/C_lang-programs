#include<stdio.h>
#include<math.h>
int main() {
	int i=1,j=0,x,n;
	float t,sum=0;
	printf("\nEnter the value of x and n");
	scanf("%d%d",&x,&n);
	do
	{
		t= (float) pow(x,i) / i;
		if(j%2!=0)
			sum+=t;
		else
			sum-=t;
		i+=2,j++;
	}
	while(i<=n && j<n);
	printf("\nSum of series =%f",sum);
	return 0;
}
//Program to print armstrong number(sum of cubes of every digit is equal to number itself) between 1-100

#include<stdio.h>
int main() {
	int i,j,digit,num=0,sum=0;
	printf("\nArmstrong number between 1 - 100 =\n");
	for(i=1;i<=100;i++) {
		num=i;
		/*do {
			digit=i%10;
			i=i/10;
			sum+=digit*digit*digit;
		} while (i>0);*/
		for(j=0;j<=i;j++){
			digit=i%10;
			i=i/10;
			sum+=digit*digit*digit;
		}
		if(sum==num)
			printf(" %d ",num);
	}
}
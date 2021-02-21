//Program to print powers of 2 table for powers 0 to 20 both positive and negative

#include<stdio.h>
#include<math.h>

int main() {
	int i;
	float result;
	printf("\tPowers of 2 table for powers -20 <= power <= 20");
	for(i=-20;i<=20;i++){
		result=pow(2,i);
		printf("\n2^%d=\t%f",i,result);
	}
}

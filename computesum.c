//Program that computes sum of all integers between 0-100 that are divisible by 6 and not by 4 
//The program also counts and displays number of such values

#include<stdio.h>
int main() {
	int i,sum=0,index=0;
	printf("Program that computes sum of all integers between 0-100 that are divisible by 6 and not by 4 and also counts and displays number of such values\n");
	printf("\n\nValues :");
	for(i=0;i<=100;i++){
		if(i%6==0 && i%4!=0){
			sum+=i;
			printf("%d ",i);
			index++;
		}
	}
	printf("\nTotal no of integers = %d \nSum of integers=%d",index,sum);
}
#include<stdio.h>
int main(){
	int x;
   	printf("Enter the number \n", x);
	scanf("%d", &x);
	if(x%2==0){
		printf("The Number is Even");
	}else{
		printf("The Number is Odd");
	}
}

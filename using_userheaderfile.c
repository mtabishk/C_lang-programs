//Program to use user defined header file

#include<stdio.h>
#include"myheaderfile.h"

 int main()
 {
 	int result,num1,num2;
 	float result1;
 	char c;
 	printf("\nEnter operation + , - , * , / to be performed\tEnter e to END");
 	scanf("%c",&c);
 	switch(c)
 		{
 			case '+':
 			printf("\nEnter two numbers");
 			scanf("%d%d",&num1,&num2);
 			result=add(num1,num2);
 			printf("Result=%d",result);
 			break;

 			case '-':
 			printf("\nEnter two numbers");
 			scanf("%d%d",&num1,&num2);
 			result=sub(num1,num2);
 			printf("Result=%d",result);
 			break;

 			case '*':
 			printf("\nEnter two numbers");
 			scanf("%d%d",&num1,&num2);
 			result=mul(num1,num2);
 			printf("Result=%d",result);
 			break;

 			case '/':
 			printf("\nEnter two numbers");
 			scanf("%d%d",&num1,&num2);
 			result1=div(num1,num2);
 			printf("Result=%f",result1);
 			break;

 			case 'e':
 			break;
 		}
 	return 0;
 }
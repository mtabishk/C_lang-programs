/*Program to reverse digits of a number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,num,number;
	printf("\nEnter the digits of number");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the number");
	scanf("%d",&number);
	for(int i=0;i<n;i++){
		num=number%10;
		a[i]=num;
		number=number/10;
	}
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	getch();

}
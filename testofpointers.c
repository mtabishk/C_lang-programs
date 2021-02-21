/*Testing different operations on pointers*/
#include<stdio.h>
#include<conio.h>
int main()
{
	/*
	int a=55;
	int *p;
	p=&a;
	printf("a=%d\n*p=%d\np=%u\n&a=%u",a,*p,p,&a);
	*/
	int a=55;
	int *p;
	p=&a;
	printf("a= %d\ta=%d",&*p,**&p);	
	getch();
}
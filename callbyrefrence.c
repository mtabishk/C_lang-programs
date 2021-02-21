/*Call by refrence or address or location*/
#include<stdio.h>
#include<conio.h>

void callbyref(int *p1, int *p2);

int main()
{
	int a=1,b=2;
	printf("\nBefore Calling Value of a=%d\tb=%d\n",a,b);
	callbyref(&a,&b);
	printf("\n\nAfter calling Vaue of a=%d\tb=%d",a,b);
	getch();
	return 0;
}

void callbyref(int *p1,int *p2){
	*p1=5;
	*p2=10;
	printf("\n\nIn Function callbyref value of a or *p1=%d\tb or *p2=%d",*p1,*p2);
	return;
}
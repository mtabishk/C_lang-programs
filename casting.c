/*Casting*/
#include<stdio.h>
#include<conio.h>

void main()
{
	/*When a and b are float
	float a,b,div;
	printf("ENter a and b");
	scanf("%f%f",&a,&b);
	div=a/b;
	printf("%.2f / %.2f = %.2f",a,b,div);
											*/

	/*When a and b are integers*/
	int a,b;
	float div;
	printf("ENter a and b");
	scanf("%d%d",&a,&b);
	div= a/b;
	printf("%d / %d = %.2f",a,b,div);

getch();	
}

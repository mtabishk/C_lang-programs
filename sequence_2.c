#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,mul;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	mul =0;
	if(b>=0)
	{
		for(int i=1;i<=b;i++)
		{
			mul+=a;
		}
		printf("%d * %d = %d",a,b,mul);
	}
	else 
	{
		if(b<0)
		b=-b;
		c=-b;
		for(int i=1;i<=b;i++)
		{
			mul+=a;
		}
		printf("%d * %d = %d",a,c,-mul);
	}


	getch();
}
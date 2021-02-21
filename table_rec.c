#include<stdio.h>
#include<conio.h>

int rectable(int x,int y,int z);
void main()
{
	int n,p;
	printf("\t\tTable of n number upto p\nEnter the value of n and p");
	scanf("%d%d",&n,&p);

	rectable(1,n,p);
getch();
}

int rectable(int x,int y,int z)
{
	int t;
	if (x > z)
		return(1);
	else
	{
		t= y * x;
		printf("\n%d * %d = \t%d",y,x,t);
		rectable(x+1,y,z);
	}
}

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,m,table;
	printf("\t\tTable of n number upto m\nEnter the value of n and m");
	scanf("%d%d",&n,&m);

	for(i=1;i<=m;i++)
	{
		table= n * i;
		printf("\n%d * %d = \t%d",n,i,table);
	}
getch();
}
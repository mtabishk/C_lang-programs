#include<stdio.h>
#include<conio.h>

int rectable_3(int x,int y);
void main()
{
	int n;
	printf("\t\tTable of 3\nEnter the value upto which you want to print the table of 3");
	scanf("%d",&n);

	rectable_3(1,n);
getch();
}

int rectable_3(int x,int y)
{
	int t;
	if(x>y)
		return(0);
	else
	{
		t= 3 * x;
		printf("\n3 * %d = %d",x,t);
		rectable_3(x+1,y);
	}

}
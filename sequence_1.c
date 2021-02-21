/* To print Sequence = 1 - 3/2 + 5/6 - 7/24...n terms */
#include<stdio.h>
#include<conio.h>

int fac(int n);
void main()
{
	int n,i,j;
	printf("\t\tTo print Sequence = 1 - 3/2 + 5/6 - 7/24...n terms");
	printf("\nEnter the value of terms\n");
	scanf("%d",&n);

	if(n>=1)
	{
		for(i=1,j=1;i<=n,j<=n;i+=2,j++)
		{
			if(j%2!=0)
			{
				printf(" %d/%d",i,fac(j) );
				if(j<n)
					printf(" - ");
			}
			else
			{
				printf(" %d/%d",i,fac(j) );
				if(j<n)
					printf(" + ");
			}

		}		
		
	}

	else
		printf("\nNumber of terms entered is INVALID");

	getch();
} 

int fac(int n)
{
	if(n==0)
		return (1);
	else
	{
		int f;
		f= n * fac(n-1);
		return (f);
	}
}
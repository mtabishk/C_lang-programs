/* Sum of Sequences Practice		*/
#include<stdio.h>
#include<conio.h>

int recfactorial(int x);

void main()
{
	int n;
	float sum=0;
	printf("\t\tSum of sequence n / n! \nEnter the value of n");
	scanf("%d",&n);
	for(float i=1;i<=n;i++)
	{
		sum+= i/recfactorial(i);
	}
	printf("%f",sum);
getch();
}

int recfactorial(int x)
{
 	int f;
	if(x==0)
		return(1);
	else
	{
		f= x * recfactorial(x-1);
		return(f);
	}
}
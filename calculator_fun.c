/*Program of Calculator using switch case and function for every operation*/
#include<stdio.h>
#include<conio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
float div(float x, float y);

void main()
{
	int option,a,b,ad,su,mu;
	float c,d,di;

	printf("\t\tCalculator \nEnter the option number of the operaton you wish to calculate\n1.Addition \n2.Subtraction \n3.Multiplicaton \n4.Division");
	scanf("%d",&option);
	
switch(option)
	{
		case 1:
		printf("\nAddition\nEnter two numbers");
		scanf("%d%d",&a,&b);
		ad = add(a,b);
		printf("\n%d + %d = %d",a,b,ad);
		break;

		case 2:
		printf("\nSubtraction\nEnter two numbers");
		scanf("%d%d",&a,&b);
		su = sub(a,b);
		printf("\n%d - %d = %d",a,b,su);
		break;

		case 3:
		printf("\nMultiplication\nEnter two numbers");
		scanf("%d%d",&a,&b);
		mu = mul(a,b);
		printf("\n%d * %d = %d",a,b,mu);
		break;

		case 4:
		printf("\nDivision\nEnter two numbers");
		scanf("%f%f",&c,&d);
		di = div(c,d);
		printf("%.2f / %.2f = %.2f",c,d,di);
		break;

		default:
		printf("\nWrong option Try again");
		break;
	}

getch();

}

int add(int x, int y)
{
	int ad;
	ad=x+y;
	return (ad);
}
int sub(int x, int y)
{
	int su;
	su=x-y;
	return (su);
}
int mul(int x, int y)
{
	int mu;
	mu= x*y;
	return (mu);
}
float div(float x, float y)
{
	float di;
	di= (x/y);
	return (di);
}



/* Program for Tabish's myCalculator */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	long int add,sub,mul,sr, a,b,x,operation;
	float div;

	printf("Welcome to Tabish's BINARY myCalculator \n");
	printf("\nEnter the serial number of operation you wish to perform: \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Square root \n6.EXIT ");
	scanf("%d", &operation);

	switch(operation)
	{

	case 1:
		printf("\n Enter the two numbers");
		scanf("%d %d",&a,&b);
		add= a + b;
		printf("\n %d + %d = %d", a,b,add);
		break;


	case 2:
		printf("\n Enter the two numbers");
		scanf("%d %d",&a,&b);
		sub= a - b;
		printf("\n %d - %d = %d", a,b,sub);
		break;

	case 3:
		printf("\n Enter the two numbers");
		scanf("%d %d",&a,&b);
		mul= a * b;
		printf("\n %d * %d = %d", a,b,mul);
		break;


	case 4:
		printf("\n Enter the two numbers");
		scanf("%d %d",&a,&b);
		div= (a/b) ;
		printf("\n %d / %d = %d", a,b,div);
		break;

	case 5:
		printf("\n Enter the number");
		scanf("%d",&a);
		sr= sqrt(a);
		printf("\nsquare root of %d = %d ",a,sr);
		break;
	case 6:
		exit(0);


	default:
		printf("INVALID OPTION");
		break;


	}

	printf("\n\n\n GOOD BYE DARLING");

}





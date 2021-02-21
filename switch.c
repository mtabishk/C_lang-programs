/*Program to use switch case*/
#include<stdio.h>
void main()
{
	int n,r,a,b,side,area,add,sub,mul,operation;
	float div,sr;
	printf("\n\nEnter the option number you wish to calculate area for\n\n\n1.Area of circle \n2.Area of Rectangle \n3.Area of square\n4.Calculator");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\nArea of Circle\n\n Enter the radius");
			scanf("%d", &r);
			area=3.14159*r*r;
			printf("\nArea of Circle of radius =%d  is \t %d", r,area);
			break;
		case 2:
			printf("\nArea of Rectangle\n\n Enter the two sides of rectangle");
			scanf("%d%d", &a,&b);
			area= a*b;
			printf("\nArea of Rectangle of sides %d and %d is \t %d",a,b,area);
			break;
		case 3:
            printf("\nArea of square\n\n Enter the side of square");
			scanf("%d",&side);
			area=side*side;
			printf("\nArea of square of side %d is \t %d", side,area);
			break;
        case 4:
            printf("Calculator \n Enter the serial number of operation you wish to perform ");
            printf("\n1.Addition 2. Subtraction 3.Multiplication 4. Division 5. Square Root");
			scanf("%d, &operation");
                switch(operation)
                {
                case 1: printf("\nAddition of numbers \n Enter two numbers");
                        scanf("%d%d", &a ,&b);
                        add=a+b;
                        printf("\nAddition of %d and %d is %d",a,b,add);
                        break;

                case 2: printf("\nSubtraction of numbers \n Enter two numbers");
                        scanf("%d%d", &a ,&b);
                        sub=a-b;
                        printf("\nSubtraction of %d and %d is %d",a,b,sub);
                        break;

                case 3: printf("\nMultiplication of numbers \n Enter two numbers");
                        scanf("%d%d", &a ,&b);
                        mul=a*b;
                        printf("\nMultiplication of %d and %d is %d",a,b,mul);
                        break;
                case 4: printf("\nDivision of numbers \n Enter two numbers");
                        scanf("%d%d", &a ,&b);
                        div=a/b;
                        printf("\nDivision of %d and %d is %d",a,b,div);
                        break;
                case 5: printf("\nSquare Root of number \n Enter number");
                        scanf("%d", &a);
                        sr=sqrt(a);
                        printf("\nSquare root of %d is %d",a,sr);
                        break;
                default:
                    printf("Invalid Option");
                    break;
                }


		default:
			printf("\nYou have entered a wrong option... \n<<try again>>");
			break;
	}

}



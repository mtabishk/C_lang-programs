/* Calculation of real roots of Quadratic Equation */

#include<stdio.h>     //Library File Access
#include<math.h>      // Math File Access

int main()
{       
	/* Variable Declaration */
	float a,b,c,d,x1,x2;
	
	/* read input data */
	printf("a= \n", a);
	scanf("%f", &a);
	printf("b= \n", b);
	scanf("%f", &b);
	printf("c= \n", c);
	scanf("%d", &d);

	/* Carry out the calculations */

	d= sqrt( b * b- 4 * a * c );
	x1= (-b + d) / (2 * a) ;
	x2= (-b - d) / (2 * a) ;
	
	/* Display the output */
	printf("\n x1= %e \n x2= %e", x1, x2);
}
  


/*Matrix Multiplication*/
/*
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,sum=0;
	int a[3][3],b[3][3],c[3][3];
	printf("\nMatrix Multiplication \nEnter elements of first matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter elements of second matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				sum= sum + a[i][k] * b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	printf("\nMultiplication of Above Matrix is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
*/


/*Program for exp(a) function*/
/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float c;
	int a;
	printf("Enter number n to calculate exponential of n");
	scanf("%d",&a);
	c=exp(a);
	printf("\n c= %.3f",c);
	getch();
}
*/


/* Program for * pyramids */
/*
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	printf("\nEnter the number of rows");
	scanf("%d",&n);
	printf("\nThe pattern is:\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" * ");
		}
		printf("\n");	
	}
	getch();
}
*/


/*Program for pascal's Traingle*/
/*
#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,j,k,space,star;
	printf("\nEnter the number of rows");
	scanf("%d",&n);
	space = n-1;
	star = 1;
	for(i=1;i<=n;i++){
		for(j=1;j<=space;j++){
			printf(" ");
		}
		for(k=1;k<=star;k++){
			printf("*");
		}
		space--;
		star+=2;
		printf("\n");
	}
	getch();
}
*/
           /* or */
#include<stdio.h>
int main(){
	int i,j,row;
	printf("\nEnter the number of rows");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(int space=1;space <= row-i ;space++){
			printf(" ");
		}
		for(j=1;j <= (2*i)-1 ;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*Program to print series 1 4 9 16 25...*/
/*
#include<stdio.h>
#include<conio.h>
void main(){
	int i,n,sum=0;
	printf("/nSeries: 1 4 9 16 ...n*n \nEnter the value of n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf(" %d",i*i);
		sum+=i*i;
	}
	printf("\nSum of series = %d",sum);
	getch();
}
*/


/* Program to print series 1 4 9 16 25...using recursion*/
/*
#include<stdio.h>
#include<conio.h>
void rec_seq(int x,int y);
void main(){
	int n;
	printf("\n Series 1 4 9 16 25...n*n using recursion\nEnter the value of n");
	scanf("%d",&n);
	printf("\nSeries is: ");
	rec_seq(1,n);
	getch();
}
void rec_seq(int x,int y){
	if(x>y)
		return;
	else{
		printf(" %d",x*x);
		x++;
		rec_seq(x,y);
	}
}
*/

/*Program for series: 1/1 - 2/2 + 3/6 - 4/24 + 5/120 - 6/720 */
/*
#include<stdio.h>
#include<conio.h>
int recseries(int x);
void main(){
	int n;
	for(int i=1;i<=6;i++){
		if(i%2!=0){
			printf(" %d/%d ",i,recseries(i));
			printf(" - ");
		}
		else if(i==6)
			printf(" %d/%d ",i,recseries(i));
			else{
			printf(" %d/%d ",i,recseries(i));
			printf(" + ");
			}
		
	}
getch();
} 
int recseries(int x){
	int fac;
	if(x==0)
		return(1);
	else{
		fac= x * recseries(x-1);
		return(fac);
	}
}

*/

/*Program to print table of 2 using for loop*/
/*
#include<stdio.h>
#include<conio.h>
void main(){
	int i,n;
	printf("Table of 2 upto 2 * n \nEnter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\n2 * %d = \t%d",i,2*i);
	}
	getch();
}
*/

/*Program of Table of 3 using recursion*/
/*
#include<stdio.h>
#include<conio.h>
void rec_table3(int x,int y);
void main(){
	int n;
	printf("\nTable of 3 upto 3 * n\nEnter the value of n");
	scanf("%d",&n);
	rec_table3(1,n);
	getch();
}
void rec_table3(int x,int y){
	if(x>y)
		return;
	else{
		printf("\n3 * %d =%d",x,3*x);
		x++;
		rec_table3(x,y);
	}
}
*/

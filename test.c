
 //Program to print sequence 1,4,9,16......n*n
/*
//Library Files Access
#include<stdio.h>
//Function Heading
int main(){
	//Variable Declaration
	int i,n;
	//Output Statement
	printf("\nSequence Printing\n");
	//Input Statement
	scanf("%d",&n);
	//Looping Condition 
	for(i=1;i<=n;i++){
		//if-else condition
		if(i==n)
			printf(" %d",i*i);
		else
			printf(" %d,",i*i);
	}
}
*/


/*
//Program to print sequence 1,4,9,16,.....n*n using recursion

//Library File Accesss
#include<stdio.h>
//User Defined Function Prototype
void recsec(int x, int y);
//Function Heading
int main(){
	//Variable Declaration
	int n;
	//Output Statement
	printf("\nSequence Printing\n");
	//Input Statement
	scanf("%d",&n);
	//User defined function calling
	recsec(1,n);
}
//User Defined Function Definition
void recsec(int x,int y){
	//if -else condition
	if(x>y)
		return;
	else if(x==y)
		printf(" %d",x*x);
	else{
		printf(" %d,",x*x);
		//Increment Operator
		x++;
		//Function Calling 
		recsec(x,y);
	}
}

*/



//Program to print ***** sequence
/*
//Library File Access
#include<stdio.h>
//Function Heading
int main(){
	//Variable Declaration
	int i,j,n;
	//Output Statement
	printf("\nPrinting Sequence **** \nEnter the number of rows\n");
	//Input Statement
	scanf("%d",&n);
	//Nested Looping Condition
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			printf("*");
		}
		//newline character in order to change line
		printf("\n");
	}
}

*/



//Program for matrix multiplication

//Library File Access
#include<stdio.h>
//Function Heading
int main(){
	//Variable Declaration
	int i,j,k,r1,r2,r,c1,c2,c,sum=0;
	printf("\nEnter number of rows and coloumn of first matrix");
	scanf("%d%d",&r1,&c1);
	printf("\nEnter number of rows and coloumns of second matrix");
	scanf("%d%d",&r2,&c2);
//	r=r1;
//	c=c2;
	if(c1==r2){
	//Array Initialization
		int a[r1][c1],b[r2][c2],c[r1][c2];	  //c[r][c]
		//Output Statement 
		printf("\nMatrix Multiplication is possible\nEnter elements of first matrix");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				scanf("%d",&a[i][j]);
			}
		}
	
		printf("\nEnter Elements of second matrix");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				scanf("%d",&b[i][j]);
			}
		}

		//Matrix Multiplication
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				for(k=0;k<r2;k++){
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
				sum=0;
			}
		}
		//Printing Result
		printf("\nThe result of Matrix Multiplication is: \n");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				printf("%d",c[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("\nMatrix Multiplication is not possible");
	

}




/*
//Printing of sequences 1/1 + 2/2 - 3/6 + 4/24 - 5/120.....

//Library File Access
#include<stdio.h>
//User Defined Function Prototype
int fac(int x);
//Function Heading
int main(){
	//Variable Declaration
	int i,n;
	//Output Statement
	printf("\nPrinting Sequence 1/1 + 2/2 - 3/6 + ........n/n!\nEnter the value of n\n\n");
	//Input Statement
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		//if-else condition
		if(i%2!=0){
			//Output Statement and User Defined Function Calling
			printf(" %d/%d ",i,fac(i));
			if(i<n)
				printf("+");
		}
		else{
			printf(" %d/%d ",i,fac(i));
			if(i<n)
				printf("-");
		}
	}
}
//User Function Definition
int fac(int x){
	//variable declaration
	int f=1;
	//if-else condition
	if(x==0)
		return(1);
	else{
		f = x * fac(x-1);
		return(f);
	}
}

*/

/*

//Program to use exp(a) function --Assigned by Sir

//Library File Access
#include<stdio.h>
#include<math.h>
//Function Heading
int main(){
	//Variable Declaration
	int a;
	float c;
	printf("\nEnter the number to calculate the exponential of it");
	scanf("%d",&a);
	c=exp(a);
	printf("\nexp(%d) = \t%f",a,c);
}
*/
	
/*	
//Program to print Table of 2 using Recursion
//Library File Access
#include<stdio.h>
//User Defined Function Prototype
void rectable2(int x,int y);
//Function Heading
int main(){
	//Variable Declaration
	int n;
	//Output Statement
	printf("\nTable of 2 upto 2 * n \nEnter the value of n");
	//Input Statement
	scanf("%d",&n);
	//User Defined Function Calling
	rectable2(1,n);
}
//User Defined Function Definition
void rectable2(int x,int y){
	if(x>y)
		return;
	else{
		printf("\n2 * %d = %d",x,2*x);
		x++;
		rectable2(x,y);
	}
}
*/

//Sum of Diagonal Elements of 2D array

//Library File Access
#include<stdio.h>
//Function Heading
int main() {
	//Variable Declaration
	int i,j,rows,col,sum=0;
	//Output Statement
	printf("Sum of Diagonal Elements of 2D array\nEnter number of rows and coloumns");
	//Input Statement
	scanf("%d%d",&rows,&col);
	//Array initialisation
	int arr[rows][col];
	//if-else condition for checking matrix is valid or not
	if(rows==col){
		printf("\nEnter elements");
		//Scaning values of matrix elements
		for(i=0;i<rows;i++){
			for(j=0;j<col;j++){
				scanf("%d",&arr[i][j]);
			}
		}
		//Printing matrix
		printf("\nThe entered matrix is:\n");
			for(i=0;i<rows;i++){
				for(j=0;j<col;j++){
					printf(" %d ",arr[i][j] );
				}
				printf("\n");
			}
		//Sum of diagonal elements
		for(i=0;i<rows;i++){
			sum+=arr[i][i];
		}
		printf("\nSum of Diagonal elements is %d",sum);
	}
	else
		printf("Invalid dimensions of matrix");
}



// Program to print the transpose of a matrix

#include <stdio.h>
#define MAX 10
int main()
{
	int i,j,row,col,matrix[MAX][MAX],transpose[MAX][MAX];
	printf("\t\tTranspose of a matrix\nEnter the rows and columns of matrix\n");
	scanf("%d%d",&row,&col);
	printf("Enter the elements of matrix\n");
	for (i=0;i<row;i++) {
		for (j=0;j<col;j++) {
			scanf("%d",&matrix[i][j]);
		}
	}
	// Logical condition for transpose
	for (i=0;i<row;i++) {
		for (j=0;j<col;j++) {
			transpose[j][i] = matrix[i][j];
		}
	}
	// Printing the transpose of matrix
	for (i=0;i<col;i++) {
		for (j=0;j<row;j++) {
			printf(" %d",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}

// Upper and Lower Triangular Matrices
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void readinput(int *matrix[],int row,int col);
int main() 
{
	int *matrix[MAX];
	int row,col;
	printf("Enter rows and coloumns of matrix\n");
	scanf("%d%d",&row,&col);
	readinput(matrix,row,col);
	// logic to print upper triangular matrix
	printf("\nUpper Triangular Matrix\n");
	for (int i=0;i<row;i++) {
		for (int j=0;j<col;j++) {
			if (i>=j)
				printf(" %d",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n\nLower Triangular Matrix\n");
	for (int i=0;i<row;i++) {
		for (int j=0;j<col;j++) {
			if (i<=j)
				printf(" %d",matrix[i][j]);
		}
		printf("\n");
	}

}
void readinput(int *matrix[],int row, int col) {
	// allocating space on heap
	for (int i=0;i<row;i++) {
		matrix[i] = (int *) malloc (col * sizeof(int) );
	}
	printf("Enter elements of matrix\n");
	for (int i=0;i<row;i++) {
		for (int j=0;j<col;j++) {
			scanf("%d",&matrix[i][j]);
		}
	}
	return;
}
// Reversing an array

#include <stdio.h>
void rev_arr(int a[],int n);
void swap(int *ptra,int *ptrb);

int main() 
{
	int a[20],n,i;
	printf("\tReversing an array upto nth element\nEnter the value of n");
	scanf("%d",&n);
	printf("Enter the elements of array");
	for(i=0;i<n;i++) {
		scanf("%d",(a+i) );
	}
	rev_arr(a,n);
	return 0;
}
void rev_arr(int a[],int n) {
	// Pointer to last element of a array
	int *b = a+n-1;
	while(b>a) {
		swap(a,b);
		a++;
		b--;
	}
	for(int i=0;i<n;i++) {
		printf(" %d ", *(a+i) );
	}
	return;
}
void swap(int *ptra,int *ptrb) {
	int t;
	t = *ptra;
	*ptra = *ptrb;
	*ptrb = t;
	return;
}

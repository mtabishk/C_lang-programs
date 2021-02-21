//Program for Dynamic Memory Allocation(DMA) usin free(); function

#include<stdio.h>
//For DMA functions like malloc,calloc,realloc,free...
#include<stdlib.h>
int main() {
	int *p;
	int n,i;
	printf("\tUse of Calloc function\nEnter the size of array");
	scanf("%d",&n);
	p= (int *)calloc(n , sizeof(int));
	if(p==NULL) {
		printf("\nMemory Allocation Failed");
		exit (0);
	}
	else {
		printf("\nMemory Allocation successfull");
		for(i=0;i<n;i++) {
			p[i]=i+3;
		}
		for(i=0;i<n;i++) {
			printf("\nElement p[%d]= %d",i,p[i]);
		}
		free(p);
		printf("\nMemory deallocated successfully");
	}
	return 0;
}
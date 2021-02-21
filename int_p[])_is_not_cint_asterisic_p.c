// Program to show if int a[] is not equal to *a

#include <stdio.h>


int main() 
{
	int i;
	int p[] = {1,2,3};
	printf("Outside Main:\n");
	for(i=0;i<3;i++) {
		printf("\n%d", *(p+i) );
	}

	return 0;
}

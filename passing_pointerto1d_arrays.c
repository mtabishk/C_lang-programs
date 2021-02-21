/*Passing pointers to 1D Arrays */
#include<stdio.h>
#include<conio.h>
int main(){
	int x[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
		printf("\nx[%d]=%d\t*(x+%d)=%d\n",i,x[i],i,*(x+i));
	for(int i=0;i<5;i++)
		printf("\n&x[%d]=%u\t(x+%d)=%u\n",i,&x[i],i,(x+i));
	getch();
}
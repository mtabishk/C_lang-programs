/*Program to pass array to function--When array is passed to function then values of array elements are not passed to functions--
Array Name is interpreted as address of that array element-- Which means Formal Arguments present in definition of Function holds address 
of corresponding array element => Formal arguments act as a pointer because it stores address of passed array element at calling
portion in main function*/

#include<stdio.h>
#include<conio.h>

void modify(int b[]);		//Function Prototype

int main()
{
	int a[3];
	printf("From main,before calling function:\n");
	for(int i=0;i<3;i++){
		a[i]=i+2;
		printf("a[%d]= %d\n",i,a[i]);
	}

	modify(a);    			//Function Calling

	printf("\n\nFrom main,after calling function:\n");
	for(int i=0;i<3;i++){
		printf("a[%d]= %d\n",i,a[i]);
	}
	return 0;
	getch();
}

void modify(int b[]){
	int i;
	printf("\nFrom function modify after modifying the values");
	for(i=0;i<3;i++){
		printf("\n b[%d]= %d",i,b[i]);			/*Here b[i] acts as a pointer variable that holds address of a[i] and points 
												towards the corresponding array element*/
	}

	return;
}
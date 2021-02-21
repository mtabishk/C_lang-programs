/*Program to check goto */
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("\nEnter the value of n");
	scanf("%d",&n);
	if(n>=0){
		goto positive;
	}
	else{
		goto negative;
	}

positive:{
		printf("\nNumber is positive");
	}
negative:{
		printf("\nNumber is negative");
	}
getch();	
}

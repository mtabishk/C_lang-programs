/*Program to check if a number is prime*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n ;
	printf("\nCheck if number is prime \nEnter the number");
	scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0) {
            printf("\n%d is not prime number ",n);
            break;
	    }
    }
    if(i==n)
         printf("\n%d is prime number",n);
    getch();          
}






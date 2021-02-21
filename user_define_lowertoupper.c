/*User defined function to convert lowercase letter to upper without using library function toupper*/
#include<stdio.h>
#include<conio.h>

char lower_to_upper(char c1);

void main(){
	char lower,upper;
	printf("\nPlease enter a lowercase letter:\n");
	lower=getchar();
	upper=lower_to_upper(lower);
	printf("\nThe uppercase equivalent is %c ",upper);
	getch();
}
char lower_to_upper(char c1){
	char c2;
	c2= (c1 >= 'a' && c1 <= 'z') ? (c1-32): c1;
	return(c2);
}
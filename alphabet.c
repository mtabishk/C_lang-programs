#include<stdio.h>
int main()
{
	char alphabet;
	printf("Enter the alphabet \n");
	alphabet= getchar();
	switch(alphabet){
		case 'A':
		case 'a':
		printf("It is a vovel \n");
		break;

		case 'E' : 
		case 'e' : 
		printf("It is a vovel \n");
		break;

		case 'I': 
		case 'i' : 
		printf("It is a vovel \n");
		break;

		case 'O': 
		case 'o' : 
		printf("It is a vovel \n");
		break;

		case 'U': 
		case 'u' : 
		printf("It is a vovel \n");
		break;

		default:
		printf("It is consonent \n");
		break;
 
	}
}

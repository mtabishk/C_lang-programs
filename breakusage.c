#include<stdio.h>
void main()
{
	int i=1,x;
	
	while(i<=5)
	{
	printf("Enter a number \n" );
	scanf("%d",&x);

	if(x>0)
	break;

	i++ ;
	}


	i==6? printf("Ends Normally") :printf("Applies break");

	
}

// Program to show that char p[] can also be written as *p
#include <stdio.h>
char p[] = "Outside main :My name is Anthony Gonzalvis";
//char *p = "Outside main :My name is Anthony Gonzalvis";

int main()
{
	char q[] = "Inside main: XXX";
	//char *q = "Inside main: XXX";
	printf("\n%s\n\n%s",p,q);
	return 0;
}

// Therefore *p is also a one Dimensional Array
#include <stdio.h>


int main() 
{
	int i;
	char *p = {"Don2"};
	printf("Outside Main:\n");
	for(i=0;i<3;i++) {
	//	printf("\n%c", p[i]);
		printf("\n%c", *(p+i) );
	}

	return 0;
}
 
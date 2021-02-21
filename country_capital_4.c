//Program that accepts name of country and displays corresponding capital as output.

//Library File Access for standard input & output and string functions
#include<stdio.h>
#include<string.h>

int main() {
	//variable declaration
	int i,j,index;
	//Array initialisation
	char country[13][30]={"Canada","England","France","Germany","India","Israel","Italy","Japan","Mexico","People's Republic of China","Russia","United States"};
	
	char capital[13][30]={"Ottawa","London","Paris","Berlin","New Delhi","Jerusalem","Rome","Tokoyo","Mexico City","Beijing","Moscow","Washington"};
	char value[30];

	//while loop condition
	while( strcmpi(value,"END") !=0) {
		printf("\nEnter the name of country to display its corresponding capital or vice versa\nType <END> when finished\n");
		gets(value);

		for(i=0;i<12;i++){
			if( (strcmpi(country[i],value) ) == 0 ){
				index=i;
				printf("\nCapital of country %s is \t%s",country[index],capital[index]);
				break;
			}			
			else if( strcmpi(capital[i],value) ==0 ){
				index=i;
				printf("\nCountry of capital %s is \t%s",capital[index],country[index]);
				break;
			}
			
			else
				continue;
		}
		
		if(i==12 && strcmpi(value,"END")!=0)
			printf("OOPS COUNTRY IS NOT FOUND <<TRY AGAIN>>");
		
	}
	return 0;
}

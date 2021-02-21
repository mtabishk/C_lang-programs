// Checking array initialisation

#include <stdio.h>
#include <string.h>
void passing_string_as_pointer(char *string1[], char *string2[]);

int main()
{
	char *str1[10] =   {
						"Tabish", "Muhammad"
						};
	char *str2[10] =   {
						"Don", "King"
						};
	// How to pass 2D Array to a function
	//passing_string_as_pointer(str1[0][0],str2[0][0]);
	return 0;
}
void passing_string_as_pointer(char *string1[], char *string2[]) {
	//strcat(string1,string2);
	//printf("%s",string1);
	return;
}



/*
int stringcompare(char str1[],char str2[]);
{

 		int result;
 		char str1[100],str2[100];
 		printf("Enter string1\n");
 		gets(str1);
 		printf("Enter string2\n");
 		gets(str2);
 		result=stringcompare(str1,str2);
 		if(result == -1)
 			printf("String 1 is greater than string 2");
 		else if(result == 1)
 			printf("\nString 1 is lesser than string 2");
 		else
 			printf("String 1 and String 2 are equal");
 		return 0;

 	}

 	int stringcompare(char str1[],char str2[]){
 		int i,len1,len2;
 		len1=strlen(str1);
 		len2=strlen(str2);
 		printf("%d",len1);lk
 		printf("%d",len2);
 		if (len1 > len2)
 			return -1;
 		else if ( len1 < len2)
 			return 1;
 		else {
 			for(i=0;i<=len1;i++){
 				if(str1[i] > str2[i])
 					return (-1);
 				else if(str1[i] < str2[i])
 					return (1);
 			}
 		}
 		return 0;
 	

 	//code
}*/



/*{
	int num_1[5]={1,2,3,4,5};
	int num_2[5]={1,2,3,4,5};
	if (num_1==num_2)
		printf("Equal");
	else
		printf("Not Equal");
}*/
/*{
	char p[6];
	for(int i=0;i<5;i++)
		scanf("%c",(p+i));
	
	for(int i=0;i<5;i++)
		printf("\n%c",*(p+i));
}*/
/*char *array[] = {
	"Tabish",
	"Sami"
};
*/
/*void names() {
	static char *array[] = {
	"Tabish",
	"Sami"
	};
	return;
}

int main() 
{
	names();
	char *array[10];
	printf("\n%s\t%s",*(array+0),*(array+1));
	return 0;

}*/
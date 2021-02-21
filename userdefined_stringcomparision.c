#include <stdio.h>
#include <string.h>
int stringcompare(char str1[],char str2[]);
int main()
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
}
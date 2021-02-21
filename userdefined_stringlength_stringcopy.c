//User defined String Length and String Copy Function

#include <stdio.h>
#include "headerfile_userdef_strlength_strcopy.h"

 int main() {
 	int len1;
 	char str1[30],str2[30];
 	printf("Enter string one\n");
 	gets(str1);
 	len1=strlength(str1);
 	strcopy(str2,str1);
 	printf("Length of string one =  %d",len1);
 	printf("\nStr1= %s, str2=  %s",str1,str2);
 	return 0;
 }
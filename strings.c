#include<stdio.h>
#include<string.h>
int main(){
	int len;
	char str1[100], str2[100], str3[100], str4[2]=" ", tempstr1[100];
	printf("Enter string one");
	gets(str1);
	len=strlen(str1);
	printf("\nThe length of string one is %d",len);
	strcpy(str2,str1);
	printf("\nFirst string is str1 = %s and copied string str2 = %s",str1,str2);
	printf("\nEnter the string to be compared with first string");
	gets(str3);
	if( strcmpi(str1,str3) == 0)
		printf("\nStrings are equal");
	else if ( strcmpi(str1,str3) < 0)
		printf("\nstr1 < str3");
	else
		printf("\nstr > str3");
	printf("\nEnter the string to be concatenated with first string");
	gets(tempstr1);
	strcat(str1,str4);
	strcat(str1,tempstr1);
	printf("\nThe concatenated string is %s ",str1);
	return 0;
}

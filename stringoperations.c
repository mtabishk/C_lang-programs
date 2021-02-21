//Program on Strings

#include<stdio.h>
#include<string.h>

int main() {
	char str1[12]="Hello";
	char str2[12]="World";
	char str3[12];
	int len,compare;
	//Copy str1 into str3
	strcpy(str3,str1);
	printf("strcpy(str3,str1): \t%s\n",str3);
	strcat(str1," ");
	//Concatenates str1 and str2
	strcat(str1,str2);
	printf("strcat(str1,str2): \t%s\n",str1);
	//total length of string after concatenation
	len=strlen(str1);
	printf("strlen(str1):\t\t%d\n",len);
	//comparision of two strings ==> strcmp(str1,str2)
	//if str1=str2 ==> then compare=0
	//if str1>str2 ==> then compare<-1
	//if str1<str2 ==> then compare>1
	compare = strcmp(str1,str2);
	printf("strcmp(str1,str2):\t%d\n",compare);
	compare = strcmp(str2,str1);
	printf("strcmp(str2,str1):\t%d\n",compare);
	compare = strcmp(str1,str1);
	printf("strcmp(str1,str1): \t%d\n",compare);
	printf("str1=%s\nstr2=%s\nstr3=%s",str1,str2,str3);
	return 0;
}


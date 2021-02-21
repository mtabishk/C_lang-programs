//Program to convert a text in lowercase to uppercase

#include<stdio.h>
#include<string.h>

int main() {
	int i,len;
	char text[100];
	printf("\tLowercase text to uppercase text\nEnter the text\n");
	gets(text);
	len=strlen(text);
	for(i=0;i<len;i++){
		if(  (text[i] >= 'a')   &&   (text[i] <= 'z') )
			text[i]= text[i] - 32;              //Difference between lowercase alphabet and its corresponding uppercase is 32 E.x., 'a' -'A' == 32. Here 'a'==91 and 'A'=65.
	}
    printf("\nThe uppercase text is : \n%s",text);

} 
//Program to calculate total number of vovels in a given test

#include<stdio.h>
#include<string.h>

int main() {
	int i,len,count=0;
	char text[30];
	printf("\tCalculation of total number of vovels in a given text\nEnter the text:\n");
	scanf(" %[^\n]",text);
	len = strlen(text);
	for(i=0;i<len;i++){
		switch(text[i])
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
			count++;

		}
	}
	printf("\nTotal number of vovels in the text are:\t%d",count);
}
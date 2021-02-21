//Searching a sub string

#include<stdio.h>
#include<string.h>

int main() {
	int i,j,text_len,substr_len;
	char text[100],substr[30];
	printf("\tSearching a sub string\nEnter the text\n");
	gets(text);
	printf("\nEnter the substring to be searched\n");
	gets(substr);
	text_len=strlen(text);
	substr_len=strlen(substr);

	for(i=0;i <= text_len-substr_len;i++){
		for(j=0;j<substr_len;j++){
			if(text[i+j] == substr[j] )
				continue;
			else
				break;
		}
		if(j == substr_len)
			printf("\nThe substring is present from subscript %d onwards \n", i);
	}
}
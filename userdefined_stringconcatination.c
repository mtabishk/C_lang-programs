//User defined string concatination

#include<stdio.h>
#include<string.h>

void leftconcat(char str1[],char str2[]);  //str1== str1tination && str2==source
void rightconcat(char str1[],char str2[]);
int main() {
	char choice;
	char str1[20],str2[20];
	printf("\tString concatination\nEnter string 1\n");
	gets(str1);
	printf("Enter string 2 to be concatinated\n");
	gets(str2);
	printf("Enter L for left concatination and R for right concatination\n");
	scanf("%c",&choice);

	switch(choice)
	{
		case 'l':
		case 'L':
		leftconcat(str1,str2);
		break;

		case 'r':
		case 'R':
		rightconcat(str1,str2);
		break;

		default:
		printf("\n\n Wrong choice");
		break;
	}
	return 0;
}
void leftconcat(char str1[],char str2[]){  
	int i,j,len1,len2;
	len1= strlen(str1); 
	len2=strlen(str2);
	for(i=len1-1;i>=0;i--)
		str1[len2+i]=str1[i];  //Characters of string are first shifted and then entered from right side here
	for(j=0;j<len2;j++)		//In the loop for(i=0;i<len1;i++) str1[len2+i] = str1[i]; if str1 < str2 then result is displayed wrong 
		str1[j]=str2[j];
	
	str1[len1+len2]= '\0';
	printf("\nFirst string after left concatination is : \t%s\n",str1);
	return;
}
void rightconcat(char str1[],char str2[]){
	int i,j,len1,len2;
	len1= strlen(str1);
	len2=strlen(str2);
	for(j=0;j<len2;j++)
		str1[len1+j]=str2[j];
	str1[len1+len2]= '\0';
	printf("\nFirst string after right concatination is : \t%s\n",str1);

	return;
}
		
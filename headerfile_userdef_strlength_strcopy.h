//Header file for userdefined function for String Length and String Copy
int strlength(char str[]){
	int count=0;
	while( str[count] != '\0' )
		count++;
		return count;	
}
void strcopy(char str2[],char str1[]) {
	int i,length;
	length=strlength(str1);
	for(i=0;i<=length;i++) {
		str2[i] = str1[i];
	}
}
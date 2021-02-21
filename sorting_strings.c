//Sorting a list of strings alphabetically using two dimensional array

#include<stdio.h>
#include<string.h>

void reorder(int n,char x[][12]);
int main() {
	int i,n=0;
	char x[10][12];
	printf("\t Sorting strings\nEnter the strings and type END when finished\n");

	//reading list of strings
	do
	{
		gets(x[n]);
	
	}
	while( strcmpi(x[n++], "END") );
	//adjust the value of n
	n--;

	reorder(n,x);

	printf("\n\nReordered list of strings:\n");
	for(i=0;i<n;i++)
		printf("\n %s ",x[i]);
	return 0;
}
//rearranging strings
void reorder(int n,char x[][12]){
	char temp[12];
	int i,item;
	for(item=0; item < n-1; ++item){
		for(i=item+1; i<n; ++i){  //Finding lowest string
			if( strcmpi(x[item], x[i]) > 0 ){
				//Swapping strings
				strcpy(temp,x[item]);
				strcpy(x[item],x[i]);
				strcpy(x[i],temp);

			}
		}
	}
	return;
}
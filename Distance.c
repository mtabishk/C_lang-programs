#include<stdio.h>
#include<math.h>
int main(){
	int x,x1,x2,y,y1,y2;
	int distance;
	printf("Enter the values of x1,x2,y1,y2 for calculation of Euclidian Distance \n");
	scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
	x= x2-x1;
	y= y2-y1;
	distance= sqrt(x*x + y*y);
	printf("Euclidian Distance= %d", distance);
	}


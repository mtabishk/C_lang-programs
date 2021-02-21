// Program to print system date

#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main()
{
	struct date d;
	// storing date in structure d
	getche(&d);
	printf("Current system date is %d / %d / %d",d.da_day,d.da_mon,d.da_year);
	getch();
	
	return 0;
}
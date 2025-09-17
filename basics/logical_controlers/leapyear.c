#include <stdio.h>
int main() {
	int year;

	printf("enter the year to checked:");

	scanf("%d",&year);
	if((year%4==0 || year%400==0 ) && !(year%100 == 0) )
	printf ("the given year is a leap year\n");
	else
	printf ("the given year is not a leap year\n");
	return 0;
}
//this is worng

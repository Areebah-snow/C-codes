#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float day,year,week;
	printf("Please input the number of days:\n");
	scanf("%f", &day);
	year = day/365;
	week = day/7;
	
	printf("Year = %.1f\n", year);
	printf("Week(s) = %.1f", week);
		return 0;
}

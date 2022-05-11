 e#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int month;
	printf("Let's learn about the calender\n");
	printf("Select a month\n");
	printf("1. January\n");
	printf("2. February\n");
	printf("3. March\n");m d
	printf("4. April\n");
	printf("5. May\n");
	printf("6. June\n");
	printf("7. July\n");
	printf("8. August\n");
	printf("9. September\n");
	printf("10. October\n");
	printf("11. November\n");
	printf("12. December\n");
	
	
	scanf("%d", &month);
	switch(month){
		case 1:
			printf("January has 31 days");
		break;
		case 2:
			printf("February has 28 days ayear and 29 days a leap year");
		break;
		case 3:
			printf("March has 31 days");
		break;
		case 4:
			printf("April has 30 days");
		break;
		case 5:
			printf("May has 31 days");
		break;
		case 6:
			printf("June  has 30 days");
		break;
		case 7:
			printf("July has 31 days");
		break;
		case 8:
			printf("August has 31 days");
			
		break; 
		case 9:
			printf("September has 30 days");
		break;
		case 10:
			printf("October has 31 days");
		break;
		case 11:
			printf("November has 30 days");
		break;
		case 12:
			printf("December has 31 days\n");
			printf("END OF YEAR!!!");
		break;
		
		default:
			printf("Not in calender");
	}
	return 0;
}

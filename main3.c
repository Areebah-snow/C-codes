#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int YearsWithUs,BizDone;
    printf("Year with us \t");
    scanf("%d", &YearsWithUs);
	printf("Business Done \t");
    scanf("%d", &BizDone);
	
	if ( YearsWithUs>=10&&BizDone>=500000){
	
	printf("You are classified as an MVS");
}
    else{
    	printf("Loser!");
}
	return 0;
}
	


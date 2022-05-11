#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[4];
	name[0] =  "Aisha";
	name[1]= "Amna";
	name[2] = "Fairy";
	name[3] = "Cookie";
	
	for(char i =0; i<4; i++){
		printf("Welcome! %d", i);
	}
	
	return 0;
}

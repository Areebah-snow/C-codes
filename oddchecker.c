#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int value;
	printf("Enter a value\n");
	scanf("%d", &value);
	
	int result = value%2;
	
	switch(result){
		case 0:
			printf("%d is an even number", value);
			break;
		case 1:
			printf("%d is an odd number",value);
			break;
	}
	return 0;
}

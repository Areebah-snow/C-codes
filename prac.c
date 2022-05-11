#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	system ('cls');
	
	printf("\nEnter a lower cased alphabet (a - z) : ");
	scanf("%c", &ch);
	getch();
	return 0;
}

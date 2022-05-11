#include <stdio.h>  x
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int fnum,snum;
	int *p = &fnum;
	int *r = &snum;
	printf("Enter a first number");
	scanf("%d", &fnum);
	printf("Enter a second number");
	scanf("%d", &snum);
	if(*r > *p)
	{
		printf("%d is bigger", *r);
	}
	else
	{ 
		printf("%d is bigger", *p);
	}
	
	return 0;
}

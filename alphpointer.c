#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	char *q, letters[26];
	q = letters;
	for(i=0; i<26; i++)
	{
		*q=i+"A";
		q++;
	}
	
	printf("Enter your alphabet are :\n");
		for(i=0; i<26; i++)
	{
		printf("%c \n",*q);
		q++;
	}
	return 0;
}

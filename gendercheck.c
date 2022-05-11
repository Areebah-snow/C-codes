#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char gender;
	printf("Enter your gender \t\t \n M or F\n");
	scanf("%c", &gender);
	switch(gender)
	{
		case 'M':
			printf("Male");
			break;
		case 'F':
		printf("Female");
		break;	
		default:
			printf("TRY AGAIN");
	}
	
	
	/*
	int letter;
	printf("Enter a letter\n");
	scanf("%c", &letter);
	
	switch(letter){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("It is a vowel letter");
		break;
		
		default:
			printf("It is a consonant");
	}*/
	return 0;
}

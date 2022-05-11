#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char x;
	char a='a';
	char e ='e';
	char i='i';
	char o ='o';
	char u ='u';
	printf("Enter a letter: \n");
	scanf("%c", &x);
	 if( x == a || x==e|| x==i|| x==o || x==u||x=='A'||x=='E'|| x=='I'|| x=='O'||x=='U')
	 {
		
		printf("The letter is a vowel");
	}
	else{
		printf("The letter is a consonant");
	}
	return 0;
}

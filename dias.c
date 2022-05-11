#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char x;
	

	int c = ( 0,1,2,3,4,5,6,7,8,9);
     
	printf("Enter a character\n");
	scanf("%d", &x);
	
	if(x==c){
		printf("It is a digit");
		
	} 
	else if((x>='a'&& x<='z')|| (x>='A'&& x<='Z') ){
		printf("It is a letter");	
	}
	else{
		printf("It is a special character ");
	}
	
	return 0;
}

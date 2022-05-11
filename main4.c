#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
 int b;
 b = 0;
 system('cls');
 printf("Enter Choice (1-3) : ");
 scanf("%d", &b);
 if (b == 1)
 	printf("\nChoice is 1");
 else if( b == 2)
  	printf("\nChoice is 2");
   else if( b == 3)
       printf("\nChoice is 3");

 else
 	printf("\nInvalid Choice");
	return 0;
}

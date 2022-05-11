#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int a,b,*ptr1,*ptr2;
	 ptr1= &a;
	 ptr2 = &b;
	 
	 printf("Enter a number:");
	 scanf("%d", &a);
	 
	 printf("Enter second value:");
	 scanf("%d", &b);
	 
	 if(a>b)
	 {
	 	printf("%d is the higher", *ptr1);
	 	
	 }
	 if(a<b)
	 {
	 	printf("%d is higher", *ptr2);
	 }
   
	return 0;
}

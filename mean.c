#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 float a,b,c,mean;
	 printf("Enter a first value");
	 scanf("%f", &a);
	 
	  printf("Enter a second value");
	 scanf("%f", &b);
	 
	  printf("Enter a third value");
	 scanf("%f", &c);
	  
	  mean= (a+b+c)/3;
	  printf("The average value of the three values inputed is ""%f", mean);
	  
	return 0;
}

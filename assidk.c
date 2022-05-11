#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	printf("GROUP 1\n");
	printf("Enter a first value\n");
	scanf("%d",&a);
    printf("Enter a first value\n");
	scanf("%d",&b);
	printf("GROUP 2\n");
	 printf("Enter a first value\n");
	scanf("%d",&c);
	 printf("Enter a first value\n");
	scanf("%d",&d);
	
	int result1=a+b;
	int result2= c+d;
	if(result1> result2){
		printf("the sum of Group 1 is %d. So it is larger", result1);
		
	}
	else{
		printf("The sum of group 2 is %d. Therefore it is larger", result2);
	}
	return 0;
}

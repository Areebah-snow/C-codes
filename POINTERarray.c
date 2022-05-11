#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j,ary[5];
	int *t;	
	printf("Enter your array elements below:");
	for(i=5; i>0;i--)
	{
		printf("\nElement[%d]: ", i);
		scanf("%d", &ary[i]);
	}

	printf("Your array is : ");
	for(i=5; i>0;i--)
	{
	 	t=&ary[i];
	
		printf("%d",*t);
	}
	return 0;
}

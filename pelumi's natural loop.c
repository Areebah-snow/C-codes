#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,z;
	z=0;
	for(i=0;i<11;i++)
	{
	///	printf("%d\n",i);
		z=i+z;
	}
	printf("The sum is %d", z);
	return 0;
}

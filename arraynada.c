#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int size;
	int g[size];
	
	printf("Enter size of array");
	scanf("%d", &size);
	int i;
	
	
	for(i=0; i<size;i++)
	{
      printf("Enter a  number");
      scanf("%d", &g[i]);
	}
 
     int total=0;
    for (i=0; i<size; i++)
	{
		total+=g[i];
	}
	printf("Sum is %d", total);
	return 0;
}

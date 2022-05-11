#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
     
	int array[4][5];
	///a = row, b= column
	int i,j;
	for (i = 0; i <4; i++)
	{
		 
		for(j = 0; j < 5 ; j++)
		{
		
		printf("row[%d] column [%d]", i,j);
		scanf("%d", &array[i][j]);
        }
	}
	printf("\n");
		for (i = 0; i <= 4; i++)
	{
		for( j = 0; j <= 5; j++)
		{
		
		printf("%d", array[i][j]);
	
        }
       printf("\n");
	}
	

			return 0;
}

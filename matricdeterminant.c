#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int array[3][3];
	int i,j;
	int var = 0;
	
	/////for accepting values
		printf("Enter element of the array\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
		
			printf("Row[%d] column [%d]", i,j);
			scanf("%d", &array[i][j]);
		}
	}
	
	//////printing array
	printf("------MATRIX--------\n");
	for(i=0; i<3; i++)
	{
	    	for(j=0; j<3; j++)
		{
			
			printf("%4d", array[i][j]);
		    
	    }
		printf("\n");
	}
	for(i=0; i<3; i++)
	{
	   	var= var + (array[0][i]*(array[1][(i+1)%3]+array[2][(i+2)%3]-array[1][(i+2)%3]*array[2][(i+2)%3]));
	   
	}
	     	printf("\nThe determinant is %d\n", var);
	return 0;
}

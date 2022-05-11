#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int arr[10][10],i,j,size;
	float det = 0;
	
	printf("\n\n Display the lower triangular of a given matrix: \n");
	printf("-------------------------------------------------------\n");
	printf("Input the size of the square matrix : ");
	
	scanf("%d", &size);
	printf("Input elements in the first matrix :\n");
	for(i=0; i<size; i++)
	{
		for(j=0;j<size; j++)
		{
			printf("element [%d][%d]:", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\n---------MATRIX------------\n");
	for(i=0; i<size; i++)
	{
		for(j=0;j<size; j++)
		{
			printf("%4d", arr[i][j]);
			printf("\n");
		}
	}
	
    ////setting zero to lower triangular matrix
    for(i=0; i<size; i++)
	{
		
		printf("\n")
		for(j=0;j<size; j++)
		{
			if(i<=j)
			{
			
			
			printf("%4d", arr[i][j]);
		    }
		    else{
		    	printf("%4d", 0);
			}
			printf("\n\n");
		    }
		}
	}
	return 0;


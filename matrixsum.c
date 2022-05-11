#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j, arr[5][5], rsum[5], csum[5], size;
	printf("Input size of matrix\n");
	scanf("%d",&size );
	printf("Input elements in the first matrix\n");
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			printf("Enter value matrix[%d][%d]", i,j);
			scanf("%d", arr[i][j]);
		}
	}
	////printing user input
	printf("The matrix is \n");
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
		printf("%d", arr[i][j]);
		printf("\n");
		}
	}
	return 0;
}

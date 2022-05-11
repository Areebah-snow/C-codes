#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int row,col;
	int ary[row][col];
	
	printf("Enter number of rows\n");
	scanf("%d", &row);
	printf("Enter number of columns\n");
	scanf("%d", &col);
	int i,j;
	for(i = 0; i<row; i++)
	{
		for(j = 0; j<col; j++)
		{
		
			scanf("&d", ary[i][j]);
		}
		printf("\n");
	}
	
	
	for(i = 0; i<row; i++)
	{
		for(j = 0; j<col; j++)
		{
		    printf("%d", ary[i][j]);
		}
	}
	return 0;
}

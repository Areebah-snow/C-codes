#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[2][3][2];
/*	printf("%d\n", arr[1][1][0]);
	printf("%d\n", arr[0][2][2]);
	printf("%d\n", arr[0][1][2]);*/
	
	int i,j,k;
 printf("Enter 12 values: \n");
  for (i = 0; i < 2; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      for ( k = 0; k < 2; k++)
      {
        scanf("%d", &arr[i][j][k]);
      }
    }
  }

  // Printing values with proper index.

  printf("\nDisplaying values:\n");
  for ( i = 0; i < 2; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      for ( k = 0; k < 2; k++)
      {
        printf("test[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
      }
    }
  }
	
	
	
	
	
	
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[N];
	int i,j;
	//accepts user input
	
	for(i=0; i<N; i++)
	{
		printf("Enter a digit: \n");
		scanf("%d", &arr[i]);
	}
	
	printf("Duplicate elements in a given array: \n");
	
	//searches for duplicate element
	
	
	for(i=0; i<N;i++)
	{
		for(j=1+i; j<N;j++)
		{
			if(arr[i]==arr[j])
			{
				
				printf("%d\n", arr[j]);
				
			}
			
			
		}
	}
	printf("\n\n");
	///sum of a duplicate element

	

				
	
	
	return 0;
}

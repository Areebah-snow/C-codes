#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=3;
	int array[a] ;
	int array2[a];
	int i;
	for(i=0; i<3; i++ )
	{
	  ////array[3] = array2[3];
	  
	 printf("\n Enter 3 values :");
	 
     scanf("%d", &array[i]);
	}
	for(i=0; i<3; i++ )
	{
	  array[i] = array2[i];
	  
	  printf("First array \t==\t second array");
	  
    
	}
	for(i =0; i<a ; i++ )
	{
		printf("%d \t == \t %d\n ", array[a], array2[a]);
	}
	
	
		return 0;
}

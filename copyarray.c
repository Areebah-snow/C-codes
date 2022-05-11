#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=3;
	int array[a] ;
	int array2[a];
	int i;
	for(i=0; i<a; i++ )
	{
	 
	  
	 printf("\n Enter 3 values :");
	 
     scanf("%d", &array[i]);
     ////copy array down
	}
	
	for(i=0; i<a; i++ )
	{
	  array[i] = array2[i];
	  
	  printf("First array[%d] \t==\t second array[%d]\n", i,i);
	  
    
	}
	for(i =0; i<a ; i++ )
	{
		printf("%d \t == \t %d\n ", array[i], array2[i]);
	}
	
	
	return 0;
}

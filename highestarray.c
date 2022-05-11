#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	///initialize an array
   int ary[10];
   int i, total, high;
   for(i=0; i<10; i++)
   {
       printf("\n Enter value:" );
       scanf("%d",&ary[i]);
   }
   ///initializing highest
        high = ary[0];
   ////looping through the array     
       for(i=1; i<10; i++)
	   {
	   	////Comparing array element with max
             if(ary[i] > high)
             high = ary[i];
 	
	   }
	   printf("\nLargest value entered was %d", high);
	return 0;
}

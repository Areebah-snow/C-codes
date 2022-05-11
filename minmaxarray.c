#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
   int ary[5];
   int i, total, high,low;
   for(i=0; i<5; i++)
   {
       printf("\n Enter value:" );
       scanf("%d",&ary[i]);
   }
        high = ary[0];
        low = ary[0];
       for(i=1; i<5; i++)
	   {
             if(ary[i] > high)
             high = ary[i];
             if(ary[i] < low)
             low = ary[i];
 	         
	   }
	    printf("\nLowest value entered was %d", low);
	   printf("\nHighest value entered was %d", high);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		
   /*int ary[5];
   int i, total, low;
   for(i=0; i<5; i++)
   {
       printf("\n Enter value:" );
       scanf("%d",&ary[i]);
   }
   
       for(i=1; i<5; i++)
	   {
	   	   int result = ary[i]%2;
             if(result < 0)
			 {
			 	printf("%d", i);
			 }
        }*/
        
        int ary[20];
        int arrnumber,i,count, d,x;
        printf("Enter number of element in the array: \n");
        scanf("%d", &arrnumber);
        printf("Enter elements :");
        for(i = 0; i<arrnumber; ++i)
        {
        	scanf("%d", ary[i]);
        	printf("Duplicates are :\n");
        	for( i= 0; i<arrnumber; ++i)
			{
				count = 0;
				d = ary[i];
				x = i;
			 for(i=0; i<arrnumber; ++i)
			 {
			 	if(d == ary[i])
			 	++count;
			 }
			 i=x;
			 if(count > 1)
			 {
			 	printf("%d = %d times\n", d, count);
			 }
			}
		}
        
	return 0;
}

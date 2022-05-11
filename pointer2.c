#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int b[] = {1,2,3,4,5,6,7};
	int *p = b;
    int *q = &b[6];
    
    printf("Increment\n");
    printf("%d\n",*++p);
	printf("%d\n",*++p);
	printf("%d\n",*++p);
	printf("%d\n",*++p);
	printf("%d\n",*++p);
	printf("%d\n",*++p);
			
	///printf("%d\n", *p);
	printf("Decrement\n");
	printf("%d\n", *q--);
	printf("%d\n", *q--);
	printf("%d\n", *q--);
	printf("%d\n", *q--);
	printf("%d\n", *q--);	
		return 0;
} 

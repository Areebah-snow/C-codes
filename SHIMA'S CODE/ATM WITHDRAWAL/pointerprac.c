#include <stdio.h>
#include<stdlib.h>

int main()
{
   /* int x=9;
    int *p = &x;
    

    printf("%d",*p);

    /////
\/////////C substraction pOINTER
//////For 64-bit int variable, it will subtract 4 * number.
//////FOR 32 its 2*number
    int number=50;        
    int *p;//pointer to int      
    
    p=&number;//stores the address of number variable        
    printf("Address of p variable is %u \n",p);        
    p=p-3; //subtracting 3 from pointer variable    
    printf("After subtracting 3: Address of p variable is %u \n",p);        */


    int a=50;
    int *p;
    int **doublep;

    p=&a;//points to address of a;
    doublep= &p;//points to address of pointer p;
    
    printf("Address of a using intial pointer= %u\n", p);
    printf("Address of a using double pointer= %u", doublep);
return 0;  
}
#include <stdio.h>
#include <stdlib.h>


int swap()
{
    int a,b,c=0;
    printf("Enter a first value: \t");
    scanf("%d",&a);
    printf("Enter a second value: \t");
    scanf("%d", &b);
     printf("%d is first\n%d is second",a,b);
    a=c;
    b=a;
    c=b; 

    printf("\n%d is new first\n %d is new second ",a,b);
}
int main(){
    swap();
}
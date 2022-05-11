#include <stdio.h>
#include <stdlib.h>

int even()
{
    int a,b;
    printf("Enter a value: \t");
    scanf("%d", &a);
       
    b = a%2;
    if(b==0)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
int main(){
   even();
}
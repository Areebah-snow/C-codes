#include <stdio.h>
#include <stdlib.h>

int natural( int b)
{
    for(int i=0; i<=b; i++)
    {
        int sum;
        sum +=i;
        printf("%d " ,sum);
    }
}

int main(){
    int range;
    printf("Enter a value range: \t");
    scanf("%d",&range);
    
    natural(range);
    
}
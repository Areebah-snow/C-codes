#include <stdio.h>
#include <stdlib.h>

int odd(int x)
{
    
    for(int i=1; i<=x; i++)
    {

        int rem;
        rem= i% 2;
        if(rem==1)
        {
            int sum=0;
            sum +=i;
        printf("%d " ,sum);
        }
       
       
    }
}


int main()
{
      int range;
    printf("Enter a value range: \t");
    scanf("%d",&range);
    
    odd(range);
}
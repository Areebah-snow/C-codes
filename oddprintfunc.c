#include <stdio.h>
#include <stdlib.h>

int oddprint()
{
    int i;
    for(i=1; i<=100; i++)
    {
        int rem;
        rem= i%2;
        if(rem==1)
        {
            printf("%d ",i);
        }
       
    }
}
int main()
{
    oddprint();
}
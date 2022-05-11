#include<stdio.h>
#include<stdlib.h>

int evensum()
{
       int value;
       printf("Please enter the maximum limit value: \t");
       scanf("%d", &value);


       printf("Even number from 0 to %d are: ", value);
       for(int i=0; i<=value; i++)
       {
           if(i%2 ==0)
           {
               printf("%d", i);
               int sum;
               sum+=i;
           }
       }
       printf("Sum of all numbers up to %d = %d", value,sum);
}
int oddsum()
{
      int value;
       printf("Please enter the maximum limit value: \t");
       scanf("%d", &value);


       printf("Odd number from 0 to %d are: ", value);
       for(int i=0; i<=value; i++)
       {
           if(i%2 ==1)
           {
               printf("%d", i);
               int sum;
               sum+=i;
    
           }
       }
       printf("Sum of all numbers up to %d = %d", value,sum);
}

int main()
{
       evensum();
       oddsum();
}
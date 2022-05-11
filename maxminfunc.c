#include<stdio.h>
#include<stdlib.h>

int minmax(int a, int b)
{
      if(a>b)
      {
          printf("%d is higher",a);
      }
      else
      {
            printf("%d is higher",b);
      }
}

int main()
{
    int x,y;
    printf("Enter first value: \t");
    scanf("%d", &x);
    printf("Enter first value: \t");
    scanf("%d", &y);
    minmax(x,y);

}
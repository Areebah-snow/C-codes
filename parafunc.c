#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    int result;
    result = a+b;
}
int sub(int a, int b)
{
    int result;
    result = a-b;
}
int divide(int a, int b)
{
    int result;
    result = a/b;
}
int mul(int a, int b)
{
    int result;
    result = a*b;
}

int main()
{
    int val1, val2;
    printf("Enter first value : \t");
    scanf("%d", &val1);
    printf("Enter second value : \t");
    scanf("%d", &val2);
       int a,b,c,d;
     a=add(val1,val2);
      b=sub(val1,val2);
      c=divide(val1,val2);
      d=mul(val1,val2);
      printf("sum is %d\n",a);
      printf("sub is %d\n",b);
      printf("division is %d\n",c);
      printf("mul is %d\n",d);

}

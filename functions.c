#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Addition()
{
    int num, num2;
    printf("\t\t----ADDITION------\n");
    printf("Enter a first value: \t");
    scanf("%d", &num);
    printf("Enter a second value: \t");
    scanf("%d", &num2);
    
    int add = num+num2;
    printf("%d",add);
}
int Subtraction()
{
    int num, num2;
     printf("\t\t----SUBTRACTION------\n");
    printf("Enter a first value: \t");
    scanf("%d", &num);
    printf("Enter a second value: \t");
    scanf("%d", &num2);
    
    int sub = num-num2;
    printf("%d",sub);
}
int Multiplication()
{
    int num, num2;
     printf("\t\t----MULTIPLICATION------\n");
    printf("Enter a first value: \t");
    scanf("%d", &num);
    printf("Enter a second value: \t");
    scanf("%d", &num2);
    
    int mul = num*num2;
    printf("%d" ,mul);
}
int Division()
{
    int num, num2;
     printf("\t\t----DIVISION------\n");
    printf("Enter a first value: \t");
    scanf("%d", &num);
    printf("Enter a second value: \t");
    scanf("%d", &num2);
    
    int div = num/num2;
    printf("%d",div);
}
int SquareRT()
{
    int sq,value; 
     printf("\t\t----SQUAREROOT------\n");
    printf("Enter a value: \t" );
    scanf("%d", &value);
    sq=sqrt(value);

    printf("The squareroot of %d  is %d", value, sq);
}

int square(){
    int value, sq;
    printf("\t\t----SQUARE------\n");
      printf("Enter a value:\t");
    scanf("%d", &value);
    sq=value*value;

     printf("The square of %d  is %d", value, sq);

}
int main(){
    Addition();
    printf("\n");
    
    Subtraction();
    printf("\n");

    Division();
    printf("\n");
    
    Multiplication();
     printf("\n");

     SquareRT();
      printf("\n");

      square();
}
#include<stdio.h>
#include<stdlib.h>

int cube(int value)
{
    
    int result = value*value*value;
}

int main()
{   
    int x; 
    printf("Enter value:");
    scanf("%d",&x);

    int Cube=cube(x);
    printf("%d is the value of %d", x ,Cube);
}
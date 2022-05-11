#include <stdio.h>


int main()
{
    printf("Welcome to Democalc\n");  
    int i;
    for(i = 0; i>=0; i++)
    {

       printf(" Operations\n");
       printf("1.Addition");
       printf("2.Substraction");
       printf("3.Division");
       printf("4. Multiplication");
       printf("5. Modulus");
      int a,fnum,secnum,result;
       printf("Select your operation with the use of the listed numbers\n");
       scanf("%d", &a);
      if(a==1)
      {
         printf("Enter first value:");
         scanf("%d",&fnum);
         printf("Enter second value");
         scanf("%d",&secnum);
         result= fnum+secnum;
         printf("%d", result);
      }
      else if(a==2)
      {
         printf("Enter first value:");
         scanf("%d",&fnum);
         printf("Enter second value");
         scanf("%d",&secnum);
         
         if(a>b)
         {
         result= fnum-secnum;
         printf("%d", result);
         }
         else
         {
            printf("%d", secnum-fnum);
         }
      }
       if(a==3)
      {
         printf("Enter first value:");
         scanf("%d",&fnum);
         printf("Enter second value");
         scanf("%d",&secnum);
         result= fnum/secnum;
         printf("%d", result);
      }
       if(a==4)
      {
         printf("Enter first value:");
         scanf("%d",&fnum);
         printf("Enter second value");
         scanf("%d",&secnum);
         result= fnum*secnum;
         printf("%d", result);
      }
       if(a==5)
      {
         printf("Enter first value:");
         scanf("%d",&fnum);
         printf("Enter second value");
         scanf("%d",&secnum);
         result= fnum%secnum;
         printf("%d", result);
      }
      printf("Do you wish to perform another operation : \n Select 1 for 'Yes'\n Select 2 for 2 'No'");
      int choice;
      scanf("%d", &choice);
      if(choice==1){
          printf("%d", i)
      }
      else{
          printf("Thanks for using Democalc.")
      }
       
    }
}

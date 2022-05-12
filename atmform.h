#include  <stdio.h>
#include <stdlib.h>

float withdrawal(float amount ,float deposit, float order)
{
    
  
    if(amount > deposit)
    {
        printf("Insufficient funds");
    }
    
    else if(amount == 8)
    {
        float order;
        printf("Enter desired amount:\n");
        scanf("%f", &order);
        if(order > amount)
        {
            printf("Insufficient funds!");
        }
        else
        {
             deposit -=amount;
            printf("Withdraw is Successful\n");
            printf("Current Balance= %.2f\n",  deposit);
        }
    }
    else
    { 

         deposit = deposit - amount;
         printf("Withdraw Successful\n");    
         printf("Current Balance= %.2f\n", deposit);
        
    }
  return deposit;
}

float Deposit(float newdeposit, float initialDeposit)
{

    initialDeposit +=newdeposit;

    printf("Current Balance = %.2f", initialDeposit);
    return initialDeposit; ///returns function
}

//////////////BALANCE FUNCTION///////////////
float Balance(float balance)
{
       
      printf("Balance =%.2f", balance);
}
///////////////////////PIN FUNCTION/////////////////
int PIN(int pin, int actualPin)
{
   
    int newpin;
  ///the secloop loops the code again if theres an error with the input on previous pin
    int secloop;
    for(secloop = 0; secloop< 3; secloop++)
    {
    printf("\t\t----You have selected Change PIN-----\n");
    printf("Enter previous PIN \n");
    scanf("%d", &pin);
     
    if(pin != actualPin )
    {
        printf("\n\nIncorrect! Please try again\n");
       continue;
    }
    else{
        
        printf("You have entered the correct PIN.\n\n");
        break;
    }
    }
//////this inspects if the PIN inputted is correct ,the program proceeds
 
    if(pin == actualPin)
    {
     int j;
     ////CHECKS if np is same as op to loop
    for(j=0; j<3; j++){
        printf("Enter new pin\n");
        scanf("%d", &newpin);
     if(newpin == pin )
     {
         printf("\nNew PIN cannot be the same as current PIN.\n Please choose another sequence\n\n");
          continue;
     }
     if(newpin < 1000 || newpin > 9999)
     {
        ("\n new PIN cannot be more or less than 4 digits ");
        continue;
     }
     else{
         printf("Your new PIN is %d", newpin);
        printf("\n\nNew PIN confirmed\n");
      
        break;
         }
    }
    }
    return newpin;
}
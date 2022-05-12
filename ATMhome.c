#include <stdio.h>
///#include <stdlib>
#include "atmform.h"

/// oid deposit(float DepositMoney);

   float DepositMoney;
    float amount;
   /// float deposit;
    float order;
    float newDeposit;
    float mainBalance;
   
    
int main()
{
    
    int defaultPin = 1234;

   
    printf("Input initial deposit:\n");
    scanf("%f", &DepositMoney); /// store deposit input
    printf("Current Balance = %.2f\n", DepositMoney);
     int UserPin = defaultPin;
    for (int i=0; i<10; i++)////first for loop to loop entire program if another transaction is requested
    {
    
   ////second for loop to loop the request for PIN if user input doesnt match fixed PIN
    for (int j = 0; j < 6; j++)
    {
        printf("Enter  PIN\n");
        scanf("%d", &UserPin);

        if (UserPin !=  defaultPin)
        {

            printf("Incorrect PIN!\n");
            continue;
        }
        else
        {
            break;
        }
    }///end for PIN request loop

int transactionChoice;
/////////////MENU
printf("--------------SELECT YOUR TRANSACTION-------------------\n");
printf("1.WITHDRAWAL\t\t\t");
printf("2.CHECK BALANCE\n");
printf("3.CHANGE PIN\t\t\t");
printf("4. DEPOSIT MONEY\n");

scanf("%d", &transactionChoice);

   while (transactionChoice < 5)///while loop to negate continuation of code if condition is not met
   {
    if (transactionChoice == 1)
    {
        printf("\t\t\t\t--------Select amount----------- \n");
        printf(">>>1000\t\t>>>2000\n>>>3000\t\t>>>5000\n>>>10000\t>>>15000\n>>>20000\t>>>Enter '8' for other\n");
        scanf("%f", &amount);
        DepositMoney = withdrawal(amount,DepositMoney, order);
    }
    else if(transactionChoice==2)
    {
        Balance(DepositMoney);
    }
    else if(transactionChoice==3)
    {
        int newpin = PIN(UserPin, defaultPin);

        defaultPin = newpin;
        printf("New PIN is %d", newpin);
        printf("User PIN is %d", defaultPin);
        
    }
    else if(transactionChoice==4)
    {
        
        printf("Enter amount you wish to deposit: \n");
        scanf("%f", &newDeposit);
        DepositMoney = Deposit(newDeposit, DepositMoney);
    }
     break;
   }
   
    int  answer;
    printf("\nDo you wish to perform another transaction?\n 1.Yes \t2.No\n");
    scanf("%d", &answer);

    if(answer== 1)
    {
      
        continue;
    }
    else
    {
        printf("\nThank you for using Rava Bank");
        break;
    }  
   }///end of first for loop
}



/*for (int k = 0; k < 6; k++)*/

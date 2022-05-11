/////HEADER FILE

#include <stdio.h>
#include <stdlib.h>
int withdraw()
{
    int amountchoice;
    printf("Select amount you wish to withdraw\n");
    scanf("%d", &amountchoice);

    printf("1. $1000\t\t\t2. $2000\n3. $3000\t\t\t4. $5000\n5. $10000\t\t\t6. $15000\n7. $20000\t\t\t8. Other\n ");
    scanf("%d", &amountchoice);

    if(DepositMoney> 1000 && amountchoice ==1)
    {
        printf("You have made a withdrawal of $1000");

       
				/*DepositMoney = DepositMoney - withdraw;
				printf("\n\n PLEASE COLLECT CASH");
				printf("\n YOUR CURRENT BALANCE IS%lu", amount);*/
    }

}


//////////PIN
int PIN()
{

    int i,pin,oldpin,newpin;
 

  ///the secloop loops the code again if theres an error with the input on previous pin
    int secloop;
    for(secloop = 0; secloop< 30; secloop++){
    printf("\t\t----You have selected Change PIN-----\n");
    printf("Enter previous PIN \n");
    scanf("%d", &pin);
     
     
    
    if(pin != oldpin )
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
 
    if(pin == oldpin)
    {
     int j;
     ////CHECKS if np is same as op to loop
    for(j=0; j<10; j++){
        printf("Enter new pin\n");
        scanf("%d", &newpin);
     if(newpin == oldpin )
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
        printf("\n\nNew PIN confirmed\n");
        break;
         }
    }
    }
    printf("Thank you for using Froia Bank");
    return 0;
}
}
///int Balance()
///{
    
////}
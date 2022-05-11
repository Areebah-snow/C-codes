#include<stdio.h>
#include<stdlib.h>

int withdrawal()
{
    //Intitial screen
int a,amt_2, choice;
for (int i= 0; i < 4; i++)
{
printf("\t\t\t-------------------WITHDRAWAL--------------------------------\n");

printf("Select the account you want to withdraw from\n");
printf("\n>>>>1.SAVINGS\n>>>>2.CURRENT\n>>>>3.CREDIT\n\n");
scanf("%d",&choice);

//The initial screen will loop if given the wrong input



//Switch for all 3 accounts
switch (choice)
{
case 1:
    AmountWithdraw();
    break;

case 2:
     AmountWithdraw();
    break;

case 3:
     AmountWithdraw();
    break;

default:
printf("OPTION NOT FOUND");
    break;
}
}



//First function; used to select the amount to withdraw 
int AmountWithdraw()
{
    int amt_1;
    printf(" >500(1)\t\t\t\t>10,000(5)\n >1,000(2)\t\t\t\t>20,000(6)\n >2,000(3)\t\t\t\t>50,000(7)\n >5,000(4)\t\t\t\t>SELECT AMOUNT(8)\n ");
   printf("Please select the amount you wish to withdraw: ");
   scanf("%d",&amt_1);
   
   if (amt_1<=7)
   {
        ScreenProcess(); 
   }
   else if (amt_1==8)
   {
       AmountInput();
   }
   
   
}

//Second function; used for the processing screen 
int  ScreenProcess()
{
    int a;

     printf("PROCESSING");

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < sleep(1); j++)
        
            a = j;
        
        printf(".");
    }
    
    printf("\nPLEASE TAKE YOUR CASH.");
}

//Third function; used to manually input an amount to withdraw
int AmountInput()
{
    int amt_2;
    printf("Please enter the amount which you want to withdraw\nPLEASE NOTE THE AMOUNT MUST BE A MULTIPLE OF 500: ");
   scanf("%d",&amt_2);
   int mult = amt_2 % 500;

  
   

 if (mult==0)
 {
       WS_2();
 }
 else
     printf("AMOUNT WAS NOT A MULTIPLE OF 500\n");
    
 
    
 

}
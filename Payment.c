#include <stdio.h>
#include <stdlib.h>

int DSTV()
{
    
    printf("\t\t---------SELECT OPTIONS-----------\n");
    printf("1.>>>>COMPACT\n2.>>>>COMPACT PLUS\n");
    printf("3.>>>>HD\n4.>>>>YANGA\n");

    int choice;
    scanf("%d", &choice);
       int paychoice;
    
    switch (choice)
   ///loop this
        case 1:
              printf("Make payment of #2000\n1.YES\t\t 2.NO");
             
              scanf("%d", &paychoice);
               printf("You have made a payment of #2000");
              break;
        case 2:
             printf("Make payment of #5000\n1.YES\t\t 2.NO");
             
              scanf("%d", &paychoice);
               printf("You have made a payment of #5000");
              break;
        
        case 3:
             printf("Make payment of #10000\n1.YES\t\t 2.NO");
              
              scanf("%d", &paychoice);

            printf("You have made a payment of #10000");
              break;
    
    
    case 4:
              printf("Make payment of #1650\n1.YES\t\t 2.NO");
            
              scanf("%d", &paychoice);
               printf("You have made a payment of #1650");
        break;
    
    default:
          printf("ERROR! Unhandled Exception!");
         break;
    }
    

}

int electricity()
{
    printf("\t\t---------SELECT OPTIONS-----------\n");
    printf("1.>>>>DAILY PAYMENT\n2.>>>>WEEKLY PAYMENT\n");
    printf("3.>>>>MONTHLY PAYMENT\n4.>>>>YEARLY PAYMENT\n");
    int choice;
    scanf("%d", &choice);

    int paychoice;
    
    switch (choice)
   ///loop this
        case 1:
              printf("Make payment of #20\n1.YES\t\t 2.NO");
             
              scanf("%d", &paychoice);
              break;
        case 2:
             printf("Make payment of #500\n1.YES\t\t 2.NO");
             
              scanf("%d", &paychoice);
              break;
        
        case 3:
             printf("Make payment of #1000\n1.YES\t\t 2.NO");
              
              scanf("%d", &paychoice);
              break;
    
    
    case 4:
              printf("Make payment of #1650\n1.YES\t\t 2.NO");
            
              scanf("%d", &paychoice);
        break;
    
    default:
          printf("ERROR! Unhandled Exception!");
         break;
    }
    

}

int main()
{
   /// for(int i =0; i<4; i++)
    printf("\t\t------MAKE PAYMENT-------\n");
    printf("1.>>>>DSTV\n2.>>>>ELECTRICITY BILLS\n");
    printf("3.>>>>WATER BILLS\n4.>>>>WIFI BILLS\n");
    printf("Select an option\n");
    int choice;
    scanf("%d",&choice);
     


    switch(choice)
    {
        case 2:
             
             electricity();
              
    }
}



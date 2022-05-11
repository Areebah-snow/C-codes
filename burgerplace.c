#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("WELCOME TO APTECH CAFETERIA\n");
	char food;
	printf("Enter your food choice\n");
	printf("\t\t'B' for Burger\n");
	printf("\t\t'F' for French fries\n");
	printf("\t\t'P' for Pizza\n");
	printf("\t\t'S' for Sandwich\n");
	scanf("%c", &food);
	
	int quantity;
	printf("Enter quantity of food you would  like to order\n");
	scanf("%d",&quantity);
	
	switch(food)
	{

		case 'B':
		
	    printf("Cost of 1 burger = N200\n");
		printf("You ordered %d Burger(s)\n",quantity);
		printf("Your total cost is N%d\n", 200*quantity );
		break;
		
		case 'F':
		
	    printf("Cost of 1 pack of French fries = N50\n");
		printf("You ordered %d pach of French fries\n",quantity);
		printf("Your total cost is N%d\n", 50*quantity );
		break;
		
		case 'P':
		
	    printf("Cost of 1 pizza = N500\n");/////Amen
		printf("You ordered %d box(s) of Pizza\n",quantity);
		printf("Your total cost is N%d\n", 500*quantity );
		break;
		
		case 'S':
		
	    printf("Cost of 1 Sandwich = N150\n");
		printf("You ordered %d Sandwich(s)\n",quantity);
		printf("Your total cost is N%d\n", 150*quantity );
		break;
		
		
		default:
			printf("Server not responding...");
	}
	return 0;
}

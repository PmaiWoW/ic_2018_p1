#include <stdio.h>
#include "ic2.h"


int main (){

	// Variables.
	int amount = 0, number = 1;
	int balance = 100, currentbet = 0;
	char op;

	// Informing the player on how much money he has.
	printf(" - You have 100€ to make DAAAAAAAAAAAAAAAAAAAM bet. ;P\n  ");
	balance = 100;
	
	// Available options for player.
	printf(" \n\tb <amount> - amount of money want to bet. ");
	printf(" \n\tn <number> - bet on a specific number - pays 35 to 1. ");
	printf(" \n\te - bet on even number - pays 2 to 1. ");
	printf(" \n\to - bet on odd number - pays 2 to 1. ");
	printf(" \n\tr - roll. ");
	printf(" \n\th - help. ");
	printf(" \n\ts - show balance. ");
	printf(" \n\tc - cashout and go home.\n ");

	// Player must chose an option.
	printf(" \n\tSelect option:  ");
	
	while(1) {

    		scanf("%c", &op);

        	switch(op){

			case 'b':
			// Player must bet between 0 to 100.
        		printf(" - How much do you want to bet, Sr.?\n  ");
        		scanf("%d", &amount);

			if(op == 'b') {
				nCase();
			} else if (op == 'n') {
				rCase();
			} else if (op == 'r') {
				hCase();
			} else if (op == 'h') {
				sCase();
			} else if (op == 's') {
				sCase();
			}

			break;
			
			case 'n':
				// Now the player will choose the perfect number to bet.
				printf(" - Choose a number between 1 to 36.\n  ");
        			scanf("%d", &number);
			
			break;
                    	    
            		default:
            			printf(" - ERROR! ERROR! Sr.!\n  ");
		}
	}
	return 0;
}

# include <stdio.h>

int main (){


	// Variables.
	int amount = 0, number = 1;
	char op;

	// Informing the player on how much money he has.
	printf(" - You have 100€ to a DAAAAAAAAAAAAAAAAAAAM bet. ;P\n  ");

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
	scanf("%c", &op);

    while(1){
    	// Inside the option "b", you got to say how mush you will bet.
    	if(op == 'b'){
    	    printf(" - How much do you want to bet, Sr.?  ");
  	    	scanf("%d", &amount);
    	} 
    	// Player need to bet first.
    	else if (op != 'b') {
    		printf(" - You need to bet first dummy... º-º \n  ");
    		printf(" - Click 'b' \n  ");
    		
// como ir para traz sem desligar o terminal????? 0.0
    	} 
    	// Chooes a number between 1 to 35.
    	else if (op == 'n'){
    	    printf("  Choose a number between 1 to 35.  ");
    	    scanf("%d", &number );
    	} 	
    }
}

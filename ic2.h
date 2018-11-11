#include <stdio.h>

int amount = 0, number = 1;
int balance = 100, currentbet = 0;
char op;

void bCase() {
	
	// If the amount is more than you have, you can't bet.
	if(amount > balance){
        	printf(" - Not possible... HUM!\n  ");
        }
	// If the amount is equal or inferior to the balance your able to bet.
        else if(amount <= balance){
        	printf(" - Good bet Sr.! Good, good! *****\n  ");
        	currentbet = amount + currentbet;
        }
	
	// With the bet done, now you can choose what will you do next.
	printf(" - What do you wish to choose now Sr.? o0\n  ");
	scanf("%c", &op);
}

void nCase() {
	
	// It will check the number, if it is lower than 36, and higher than 1.
	if(number <= 36 && number >= 1){
	printf("%d", number);	
	}
	// Player need to bet first.
	else if(amount == 0){
		printf(" - You need to bet first dummy... º-º \n  ");
		printf(" - Click 'b' \n  ");
	}
}

void rCase() {
	// Verification if the player have already bet.
	if(amount > balance && amount <= balance){
        	scanf("%d", &amount);
	}
}

void hCase() {

	// Explantion of the game.
	printf(" - 1st choose 'b' to bet between 0 to 100.\n  ");

	printf(" - NOW only if you made a bet you may choose 3 conditions, 'n', 'e', 'o'\n");

	printf(" - 'n' -> You will choose numbers between 1 to 36.\n  ");
	printf(" - 'e' -> You will bet on even numbers.\n  ");
	printf(" - 'o' -> You will bet on odd numbers.\n  ");

	printf(" - 'r' -> The table will roll to get a random number.\n  ");
	printf(" - 'h' -> This is your SOS, in case you get lost in here.\n  ");
	printf(" - 's' -> It only show's your balances throughout the game. If you have one.\n  ");
	printf(" - 'c' -> You ain't got money out, OUT OF HERE!\n  ");

        
}

void sCase() {

	// It only show's your balance in the moment.
	printf(" - Your balance Sr. %d \n  ", balance);
}

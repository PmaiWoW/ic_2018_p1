#include <stdio.h>
#include <time.h> // Library needed to use the time() function
#include <stdlib.h> // Library needed to use the rand() function

char option; // Variable that will keep the input for the option
int balance = 100, currentbet = 0, chosenNumber = 0, number = 0; // Variables
// that keep the player's initial balance, current bet, starting at 0, and the
// variable that will save the player's chosen number to bet
char betType = '0'; // Variable that will serve to check which kind of bet the
// player chose

//srand((unsigned int) time(NULL));


// Function for the N option
void nCase () {
 		
 	// Asks the user the number they want to bet on
	printf("What number do you want to bet on? (Max is 36) \n");
	// Will save the input on the option variable
	scanf("%d", &chosenNumber);

	// Will check if the input is less of equal to 36, and bigger that 1
	if(chosenNumber <= 36 && chosenNumber >= 1) {
		// Will inform the user which number they picked
		printf("You're betting on number: %d\n", chosenNumber);
	}
	// If the number chosen does not match the conditions, it'll exibihit
	//the error message
	else {
		printf("You little sneak! Choose again.\n");
	}	
}

// Function for the E option
void eCase() {

 	// Asks the user the number they want to bet on
	printf("Even number? Alright. What number do you want to bet on? (2-1) \n");
	// Will save the input on the option variable
	scanf("%d", &chosenNumber);

	// Will check if the input is an even number
	if(chosenNumber % 2 == 0) {
		// Will inform the user which number they picked
		printf("You're betting on number %d\n", chosenNumber);
	}
	// If the number chosen does not match the conditions, it'll exibihit the
	// error message
	else {
		printf("Hey! You chose even numbers, now you have to comply!\n");
	}
}


// Function for the O option
void oCase() {

 	// Asks the user the number they want to bet on
	printf("Odd number? Alright. What number do you want to bet on? (2-1) \n");
	// Will save the input on the option variable
	scanf("%d", &chosenNumber);

	// Will check if the input is an odd number
	if(!(chosenNumber % 2 == 0)) {
		// Will inform the user which number they picked
		printf("You're betting on number %d\n", chosenNumber);
	}
	// If the number chosen does not match the conditions, it'll exibihit
	// the error message
	else {
		printf("Hey! You chose odd numbers, now you have to comply!\n");
	}
}


void rCase() {

	printf("Alright, let's get ROLLing\n");

	if (betType == 'n') { 

		nCase();
		number = rand();

        printf("And the winning number isss......... %d!\n", number);


        if (chosenNumber == number) {
        	currentbet = currentbet * 35;
        	printf("Hey! Congrats my guy, you just won %d euros!\n", currentbet);
        	balance = currentbet + balance;
        	currentbet = 0;
        	printf("Your current balance is: %d euros\n", balance);
        	printf("Current bet is: %d euros\n", currentbet);
        }
        else {
        	printf("... Shucks... Better luck next time, though!");
        	balance = balance - currentbet;
        	currentbet = 0;
        	printf("Your current balance is: %d euros\n", balance);
        	printf("Your current bet is: %d euros\n", currentbet);
        }
	}

	else if (betType == 'e') {

		number = rand();
		number = number % 2 == 0;
        printf("And the winning number isss......... %d!\n", number);
        

        if (chosenNumber == number) {
        	currentbet = currentbet * 2;
        	printf("Hey! Congrats my guy, you just won %d euros!\n", currentbet);
        	balance = currentbet + balance;
        	currentbet = 0;
        	printf("Your current balance is: %d euros\n", balance);
        	printf("Current bet is: %d euros\n", currentbet);
        }
        else {
        	printf("... Shucks... Better luck next time, though!");
        	balance = balance - currentbet;
        	currentbet = 0;
        	printf("Your current balance is: %d euros\n", balance);
        	printf("Your current bet is: %d euros\n", currentbet);
        }
	}

	else if (betType == 'o') {

		number = rand();
		number = !(number % 2 == 0);
        printf("And the winning number isss......... %d!\n", number);

        if (number == number) {
        	currentbet = currentbet * 2;
        	printf("Hey! Congrats my guy, you just won %d euros!\n", currentbet);
        	balance = currentbet + balance;
        	currentbet = 0;
        	printf("Your current balance is: %d euros\n", balance);
        	printf("Current bet is: %d euros\n", currentbet);
        }
        else {
        	printf("... Shucks... Better luck next time, though!");
        	balance = balance - currentbet;
        	currentbet = 0;
        	printf("Your current balance is: %d euros\n", balance);
        	printf("Your current bet is: %d euros\n", currentbet);
        }
	}

	else {
		printf("Uh-oh... Something went wrong here...\n");
	}
}

void hCase () {

	printf("Can't you read what was written in the beginning...?\n"
			"Fine! Before you can do anything, you have to bet. To do"
			" that, choose 'b'. Next you can choose what kind of bet you"
			" want. 'n' for 1-36 and if you win, you get 35x the amount"
			" you put down. 'e' for even numbers, and 'o' for odd."
			" You get double the amount. Once you're done playing, just"
			"choose 'c' and we'll give you your total. Capiche?\n");
}
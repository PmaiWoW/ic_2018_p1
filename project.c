#include <stdio.h>
#include <time.h> // Library needed to use the time() function
#include <stdlib.h> // Library needed to use the rand() function

char option; // Variable that will keep the input for the option
int balance = 100, currentbet = 0, chosenNumber = 0, number = 0; // Variables
// that keep the player's initial balance, current bet, starting at 0, and the
// variable that will save the player's chosen number to bet
char betType = '0'; // Variable that will serve to check which kind of bet the
// player chose


// Function for the N option
void nCase () {
 		
 		
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


// Function for the R option
void rCase() {

	printf("Alright, let's get ROLLing\n");

	// This will check for numbers between 1-36
	if (betType == 'n') { 
		// Will generate a random number between 1-36
		number = rand() % (36 + 1 - 0) + 0;

		printf("And the winning number isss......... %d!\n", number);


		// Will check if the generated number matches the player's
		if (chosenNumber == number) {
			// If it matches, it will give the player 35x the value they placed
			currentbet = currentbet * 35;

			printf("Hey! Congrats my guy, you just won %d euros!\n", currentbet);
        	
			// Will update the balance and current bet
			balance = currentbet + balance;
			currentbet = 0;
        	
			// Will show the player how much they have
			printf("Your current balance is: %d euros\n", balance);
			printf("Current bet is: %d euros\n", currentbet);
		}
		
		// If it doesn't match
		else {
			printf("... Shucks... Better luck next time, though!\n");
        	
			// Will update the balance and current bet
			balance = balance - currentbet;
			currentbet = 0;
        	
			// Will show the player how much they have
			printf("Your current balance is: %d euros\n", balance);
			printf("Your current bet is: %d euros\n", currentbet);
		}
	}

	// This will check for even numbers
	else if (betType == 'e') {
		// Will generate a random even number
		number = 2 * (2 + rand() % (36 - 2 + 1));

		printf("And the winning number isss......... %d!\n", number);

		// Will check if the generated number matches the player's
		if (chosenNumber == number) {
			// If it matches, it will give the player double the amount they placed
			currentbet = currentbet * 2;
			printf("Hey! Congrats my guy, you just won %d euros!\n", currentbet);

			// Will update the balance and current bet
			balance = currentbet + balance;
			currentbet = 0;
        	
			// Will show the player how much they have
			printf("Your current balance is: %d euros\n", balance);
			printf("Current bet is: %d euros\n", currentbet);
		}
		
		// If it doesn't match
		else {
			printf("... Shucks... Better luck next time, though!\n");

			// Will update the balance and current bet
			balance = balance - currentbet;
			currentbet = 0;
        	
			// Will show the player how much they have
			printf("Your current balance is: %d euros\n", balance);
			printf("Your current bet is: %d euros\n", currentbet);
		}
	}

	// This will check for odd numbers
	else if (betType == 'o') {
		// Will generate a random odd number
		number = 2 * (2 + rand() % (36 - 2 - 1));

		printf("And the winning number isss......... %d!\n", number);

		// If it matches, it will give the player double the amount they placed
		if (number == number) {
			currentbet = currentbet * 2;
			printf("Hey! Congrats my guy, you just won %d euros!\n", currentbet);

			// Will update the balance and current bet
			balance = currentbet + balance;
			currentbet = 0;

			// Will show the player how much they have
			printf("Your current balance is: %d euros\n", balance);
			printf("Current bet is: %d euros\n", currentbet);
		}
		
		// If it doesn't match
		else {
			printf("... Shucks... Better luck next time, though!\n");
        	
			// Will update the balance and current bet
			balance = balance - currentbet;
			currentbet = 0;
        	
			// Will show the player how much they have
			printf("Your current balance is: %d euros\n", balance);
			printf("Your current bet is: %d euros\n", currentbet);
		}
	}

	// Error message
	else {
		printf("Uh-oh... Something went wrong here...\n");
	}
}

// Function for the H option
void hCase () {

	
}

#include <stdio.h>
#include <time.h> // Library needed to use the time() function
#include <stdlib.h> // Library needed to use the rand() function

char option; // Variable that will keep the input for the option
int balance = 100, currentbet = 0, number = 0; // Variables that keep the
// player's initial balance, current bet, starting at 0, and the variable that
// will save the player's chosen number to bet
char bet_type = '0'; // Variable that will serve to check which kind of bet the
// player chose

//srand((unsigned int) time(NULL));


// Function for the N option
void nCase () {
 		
 	// Asks the user the number they want to bet on
	printf("What number do you want to bet on? (Max is 36) \n");
	// Will save the input on the option variable
	scanf("%d", &number);

	// Will check if the input is less of equal to 36, and bigger that 1
	if(number <= 36 && number >= 1) {
		// Will inform the user which number they picked
		printf("You're betting on number: %d\n", number);
	}
	// If the number chosen does not match the conditions, it'll exibihit
	//the error message
	else {
		printf("You little sneak! Choose again.\n");
	}	

	// Will ask the user which option do they want to choose
	printf("Please select option. \n");
	// And will save it on the option variable
	scanf("%c", &option);
}

// Function for the E option
void eCase() {

 	// Asks the user the number they want to bet on
	printf("Even number? Alright. What number do you want to bet on? (2-1) \n");
	// Will save the input on the option variable
	scanf("%d", &number);

	// Will check if the input is an even number
	if(number % 2 == 0) {
		// Will inform the user which number they picked
		printf("You're betting on number %d\n", number);
	}
	// If the number chosen does not match the conditions, it'll exibihit the
	// error message
	else {
		printf("Hey! You chose even numbers, now you have to comply!\n");
	}
			

	// Will ask the user which option do they want to choose
	printf("Please select option. \n");
	// And will save it on the option variable
	scanf("%c", &option);
}


// Function for the O option
void oCase() {

 	// Asks the user the number they want to bet on
	printf("Odd number? Alright. What number do you want to bet on? (2-1) \n");
	// Will save the input on the option variable
	scanf("%d", &number);

	// Will check if the input is an odd number
	if(!(number % 2 == 0)) {
		// Will inform the user which number they picked
		printf("You're betting on number %d\n", number);
	}
	// If the number chosen does not match the conditions, it'll exibihit
	// the error message
	else {
		printf("Hey! You chose odd numbers, now you have to comply!\n");
	}
			
	// Will ask the user which option do they want to choose
	printf("Please select option. \n");
	// And will save it on the option variable
	scanf("%c", &option);
}


void rCase() {

	printf("Alright, let's get ROLLing");

	if (bet_type == 'n') { 

		nCase();
		for (int i = 0; i <= 36; i++) {
        	printf("And the winning number isss......... %d!\n", rand());
        }

        if (number == rand()) {
        	currentbet = currentbet * 35;
        	printf("Hey! Congrats my guy, you just won %d!\n", currentbet);
        	balance = currentbet + balance;
        	currentbet = 0;
        	printf("Your current balance is: %d\n", balance);
        	printf("Current bet is: %d\n", currentbet);
        }
        else {
        	printf("... Shucks... Better luck next time, though!");
        	balance = balance - currentbet;
        	currentbet = 0;
        	printf("Your current balance is: %d\n", balance);
        	printf("Your current bet is: %d\n", currentbet);
        }
	}

	else if (bet_type == 'e') {

		eCase();
		for (int i = 0; i <= (number % 2 == 0); i++) {
        	printf("And the winning number isss......... %d!\n", rand());
        }

        if (number == rand()) {
        	currentbet = currentbet * 2;
        	printf("Hey! Congrats my guy, you just won %d!\n", currentbet);
        	balance = currentbet + balance;
        	currentbet = 0;
        	printf("Your current balance is: %d\n", balance);
        	printf("Current bet is: %d\n", currentbet);
        }
        else {
        	printf("... Shucks... Better luck next time, though!");
        	balance = balance - currentbet;
        	currentbet = 0;
        	printf("Your current balance is: %d\n", balance);
        	printf("Your current bet is: %d\n", currentbet);
        }
	}

	else if (bet_type == 'o') {

		oCase();
		for (int i = 0; i <= !(number % 2 == 0); i++) {
        	printf("And the winning number isss......... %d!\n", rand());
        }

        if (number == rand()) {
        	currentbet = currentbet * 2;
        	printf("Hey! Congrats my guy, you just won %d!\n", currentbet);
        	balance = currentbet + balance;
        	currentbet = 0;
        	printf("Your current balance is: %d\n", balance);
        	printf("Current bet is: %d\n", currentbet);
        }
        else {
        	printf("... Shucks... Better luck next time, though!");
        	balance = balance - currentbet;
        	currentbet = 0;
        	printf("Your current balance is: %d\n", balance);
        	printf("Your current bet is: %d\n", currentbet);
        }
	}
}
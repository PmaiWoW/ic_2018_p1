#include <stdio.h>
#include <time.h> // Library needed to use the time() function
#include <stdlib.h> // Library needed to use the rand() function
#include "functions.h" // Where the functions are


int main(void) {

	// Variables  that keep the player's initial balance, current bet, starting
	// at 0, and the variable that will save the player's chosen number to bet
	int balance = 100, currentbet = 0, betNumber = 0;
	// Variable that will serve to check which kind of bet the player chose
	char option;

	// Needed for the random seed
	srand((unsigned int) time(NULL));


	// Printfs that explain the available options
	printf("\n Hello, and welcome to russian roulette!\n");
	printf("This is your current balance: %d\n", balance);
	printf("And this is your current bet: %d\n", currentbet);
	printf("\n What do you want to do? ");
	printf("\n b - Amount of money you want to bet"
		"\n n - Bet on a specific number (pays 35 to 1)"
		"\n e - bet on an even number (pays 2 to 1)"
		"\n o - bet on an odd number (pays 2 to 1)"
		"\n r - roll"
		"\n h - help"
		"\n s - show balance"
		"\n c - cashout and go home\n");

	// An infinite loop that will only break if the user chooses 'c', which is
	// a return 
	while (1) {
		// Will save the player's input
		scanf("%c", &option);


		// A switch case that will work based on the input the player gave
		switch(option) {

			// A case for the option B
			case 'b':
			
				

				break;


				// A case for the option N
			case 'n':

				// Will check if the player has placed a bet first
				if (currentbet == 0) {
					printf ("Bet first, my dude\n");
				}
				// If they did, then the nCase() function will start and betType
				// will save the type
				else { 
					betType = 'n';
					nCase();
				}

				// Will ask the user what to do next and save the input
				printf("What now? Ready to get the ball rolling? \n");
				scanf("%c", &option);

				break;


			// A case for the option E
			case 'e':
				
				// Will check if the player has placed a bet first
				if (currentbet == 0) {
					printf ("Bet first, my dude\n");
				}
				// If they did, then the eCase() function will start and betType
				// will save the type
				else {
					betType = 'e';
					eCase();
				}

				// Will ask the user what to do next and save the input
				printf("What now? Ready to get the ball rolling? \n");
				scanf("%c", &option);

				break;


			// A case for the option O
			case 'o':

				// If they did, then the nCase() function will start and betType
				// will save the type
				if (currentbet == 0) {
					printf ("Bet first, my dude\n");
				}
				else {
					betType = 'o';
					oCase();
				}

				// Will ask the user what to do next and save the input
				printf("What now? Ready to get the ball rolling? \n");
				scanf("%c", &option);

				break;


			// A case for the option R
			case 'r':

				

				break;


			// A case for the option H
			case 'h':

				
				break;


			// A case for the option S
			case 's':

				

				break;


			// A case for the option C
			case 'c':

				// Will finish the game, but before, it'll show their balance
				// one last time
				printf("Oh... Alright... I hope to see you again soon! :) \n");
				printf("But hey! You're leaving with %d euros!\n", balance);

				// Will break the loop
				return option;


			// Default
			default:

			printf("Not an option, try again\n");

		} 
	}
	return 0;
}

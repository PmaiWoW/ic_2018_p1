#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "functions.h"


int main(void) {

	int balance = 100, currentbet = 0, betNumber = 0;
	char option;
	char betType = '0';

	srand((unsigned int) time(NULL));


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

	while (1) {
		scanf("%c", &option);


		switch(option) {

			case 'b':
			
				printf("How much money do you want to bet? \n");
				scanf("%d", &betNumber);

				if(betNumber <= balance) {
					currentbet = betNumber + currentbet;
					printf("You're betting: %d euros\n", currentbet);
					balance =  balance - currentbet;
					printf("Your current balance is: %d euros\n", balance);
				}
				else if (betNumber > balance) {
					printf("Getting a little excited, aren't we? Bet on a value"
							" you can actually afford, please.\n");
				}
				else {
					printf("Dude.......\n");
				}

				printf("What next my guy?: \n");
				scanf("%c", &option);

				if(option == 'n') {
					nCase();
				}
				else if(option == 'e') {
					eCase();
				}
				else if(option == 'o') {
					oCase();
				}

				break;


			case 'n':

				if (currentbet == 0) {
					printf ("Bet first, my dude\n");
				}
				else { 
					betType = 'n';
					nCase();
				}

				break;


			case 'e':
				
				if (currentbet == 0) {
					printf ("Bet first, my dude\n");
				} else {
					betType = 'e';
					eCase();
				}

				break;


			case 'o':

				if (currentbet == 0) {
					printf ("Bet first, my dude\n");
				} else {
					betType = 'o';
					oCase();
				}

				break;


			case 'r':

				if (currentbet == 0) {
					printf("Bet first, my dude\n");
				}
				else {
					rCase();
				}

				break;


			case 'h':

				hCase();

				break;

			case 's':

				printf("Your current balance is: %d euros\n", balance);

				break;

			case 'c':

				printf("Oh... Alright... I hope to see you again soon! :) \n");
				printf("But hey! You're leaving with %d euros!\n", balance);
				return option;


			default:

			printf("Not an option, try again\n");

		} 
	}
	return 0;
}
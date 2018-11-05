#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "functions.h"


int main(void) {

	int balance = 100, currentbet = 0, number = 0;
	char option;
	char bet_type = '0';

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
				scanf("%d", &number);

				if(number <= balance) {
					currentbet = number;
					printf("You're betting: %d\n", currentbet);
					balance =  balance - currentbet;
					printf("Your current balance is: %d\n", balance);
				}
				else if (number > balance) {
					printf("Getting a little excited, aren't we? Bet on a value"
						" you can actually afford, please.\n");
				}
				else {
					printf("Dude.......\n");
				}

				printf("Please select an option: \n");
				scanf("%c", &option);

				if(option == 'n') {
					nCase();
				}
				else if(option == 'e') {
					eCase();
				}

				break;


			case 'n':
				bet_type = 'n';

				if (currentbet == 0) {
					printf ("Bet first, my dude\n");
				}
				else { 
					nCase();
				}

				break;


			case 'e':
				bet_type = 'e';

				if (currentbet == 0) {
					printf ("Bet first, my dude\n");
				} else {
					eCase();
				}

				break;


			case 'o':
				bet_type = 'o';

				if (currentbet == 0) {
					printf ("Bet first, my dude\n");
				} else {
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


			case 'h':

				printf("Can't you read what was written in the beginning...?\n"
					"Fine! Before you can do anything, you have to bet. To do"
					" that, choose 'b'. Next you can choose what kind of bet you"
					" want. 'n' for 1-36 and if you win, you get 35x the amount"
					" you put down. 'e' for even numbers, and 'o' for odd."
					" You get double the amount. Once you're done playing, just"
					"choose 'c' and we'll give you your total. Capiche?\n");


			case 'c':
				return option;


			default:

			printf("Not an option, try again\n");

		} 
	}
	return 0;
}
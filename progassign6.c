#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


	int main(void) {
		

		int i;           // Loop counter iterates numRolls times
		int numRolls;	// User defined number of rolls
		int numTwos;
		int numThrees;
		int numFours;
		int numFives;
		int numSixes;    
		int numSevens;
		int numEights;
		int numNines;
		int numTens;
		int numElevens;
		int numTwelves;	 
		int die1;        // Dice values
		int die2;        // Dice values
		int rollTotal;   // Sum of dice values

		// Initialize variables 
		numTwos	=0; 
		numThrees=0;
		numFours=0;
		numFives=0;
		numSixes=0;
		numSevens=0;
		numEights=0;
		numNines=0;
		numTens	=0;
		numElevens=0;
		numTwelves=0;

		

		// Seed RNG
		srand(time(0));

		// Get input before loop
	
		printf("Enter number of rolls: \n");
		scanf("%d", &numRolls);

		while (numRolls > 0) {


			// Roll dice numRoll times
			for (i = 0; i < numRolls; ++i) {
				die1 = rand() % 6 + 1;
				die2 = rand() % 6 + 1;
				rollTotal = die1 + die2;

				// Count numbers of totals
				if (rollTotal == 2) {
					numTwos = numTwos + 1;
				}
				else if (rollTotal == 3) {
					numThrees = numThrees + 1;
				}
				else if (rollTotal == 4) {
					numFours = numFours + 1;
				}
				else if (rollTotal == 5) {
					numFives = numFives + 1;
				}
				else if (rollTotal == 6) {
					numSixes = numSixes + 1;
				}
				else if (rollTotal == 7) {
					numSevens = numSevens + 1;
				}
				else if (rollTotal == 8) {
					numEights = numEights + 1;
				}
				else if (rollTotal == 9) {
					numNines = numNines + 1;
				}
				else if (rollTotal == 10) {
					numTens = numTens + 1;
				}
				else if (rollTotal == 11) {
					numElevens = numElevens + 1;
				}
				else {
					numTwelves = numTwelves + 1;
				}
				printf("\nRoll %d is %d (%d+%d)\n", i + 1, rollTotal, die1, die2);

			}

			// Prompt user for more input after loop finishes, 0 brings program to statistics and hist

			printf("\nEnter number of rolls: \n");
			scanf("%d", &numRolls);

			// Sets all variables to 0 if loop is entered again, this is so hist and stats correspond to current roll

			if (numRolls != 0) {
				numTwos = 0;
				numThrees = 0;
				numFours = 0;
				numFives = 0;
				numSixes = 0;
				numSevens = 0;
				numEights = 0;
				numNines = 0;
				numTens = 0;
				numElevens = 0;
				numTwelves = 0;
			}
		}
			// Print statistics

					printf("\n\nDice roll statistics: \n");
					printf("2s: %d\n", numTwos);
					printf("3s: %d\n", numThrees);
					printf("4s: %d\n", numFours);
					printf("5s: %d\n", numFives);
					printf("6s: %d\n", numSixes);
					printf("7s: %d\n", numSevens);
					printf("8s: %d\n", numEights);
					printf("9s: %d\n", numNines);
					printf("10s: %d\n", numTens);
					printf("11s: %d\n", numElevens);
					printf("12s: %d\n", numTwelves);

					// Prints the histogram

					printf("\nDice Roll Histogram:\n");

					for (int i = 2; i <= 12; ++i) {
						int j;

						if (i == 2) {
							printf("2: ");
							for (j = 0; j < numTwos; ++j)
							{
								printf("*");
							}
							printf("\n");

						}
						else if (i == 3) {
							printf("3: ");
							for (j = 0; j < numThrees; ++j)
							{
								printf("*");
							}
							printf("\n");
						}
						else if (i == 4) {
							printf("4: ");
							for (j = 0; j < numFours; ++j)
							{
								printf("*");
							}
							printf("\n");
						}
						else if (i == 5) {
							printf("5: ");
							for (j = 0; j < numFives; ++j)
							{
								printf("*");
							}
							printf("\n");
						}
						else if (i == 6) {
							printf("6: ");
							for (j = 0; j < numSixes; ++j)
							{
								printf("*");
							}
							printf("\n");
						}
						else if (i == 7) {
							printf("7: ");
							for (j = 0; j < numSevens; ++j)
							{
								printf("*");
							}
							printf("\n");

						}
						else if (i == 8) {
							printf("8: ");
							for (j = 0; j < numEights; ++j)
							{
								printf("*");
							}
							printf("\n");
						}
						else if (i == 9) {
							printf("9: ");
							for (j = 0; j < numNines; ++j)
							{
								printf("*");
							}
							printf("\n");
						}
						else if (i == 10) {
							printf("10: ");
							for (j = 0; j < numTens; ++j)
							{
								printf("*");
							}
							printf("\n");
						}
						else if (i == 11) {
							printf("11: ");
							for (j = 0; j < numElevens; ++j)
							{
								printf("*");
							}
							printf("\n");
						}
						else if (i == 12) {
							printf("12: ");
							for (j = 0; j < numTwelves; ++j)
							{
								printf("*");
							}
							printf("\n");
						}
					}
			return 0;
	}
















#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#define arraySize 5

// Generate random numbers and fill arrays

void fillArrays(int arrayOne[], int arrayTwo[]) {

	int i;
	int randNum;
	randNum = 0;
	srand(time(0));

	for (i = 0; i < arraySize; ++i) {

		randNum = (rand() % 100) + 1;
		arrayOne[i] = randNum;

	}

	for (i = 0; i < arraySize; ++i) {

		randNum = (rand() % 99) + 1;
		arrayTwo[i] = randNum;

	}

	printf("Printing arrays from fillArrays function...\n");
	printf("Array One: ");

	for (i = 0; i < arraySize; ++i) {

		printf("%d ", arrayOne[i]);
		
	}

	printf("\nArray Two: ");
	for (i = 0; i < arraySize; ++i) {

		printf("%d ", arrayTwo[i]);

	}
}
// Merges and reverses arrays

void MergeArrays(int arrayOne[], int arrayTwo[]) {

	int i;
	int j;
	int mergedArray[arraySize * 2];
	int tempVal;
	
	for (i = 0; i < arraySize * 2; ++i) {

		if (i < arraySize) {
			mergedArray[i] = arrayOne[i];
		}
		else {
			for (int k = 0, j = arraySize; j < arraySize * 2; ++j,++k) {
			mergedArray[j] = arrayTwo[k];
			}
		}

	}

	printf("\nPrint merged array: ");
	for (i = 0; i < arraySize * 2; ++i) {
		printf("%d ", mergedArray[i]);
	}

	for (i = 0; i < arraySize  / 2; ++i) {
		tempVal = arrayOne[i];                  
		arrayOne[i] = arrayOne[arraySize-1-i];
		arrayOne[arraySize - 1-i] = tempVal;     
	}

	for (i = 0; i < arraySize / 2; ++i) {
		tempVal = arrayTwo[i];
		arrayTwo[i] = arrayTwo[arraySize - 1 - i];
		arrayTwo[arraySize - 1 - i] = tempVal;
	}

	for (i = 0; i < arraySize * 2; ++i) {

		if (i < arraySize) {
			mergedArray[i] = arrayOne[i];
		}
		else {
			for (int k = 0, j = arraySize; j < arraySize * 2; ++j, ++k) {
				mergedArray[j] = arrayTwo[k];
			}
		}

	}

	printf("\nPrint sorted merged array: ");
	for (i = 0; i < arraySize * 2; ++i) {
		printf("%d ", mergedArray[i]);
	}
	
}


int main(void) {

	int arrayOne[arraySize];
	int arrayTwo[arraySize];

	fillArrays(arrayOne, arrayTwo);
	MergeArrays(arrayOne, arrayTwo);
	
	
	return 0;

}
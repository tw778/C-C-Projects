#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)



// Recursive function 

int PrintNumbers(int userInput) {

	int temp = userInput % 10;

	if (temp == 0) {

		return 0; // Base case, ends program when recursive function is complete
	}
	else {
		// Recursive case

		PrintNumbers(userInput / 10);
		printf("%d\n", temp);
	}
	return temp;
}

int main(void) {

	int userInput;


	printf("Enter a multi-digit integer that is less than 10 digits and not a multiple of 10: ");
	scanf("%d", &userInput);

	PrintNumbers(userInput);

	return 0;

}


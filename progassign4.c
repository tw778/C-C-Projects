#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// Function definitions

// Add function

long double AddUserEntry(long double aUserEntry1, long double aUserEntry2) {
	
	long double result;

	result = aUserEntry1 + aUserEntry2;

	return result;
}

// Subtract function

long double SubUserEntry(long double sUserEntry1, long double sUserEntry2) {

	long double subResult;

	subResult = sUserEntry1 - sUserEntry2;

	return subResult;
}

// Multiply function

double MultUserEntry(long double mUserEntry1, long double mUserEntry2) {
	long double multResult;

	multResult = mUserEntry1 * mUserEntry2;

	return multResult;
}

// Division function

long double DivUserEntry(long double dUserEntry1, long double dUserEntry2) {
	long double divResult;

	divResult = dUserEntry1 / dUserEntry2;

	return divResult;
}





int main(void) {

	// Defining variables local to main
	int userChoice;
	long double userEntry1;
	long double userEntry2;
	long double addResult;
	long double subResult;
	long double multResult;
	long double divResult;
	
	// Prompts user for choice before switch occurs

	printf("Enter your choice of operation.\n");
	printf("1: Addition\n");
	printf("2: Subtraction\n");
	printf("3: Multiplication\n");
	printf("4: Division\n");
	printf("5: Exit\n");
	printf("\nChoice: ");
	scanf("%d", &userChoice);

	switch (userChoice) {

		// Add

	case 1:
		
		printf("\nFirst number to add: ");
			scanf("%Lf", &userEntry1);

		printf("\nSecond number to add: ");
			scanf("%Lf", &userEntry2);
		
			addResult = AddUserEntry(userEntry1, userEntry2);
			printf("%.2Lf", addResult);

		break;	

		//Subtract

	case 2:
		printf("\nFirst number to subtract: ");
		scanf("%Lf", &userEntry1);

		printf("\nSecond number to subtract: ");
		scanf("%Lf", &userEntry2);

		subResult = SubUserEntry(userEntry1, userEntry2);
		printf("%.2Lf", subResult);

		break;

		// Multiply

	case 3:
		printf("\nFirst number to multiply: ");
		scanf("%Lf", &userEntry1);

		printf("\nSecond number to multiply: ");
		scanf("%Lf", &userEntry2);

		multResult = MultUserEntry(userEntry1, userEntry2);
		printf("%.2Lf", multResult);

		break;

		// Divide

	case 4:

		printf("\nFirst number to divide: ");
		scanf("%Lf", &userEntry1);

		printf("\nSecond number to divide: ");
		scanf("%Lf", &userEntry2);

		divResult = DivUserEntry(userEntry1, userEntry2);
		printf("%.2Lf", divResult);

		break;

		// Exit

	case 5:

		break;

	default:

		printf("Invalid entry. Try again\n");
		break;
	}

	return 0;
}
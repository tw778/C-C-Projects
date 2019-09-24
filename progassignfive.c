#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


// Function definitions

// This function retrieves the char from the input file, it is assigned to a variable in main

char RetrieveLetter() {

	FILE* inFile = NULL;
	char fileChar;
	inFile = fopen("input.txt", "r");
	fscanf(inFile, "%c", &fileChar);
	return fileChar;
}

// Prints the triangle, gets called in PrintAllTheShapes

void PrintATriangle(FILE* outFile, char fileInput) {

	

	fprintf(outFile,"  %c\n", fileInput);
	fprintf(outFile," %c%c%c\n", fileInput, fileInput,fileInput);
	fprintf(outFile,"%c%c%c%c%c\n\n\n", fileInput, fileInput, fileInput,fileInput,fileInput);
	
}

// Prints the square, gets called in PrintAllTheShapes

void PrintASquare(FILE* outFile, char fileInput) {

	
	
	fprintf(outFile, " %C%c%c\n", fileInput, fileInput, fileInput);
	fprintf(outFile, " %C %c\n", fileInput, fileInput);
	fprintf(outFile, " %C%c%c\n\n\n", fileInput, fileInput, fileInput);
	
}

// Prints the diamond, gets called in PrintAllTheShapes

void PrintADiamond(FILE* outFile, char fileInput) {

	

	fprintf(outFile,"  %c\n", fileInput);
	fprintf(outFile,"%c   %c\n", fileInput, fileInput);
	fprintf(outFile,"  %c\n", fileInput);
	
}

// This function prints all of the shapes with a few new lines in between

void PrintAllTheShapes(char fileInput) {

	FILE* outFile = NULL; // File pointer
	outFile = fopen("output.txt", "w");

	PrintATriangle(outFile,fileInput);
	PrintASquare(outFile,fileInput);
	PrintADiamond(outFile,fileInput);

	fclose(outFile);
}

int main(void) {

	// Variable that is assigned to char retrieved from input file

	char fileChar;
	
	
	// Calling functions to retrieve char from input file and print shapes to output file
	
	fileChar = RetrieveLetter();
	PrintAllTheShapes(fileChar);
	
	return 0;
}
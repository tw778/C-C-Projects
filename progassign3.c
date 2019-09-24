#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


// Declaring global constants

const int BREATHS_PER_MINUTE = 16; // The average healthy person takes 12-20 breaths per minute
const double SANDWICH_CALORIES = 352; // Avg calories in a ham and cheese sandwich
const double CALORIES_BURNED = 2200; // Calories burned by the average person per day, this varies by activity level and age
const int AVG_SNEEZES = 2; // A study in Denmark found the average person sneezes 0-4 times per day; I will use 2


// Calculates age in days

int CalcUserAgeDays(int userAgeYears) {

	int userAgeDays;

	userAgeDays = userAgeYears * 365;   // Calculate days without leap years
	userAgeDays = userAgeDays + (userAgeYears / 4); // Add days for leap years

	return userAgeDays;


}

// Calculates age in minutes

long long int CalcUserAgeMinutes(long long int userAgeDays) {

	long long int userAgeMinutes;

	userAgeMinutes = userAgeDays * 24 * 60;  // 24 hours/day, 60 minutes/hour

	return userAgeMinutes;

}

// Calculates age in seconds

long long int CalcUserAgeSeconds(long long userAgeMinutes) {

	long long int userAgeSeconds;

	userAgeSeconds = userAgeMinutes * 60;

	return userAgeSeconds;

}

// Calculates number of sneezes in lifetime

int CalcLifetimeSneezes(int userAgeDays) {
	
	int lifetimeSneezes;

	 lifetimeSneezes = userAgeDays * AVG_SNEEZES;

	 return lifetimeSneezes;
}

// Calculates number of calories expended during lifetime

long double CalcExpendedCalories(int userAgeDays) {

	long double expendedCalories;

	expendedCalories = CALORIES_BURNED * userAgeDays;

	return expendedCalories;
}

// Calculates number of sandwiches eaten to replenish calories

double CalcSandwichesEaten(double expendedCalories) {
	
	double sandwichesEaten;

	sandwichesEaten = expendedCalories / SANDWICH_CALORIES;

	return sandwichesEaten;
}

// Calculates number of breaths taken during lifetime

long int CalcLifetimeBreaths(long long int userAgeMinutes) {

	long long int lifetimeBreaths;

	lifetimeBreaths = userAgeMinutes * BREATHS_PER_MINUTE;

	return lifetimeBreaths;
}

int main(void) {
	
	// Declaring variables in main

	int userAgeYears;
	int userAgeDays;
	long long int userAgeMinutes;
	long long int userAgeSeconds;
	int lifetimeSneezes;
	long double expendedCalories;
	double sandwichesEaten;
	long long int lifetimeBreaths;

	// Get user age

	printf("Enter your age in years: ");	
	scanf("%d", &userAgeYears);

	// Print age in Days

	userAgeDays = CalcUserAgeDays(userAgeYears);
	printf("\nYou are %d days old.\n", userAgeDays);
     
	// Print age in minutes

	userAgeMinutes = CalcUserAgeMinutes(userAgeDays);
	printf("You are %lld minutes old.\n", userAgeMinutes);

	// Print age in seconds

	userAgeSeconds = CalcUserAgeSeconds(userAgeMinutes);
	printf("You are %lld seconds old.\n", userAgeSeconds);

	// Print lifetime sneezes

	lifetimeSneezes = CalcLifetimeSneezes(userAgeDays);
	printf("It is likely that you have sneezed about %d times in the %d years that you have been alive.\n", lifetimeSneezes, userAgeYears);

	// Print calories expended in lifetime

	expendedCalories = CalcExpendedCalories(userAgeDays);
	printf("You have burned %lf calories in the %d years you have been alive.\n", expendedCalories, userAgeYears);

	// Print number of sandwiches needed to replenish calories

	sandwichesEaten = CalcSandwichesEaten(expendedCalories);
	printf("It takes %f ham sandwiches to replenish the %lf calories that you have burned in your %d years.\n", sandwichesEaten, expendedCalories, userAgeYears);

	// Print number of lifetime breaths

	lifetimeBreaths = CalcLifetimeBreaths(userAgeMinutes);
	printf("You have taken %lld breaths in the %d years you have been alive.\n", lifetimeBreaths, userAgeYears);

	return 0;
}

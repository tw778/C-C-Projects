#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void) {
	int userAgeYears;
	int userAgeDays;
	int userAgeMinutes;
	long long int userAgeSeconds;
	int lifetimeSneezes;
	long double expendedCalories;
	double sandwichesEaten;
	long int lifetimeBreaths;


	const int BREATHS_PER_MINUTE = 16; // The average healthy person takes 12-20 breaths per minute
	const double SANDWICH_CALORIES = 352; // Avg calories in a ham and cheese sandwich
	const double CALORIES_BURNED = 2200; // Calories burned by the average person per day, this varies by activity level and age
	const int AVG_SNEEZES = 2; // A study in Denmark found the average person sneezes 0-4 times per day; I will use 2
	

	printf("Enter your age in years: ");
	scanf("%d", &userAgeYears);

	userAgeDays = userAgeYears * 365;               // Calculate days without leap years
	userAgeDays = userAgeDays + (userAgeYears / 4); // Add days for leap years

	printf("\nYou are %d days old.\n", userAgeDays);

	userAgeMinutes = userAgeDays * 24 * 60;         // 24 hours/day, 60 minutes/hour
	printf("You are %d minutes old.\n", userAgeMinutes);
	
	userAgeSeconds = userAgeMinutes * 60;			// Question 1: Programming assignment 2 starts here
	printf("You are %lld seconds old.\n", userAgeSeconds);

	lifetimeSneezes = userAgeDays * AVG_SNEEZES;	// Question 2: average sneezes per day (2) * days user has been alive
	printf("It is likely that you have sneezed about %d times in the %d years that you have been alive.\n", lifetimeSneezes, userAgeYears);
	
	expendedCalories = CALORIES_BURNED * userAgeDays;	// Question 3: Number of calories burned per day * days alive
	printf("You have burned %lf calories in the %d years you have been alive.\n", expendedCalories, userAgeYears);

	sandwichesEaten = expendedCalories / SANDWICH_CALORIES; // Question 3: Number of calories burned in lifetime / average sandwich calories
	printf("It takes %f ham sandwiches to replenish the %lf calories that you have burned in your %d years.\n", sandwichesEaten, expendedCalories, userAgeYears);

	lifetimeBreaths = userAgeMinutes * BREATHS_PER_MINUTE; // Question 4: Random health fact, calculates number of breaths taken during life of user
	printf("You have taken %ld breaths in the %d years you have been alive.\n", lifetimeBreaths, userAgeYears);

	return 0;
}
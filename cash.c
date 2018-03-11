#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
// Declaring floats
    float change;

// Ask user how much change they need
    do
    {
        change = get_float("How much change do you need?: ");
    }
    while (change < 0);

    float f = change * 100;


// Remove floating point imprecision
    f = round(f);

// Declaring integers
    int g = f;
    int quarters;
    int i;

    int total;

    int dimes;
    int nickles;
    int pennies;

// Calculate number of quarters if any
    if (g >= 25)
    {
        quarters = g / 25;
        i = g - (quarters * 25);
    }
    else
    {
        quarters = 0;
        i = g;
    }

// Calculate number of dimes if any
    if (i < 25 && i >= 10)
    {
        dimes = i / 10;
        i = g - ((quarters * 25) + (dimes * 10));
    }
    else
    {
        dimes = 0;
        i = g - (quarters * 25);
    }

// Calculate number of nickles if any
    if (i < 10 && i >= 5)
    {
        nickles = i / 5;
        i = g - ((quarters * 25) + (dimes * 10) + (nickles * 5));
    }
    else
    {
        nickles = 0;
        i = g - (quarters * 25) + (dimes * 10);
    }
// Calculate number of pennies if any
    if (i < 5 && i >= 1)
    {
        pennies = i / 1;
        i = g - ((quarters * 25) + (dimes * 10) + (nickles * 5) + (pennies * 1));
    }
    else
    {
        pennies = 0;
        i = g - (quarters * 25) + (dimes * 10) + (nickles * 5) + (pennies * 1);
    }

// Print final number of coins
    {
        total = quarters + dimes + nickles + pennies;
        printf("%i\n", total);
    }
}

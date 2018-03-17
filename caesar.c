// Including libraries
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define limit 99999

// Declaring main and command line argument
int main(int argc, string argv[])
{

    string k = argv[1];
    string plaintext;

// Collecting plaintext from user providing argc is two
    if (argc == 2)
    {
        int g = 0;
        do
        {
            plaintext = get_string("Plaintext:");
        }
        while (g < 0);
    }
    else
    {
        printf("Please enter the file name, a space, and a non-negative integer.\n");
        return 1;
    }

    // Declaring arrays for the users input
    char letters[limit];
    char ciphertext[limit];
    int g = atoi(k);

    // For loop to encrpt the length of the user's string
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        int q = 0;
        int p = 0;
        letters [i] = plaintext [i];
        // Only ecrypt letters
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                for (int t = 'A' - plaintext[i]; t <= 0; t++)
                {
                    p++;
                }
                ciphertext[i] = ((p + 25 + g) % 26) + 65;
            }
            else if (islower(plaintext[i]))
            {
                for (int r = 'a' - plaintext[i]; r <= 0; r++)
                {
                    q++;
                }
                ciphertext[i] = ((q + 25 + g) % 26) + 97;
            }
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }
// Print the encrypted result
    printf("ciphertext: %s\n", ciphertext);
}

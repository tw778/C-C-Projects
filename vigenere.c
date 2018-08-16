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
        // Check to see if key has any digits
        for (int c = 0; c <= strlen(k); c++)
        {
            if isdigit(k[c])
            {
                exit(1);
            }
        }
        int h = 0;
        do
        {
            plaintext = get_string("Plaintext:");
        }
        while (h < 0);
    }
    else
    {
        // Give error message if argv is not equal to 1
        printf("Please enter the file name, a space, and an alphabetical keyword.\n");
        exit(1);
    }

    // Declaring arrays for the users input
    char ciphertext[limit];
    char g[limit];
    int t = 0;

    // For loop to encrpt the length of the user's string
    for (int i = 0, n = (strlen(plaintext)); i < n; i++)
    {
        int y = i % strlen(k);
        // Check if key is alpha when i is less than strlen k
        if (t >= 1)
        {
            y = (i + 1) % strlen(k);
        }
        // Start encrypting first part of plaintext
        if (isalpha(k[i]) && i <= strlen(k))
        {
            if isupper(k[i])
            {
                g[i] = (k[i] - 'A');
            }
            if islower(k[i])
            {
                g[i] = (k[i] - 'a');
            }
            if isupper(plaintext[i])
            {
                ciphertext[i] = (((plaintext[i] - 65) + g[i]) % 26) + 65;
            }
            if islower(plaintext[i])
            {
                ciphertext[i] = (((plaintext[i] - 97) + g[i]) % 26) + 97;
            }
        }
        {
            // Check if key is alpha and upper/lower so it can loop
            if (isalpha(k[y]) && i >= strlen(k))
            {
                if isupper(k[y])
                {
                    g[y] = (k[y] - 'A');
                }
                if islower(k[y])
                {
                    g[y] = (k[y] - 'a');
                }
                if isupper(plaintext[i])
                {
                    ciphertext[i] = (((plaintext[i] - 65) + g[y]) % 26) + 65;
                }
                if islower(plaintext[i])
                {
                    ciphertext[i] = (((plaintext[i] - 97) + g[y]) % 26) + 97;
                }
            }
            // Check to see if the array slot is a space or punc
            if (isspace(plaintext[i]) || ispunct(plaintext[i]))
            {
                if isspace(plaintext[i])
                {
                    ciphertext[i] = plaintext[i];
                    t++;
                }
                if ispunct(plaintext[i])
                {
                    ciphertext[i] = plaintext[i];
                    t++;
                }
            }
        }
    }
    // Print the encrypted result
    printf("ciphertext:%s\n", ciphertext);
}
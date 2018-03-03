#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //declaring integers
    int height;
    int hashes;
    int rows;
    int spaces;

    //ask user for the height of their pyramid
    do
    {
        height = get_int("How high would you like your pyramid? Enter a positive integer between 0-23: ");
    }
    while (height < 0 || height > 23);

    //print a row
    for (rows = 0; rows < height; rows++)
    {
        for (spaces = rows + 1; spaces < height; spaces++)
    {
            printf(" ");
    }
    //print hashes
        for (hashes = rows + 1; hashes >= 0; hashes--)
    {
            printf("#");
    }
    //indent
            printf("\n");
    }
}





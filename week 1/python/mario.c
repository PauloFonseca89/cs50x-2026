#include <cs50.h>
#include <stdio.h>


// Mario, more comfortable with loops than with conditionals, wants to create a program that prints out a half-pyramid of a specified height, per the below. The user must input a height, a positive integer no greater than 8, and the program should print out a half-pyramid of that height using hashes (#) for blocks and spaces for padding. The program should prompt the user again if they do not provide a valid height.


int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        for (int spaces = 0; spaces < height - i; spaces++)
        {
            printf(" ");
        }

        for (int hashes = 0; hashes < i; hashes++)
        {
            printf("#");
        }

        printf("  ");

        for (int hashes = 0; hashes < i; hashes++)
        {
            printf("#");
        }

        printf("\n");
    }
}

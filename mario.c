#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt for a valid height value
    int height;

    do
    {
        height = get_int("Height:");

    }
    while(height < 1 || height > 8);

    //Build a for loop pyramid

    for(int i = 1; i <= height; i++)
       {
       //Spaces for Alignment
       for(int j = 0; j < height - i; j++)
       {
        printf(" ");
       }

       //Print # for the left side
       for(int x = 0; x < i; x++)
       {
        printf("#");
       }

       //Print a new line after each row
       printf("\n");

       }

    }

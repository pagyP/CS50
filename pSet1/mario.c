#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Variables.
    int height;
    do
    {
        height = get_int("Height: ");
    }
    //while height is less than 1 or greater than 8 the condition is true so we stay in the loop
    while (height < 1 || height > 8);
    for (int line = 0; line < height; line++)
    {
        for (int hash = 0; hash < line + 1; hash++)
            printf("#");

        printf("\n");
    }
}

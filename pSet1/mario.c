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
    //while height is less than 1 or greater than 8 the condition is true so we stay in the do while loop
    while (height < 1 || height > 8);
    //set line to 0 and ask is line less then height
    for (int line = 0; line < height; line++)
    {
        //set space to height - line and ask is dot greater then 1
        for (int dot = height - line; dot > 1; dot--)
        {
            printf(" ");
        }
        //set hash to 0 and ask is hash less then line +1
        for (int hash = 0; hash < line + 1; hash++)
        {
            printf("#");
        }

        printf("\n");
        
    }
  
}

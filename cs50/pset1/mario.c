#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int row;

    // Prompt user for pyramid height (between 0 and 23)
    // Prompt again if this spec is not met
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);

    // outer loop for rows
    for (row = 0; row < height; row++)
    {
        // inner loop for spaces
        for (int i = 0; i < height - row; i++)
        {
            if(i > 0)
            {
                printf("%s", " ");
            }
        }

        // inner loop for hashes
        for (int j = 0; j <= row + 1; j++)
        {
            printf("#");
        }

        //print new line to start new row
        printf("\n");
    }
}

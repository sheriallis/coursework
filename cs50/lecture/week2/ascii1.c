#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for(char c = 'A'; c <= 'Z'; c++)
    {
        // printf("%c is %i\n", c, (int) c);
        printf("%c is %i\n", c, c);
    }
}
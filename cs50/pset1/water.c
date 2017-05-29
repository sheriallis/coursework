/*
Implement a program that reports a user's water usage, converting minutes spent in the shower to bottles of drinking water

showerhead => 1.5gallons of water per minute
gallon => 128 ounces
typical water bottle => 16

input in minutes * 1.5 * 128 / 16

1 minute shower = 12 bottles of water
10 minute shower = 120 bottles of water
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes: ");
    int minutes = get_int();
    while(minutes > 0)
    {
    printf("Bottles: %i\n", minutes * 12);
    minutes = 0;
    }
}

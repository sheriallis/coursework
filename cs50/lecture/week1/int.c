#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Enter a number: ");
    int i = get_int();
    printf("hello, %i\n", i);
}
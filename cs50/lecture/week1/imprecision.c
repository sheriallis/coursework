#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("%.10f\n", 1.0 / 10.0);
    printf("%.55f\n", 1.0 / 10.0);
    printf("%f\n", 1 / (float) 10);
}
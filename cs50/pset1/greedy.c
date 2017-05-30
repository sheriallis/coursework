#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    int coins = 0;

    printf("O hai! ");

    do {
        printf("How much change is owed?\n");
        change = roundf(get_float() * 100);
    }
    while (change < 0);

    while(change > 0)
    {
        if ((change - 25) >= 0){
            coins++;
            change -= 25;
        } else if ((change - 10) >= 0){
            coins++;
            change -= 10;
        } else if ((change - 5) >= 0) {
            coins++;
            change -= 5;
        } else if ((change - 1) >= 0) {
            coins++;
            change -= 1;
        }
    }

    printf("%i\n", coins);
}

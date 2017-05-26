#include <cs50.h>
#include <stdio.h>

void say(string s, int n);

int main(void)
{
    string s = get_string();
    int n = get_int();
    say(s, n);
}

void say(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s);
    }
}
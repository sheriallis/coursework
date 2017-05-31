#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void userInitials(string fullname);

int main(void)
{
    // get fullname from user
    string fullname = get_string();
    userInitials(fullname);    
    
}

void userInitials(string fullname)
{
    // print first letter of name in uppercase
    printf("%c", toupper(fullname[0]));
    
    // iterate through characters in fullname
    for (int i = 0, n = strlen(fullname); i < n; i++)
    {
        // print the letter if the previous character was a space or if current character is null
        if(fullname[i - 1] == ' ' || fullname[i] == '\0')
        {
            printf("%c", toupper(fullname[i]));
        }
    }
    
    printf("\n");
}
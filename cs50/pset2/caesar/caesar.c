#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertToCiphertext (string p, int key);

int main(int argc, string argv[])
{
   /* if program is executed without any argument or more than one argument,
   print error message and return from main a value of 1 */
   if(argc != 2) {
      printf("An error has occured. Please provide precisely one digit as an argument!\n");
      return 1;
   }
   
   // get key from argv and convert it to an integer
   int key = atoi(argv[1]);
   
   // Get plaintext from user
   printf("plaintext:");
   string p = get_string();
   
   convertToCiphertext(p, key);

   return 0;
}

void convertToCiphertext (string p, int key)
{
   
   printf("ciphertext:");
   // loop through characters in plaintext
   for(int i = 0, n = strlen(p); i < n; i++)
   {
      // check if current char is alphabetical
      if(isalpha(p[i]))
      {
         int charWithKey = p[i] + key;
         //check if current char is uppercase or lowercase and convert accordingly
         if(isupper(p[i]))
         {
            printf("%c", ((charWithKey - 'A') % 26) + 'A');
         } 
         else if(islower(p[i]))
         {
            printf("%c", ((charWithKey - 'a') % 26) + 'a');
         }
      }
      else
      {
         printf("%c", p[i]);
      }
   }
   // print newline after outputting ciphertext
   printf("\n");
}
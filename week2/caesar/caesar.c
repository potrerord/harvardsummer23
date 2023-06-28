// Encrypts messages using Caesar cipher with cmd-line key input

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Error if amount of arguments != 1
    if (argc != 2)
    {
        printf("caesar: error: one argument required\n");
        return 1;
    }

    // If single argument
    else
    {
        // Error if argument is not nonnegative int, otherwise continue through main
        for (int i = 0; 1 == 1; i++)
        {
            if (argv[1][i] == '\0')
            {
                break;
            }
            else if (isdigit(argv[1][i]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
                break;
            }
        }

        // Prompt user for plaintext string
        string plaintext = get_string("plaintext:  ");

        // Print encrypted ciphertext
        printf("ciphertext: ");
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            // Print nonalpha symbols as-is
            if (isalpha(plaintext[i]) == 0)
            {
                printf("%c", plaintext[i]);
            }

            // Uppercase ascii conversion
            else if (isupper(argv[1][i]) != 0)
            {
                printf("%c", ((plaintext[i] - 64 + atoi(argv[1])) % 26) + 65);
            }

            // Lowercase ascii conversion
            else
            {
                printf("%c", ((plaintext[i] - 96 + atoi(argv[1])) % 26) + 97);
            }
        }
        printf("\n");
        return 0;
    }
}
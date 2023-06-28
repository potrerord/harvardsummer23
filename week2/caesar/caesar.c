// Encrypts messages using Caesar cipher with cmd-line key input

#include <cs50.h>
#include <stdio.h>
#include <string.h>


// Your program must accept a single command-line argument, a non-negative integer.
// Let’s call it k for the sake of discussion.
int main(int argc, string argv[])
{
    // If your program is executed without any command-line arguments or with more than one
    // command-line argument, your program should print an error message of your choice
    // (with printf) and return from main a value of 1 (which tends to signify an error) immediately.
    if (strlen(argv) == 0)
    {
        printf("oh nooo error lmao");
        return 1;
    }


    // If any of the characters of the command-line argument is not a decimal digit,
    // your program should print the message Usage: ./caesar key and return from main a value of 1.

    // Do not assume that k will be less than or equal to 26.
    // Your program should work for all non-negative integral values of less than 2^31 - 26.
    // In other words, you don’t need to worry if your program eventually breaks if the user
    // chooses a value for k that’s too big or almost too big to fit in an int.
    // (Recall that an int can overflow.) But, even if k is greater than 26,
    // alphabetical characters in your program’s input should remain alphabetical characters
    // in your program’s output. For instance, if k is 27, A should not become \ even though \ is 27
    // positions away from A in ASCII, per asciitable.com; A should become B, since B is 27 positions
    // away from A, provided you wrap around from Z to A.

    // Your program must output plaintext: (with two spaces but without a newline)
    // and then prompt the user for a string of plaintext (using get_string).

    // Your program must output ciphertext: (with one space but without a newline) followed by
    // the plaintext’s corresponding ciphertext, with each alphabetical character in the plaintext
    // “rotated” by k positions; non-alphabetical characters should be outputted unchanged.

    // Your program must preserve case: capitalized letters, though rotated, must remain
    // capitalized letters; lowercase letters, though rotated, must remain lowercase letters.

    // After outputting ciphertext, you should print a newline.
    // Your program should then exit by returning 0 from main.

}
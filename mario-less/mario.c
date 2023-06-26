// Prompts user for an int height and creates a Mario-style half-pyramid with # characters

#include <stdio.h>
#include <cs50.h>

// Continually prompts user for int height until positive
int get_height(void);

// Prints half-pyramid with size input
void print_hpyramid(int size);


int main(void)
{
    // Get height of half-pyramid
    int h = get_height();

    // Print half-pyramid
    print_hpyramid(h);
}










// Continually prompts user for int height until positive
int get_height(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1);
    return h
}

// Prints half-pyramid with size input
void print_hpyramid(int size)
{
    // print size-1_ 1#
    // print size-2_ 2#
    // print size-3_ 3#
    // print size-size_ size#
}
"""Prints a box with user-input size.
Example of size 3: +--+
                   |  |
                   +--+
"""

def main():
    """Takes user input int and runs draw_box function directly."""
    draw_box(int(input("Enter a size: ")))

def draw_box(size: int):
    """Takes integer argument and draws arg-sized box."""

    # Size of 1 is special case, just prints +.
    if size == 1:
        print("+")

    # Range starts at 1 to use row number in calculations.
    else:
        for row in range(1, size + 1):

            # Defines end/middle "characters" depending on row. mid_char
            # uses two of each character to more closely approximate the
            # height of a line of text.
            if row == 1 or row == size:
                end_char = "+"
                mid_char = "--"
            else:
                end_char = "|"
                mid_char = "  "

            # Prints end, middle, end for each row. Middle is reduced by 2
            # to account for end characters.
            print(end_char + mid_char * (size - 2) + end_char)

main()
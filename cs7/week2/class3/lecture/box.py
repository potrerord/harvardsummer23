"""
Prints a box with user-input size.
Example of size 3: +--+
                   |  |
                   +--+
"""


def main():
    """Prompts user for positive int and runs draw_box function."""

    # Setup for end-of-program reprompt "Again?".
    while True:

        # Continually reprompts user if input is not positive int.
        while True:
            user_size = input("\nEnter a size: ")
            if user_size.isdigit() and int(user_size) > 0:
                break
            print("Size must be a positive integer.")

        draw_box(int(user_size))
        print()

        # Ask user if they would like to run program again.
        while True:
            user_redo = input("Would you like to print another
                              box? (y/n): ")
            if user_redo.lower() == "n":
                return
            elif user_redo.lower() == "y":
                pass
            else:



def draw_box(size: int):
    """Takes integer argument and draws argument-sized box."""

    # Size of 1 is special case, just prints a +.
    if size == 1:
        print("+")

    else:
        # Range starts at 1 to use row number in calculations.
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
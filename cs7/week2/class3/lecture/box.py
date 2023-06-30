"""Prints a box with user-input size."""

user_size = int(input("Enter a size: "))
draw_box(user_size)

# Range starts at 1 to use row number in calculations.

def draw_box(size: int):
    for row in range(1, size + 1):

        # Define end/middle "characters" depending on row. mid_char uses
        # two of each character to more closely approximate the height
        # of a line of text.
        if(row == 1 or row == size):
            end_char = "+"
            mid_char = "--"
        else:
            end_char = "|"
            mid_char = "  "

        # Prints end, middle, end for each row. Middle is reduced by 2
        # to account for end characters.
        print(end_char + mid_char * (size - 2) + end_char)
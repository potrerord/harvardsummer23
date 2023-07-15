"""
Prints 20 random license plate numbers, each one consisting of three
randomly-chosen digits followed by three randomly chosen upper-case
letters. The first digit will not be zero.

Sample output might look like:
382 HGK 819 YEU ...
"""


from random import randint


def main():
    """asdf"""

    # Constant number of license plate numbers to generate.
    AMOUNT = 20


def random_capital() -> str:
    """Return a randomly selected upper-case letter."""

    # ASCII values for characters A and Z.
    A = 65
    Z = 90

    # Randomly select and convert back into capital letter to return.
    return chr(randint(A, Z))


def random_plate() -> str:
    """Return one randomly selected license plate."""

    # Generate random 3-digit integer with leading zeroes. Leading digit
    # will not be 0.
    numbers = f"{randint(100, 999):>3}"

    letters = (random_capital() for _ in range(3))

    return f"{numbers} {letters}"

if __name__ == "__main__":
    main()

# Prints nested squares out of * and . of size n x n

# Prompt user
n = int(input("Enter size: "))

# Print n rows; counter variable is 1 for usage in calculations
for r in range (1, n + 1):
    for c in range(1, n + 1):
            if (r % 2 = 1 and c % 2 = 1):
                  print(., end = "")
            elif ((r % 2 = 1 and c % 2 = 1)
    print()

    # Even: *, Odd: .

    # First & last row is always all one character

    # First + 1 / Last - 1 is always mostly the other character, with the first character at the ends
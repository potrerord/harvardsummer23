"""
Prints the Kelvin equivalent of any temperature in degrees Fahrenheit as
provided by user input.
"""


def main():
    fahrenheit = float(input("Input a temperature in degrees Fahrenheit to be "
                             " converted to Kelvins: "))
    kelvin = convert_temp_ftok(fahrenheit)

    # Fun fact: "Kelvins" are an absolute unit of temperature, so the
    # term "degrees" is not appropriate.
    print(f"{fahrenheit} degrees Fahrenheit equals {kelvin} Kelvins.")


def convert_temp_ftok(f_temp) -> float:
    """Convert temperature from degrees Fahrenheit to Kelvins.
    Returns temperature in Kelvins as a float.
    """

    k_temp = (5 / 9) * (f_temp - 32) + 273.16
    return k_temp


main()
"""Add your solution to the problem 'authorship' here."""


import romeo_and_juliet_data


def main():
    # Add your solution to the problem that makes use of the above to
    # print out the word length frequency table described in the pset.

    word_length_histogram(romeo_and_juliet_data.lines)


def word_length_histogram(text):
    """Takes the a list of multiword lines and returns
    a dictionary where the keys are word lengths and the
    values are how many words there are of that length.
    Assume there is no punctuation to worry about.
    For example, the input:
        [ "Summer school", "is nearly over"]
    should return the dictionary
        { 6 : 3, 2 : 1, 4 : 1 }
    """

    # Eliminate apostrophes.
    text = text.replace("'", "")
    
    for line in text:
        for char in line:




if __name__ == "__main__":
    main()

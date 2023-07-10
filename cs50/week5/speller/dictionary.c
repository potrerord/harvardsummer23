// Implements a dictionary's functionality.

#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

#include "dictionary.h"


// Constant: Number of letters.
const unsigned int LETTERS = 26;

// Represents a node in a trie.
typedef struct Node
{
    struct Node *children[LETTERS];
    bool islast;
}
node;

// Global variable for dictionary word count.
unsigned int word_count = 0;

/*
// Hash table
node *table[N];
*/


// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // Use hash(word) to get a hash value

    // Search the hash table at the location specified by the word's
    // hash value.
        // Return true if the word is found



    // Return false if the word is not found.



    return false;
}


// Hashes word to a number
unsigned int hash(const char *word)
{
    // Hash the word to obtain its hash value (case-insensitively - foo
    // and FOO should have the same value. use strcasecmp.)

    /* The hash function given to you returns an int between 0 and 25,
    inclusive, based on the first character of word. However, there are
    many ways to implement a hash function beyond using the first
    character (or characters) of a word. Consider a hash function that
    uses a sum of ASCII values or the length of a word. A good hash
    function reduces “collisions” and has a (mostly!) even distribution
    across hash table “buckets”.
    */






    // return a positive unsigned int for the hash value



    return toupper(word[0]) - 'A';
}


void initialize_node(node *argnode)
{
    for (int i = 0; i < LETTERS; i++)
    {
        argnode->children[i] = NULL;
    }

    argnode->islast = false;
}


void insert_to_trie(node *trie, char *word)
{
    // Base case: At end of word, mark node as a last letter in a word.
    if (word == '\0')
    {
        trie->islast = true;
        return;
    }

    // Create temp node and exit if failed.
    node *temp = malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("error: memory allocation failed\n");
        exit(1);
    }

    // Initialize temp node.
    initialize_node(temp);

    // Point current trie's child for this letter at new node.
    letter = tolower(word) - 'a';
    trie->children[letter] = temp;

    // Insert next node.
    insert_to_trie(node, word + 1;)

    return;
}


// Load dictionary into memory, return true if successful/false if not.
bool load(const char *dictionary)
{
    // Open dictionary
    FILE *source = fopen(dictionary, "r");

    // Return false if file was not opened.
    if (source == NULL)
    {
        return false;
    }



    char word[LENGTH + 1];

    // Spell-check each word in text
    char c;
    while (fread(&c, sizeof(char), 1, file))
    {
        // Allow only alphabetical characters and apostrophes
        if (isalpha(c) || (c == '\'' && index > 0))
        {
            // Append character to word
            word[index] = c;
            index++;
        }

        // We must have found a whole word
        else if (index > 0)
        {
            // Terminate current word
            word[index] = '\0';











    char word[LENGTH + 1]

    // Read each word in the file.
    char c;
    while (fread(&c, sizeof(char), 1, source))
    {
















        // If trie has NULL child for that letter,
        if (root->children[letter] == NULL)
        {
            // Create space for a new trie node.
            node *temp = malloc(sizeof(node));
            if (temp == NULL)
            {
                return 1;
            }

            root->children[letter] = temp;

        }

        // Create space for a new trie node.
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }


        n->number = x;
        n->next = NULL;



        // Count words for size() function.
        word_count++;
    }

    // TODO: Add new node to head (front) of linked list.
    n->next = list;
    list->next = n;

    // Update the total number of nodes
    totalNodes++;



    // Copy the word into the new node.



    // Hash the word to obtain its hash value.



    // Insert the new node into the hash table (using the index
    // specified by its hash value)



    // Return false if unsuccessful (again, at any other point)



    // Close file and return true for successful load.
    fclose(source);
    return true;
}


// Return number of words in dictionary if loaded, else 0.
unsigned int size(void)
{
    return word_count;
}


// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // Use valgrind with test input for the program like:
    // valgrind ./speller texts/cat.txt


    // Use free() for any allocated memory in load()



    // Use a temp "next" variable to store each node's next value like
    // in lecture.











    return false;
}

// Implements a dictionary's functionality.


#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "dictionary.h"


// Global variable for dictionary word count.
unsigned int word_count = 0;

// Global root for trie.
node *root;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
/*     // Create temp node and exit program if failed.
    node *ptr = malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("error: memory allocation failed\n");
        exit(1);
    }

    // Initialize temp node.
    initialize_node(ptr);

    // Assign allocated memory for node to root pointer.*/
    node *ptr = root;

    // Prepare to convert letter indices.
    int letter;

    // for each character in word:
    for (int i = 0, wordlen = strlen(word); i < wordlen; i++)
    {
        // Convert letter to index.
        letter = tolower(word[i]) - 'a';

        // If ptr is at the last letter,
        if (i == wordlen - 1)
        {
            // Return true if the current node is a last letter.
            if (ptr->islast == true)
            {
                return true;
            }
        }

        // Else, return false if node has no child for this character.
        else if (ptr->children[letter] == NULL)
        {
            return false;
        }

        // Else, if there is a child and it's not the last letter,
        else
        {
            // Move to child and repeat.
            ptr = ptr->children[letter];
            continue;
        }
    }

    // Else, return false.
    return false;
}


/*
// Hashes word to a number
unsigned int hash(const char *word)
{
    return toupper(word[0]) - 'A';
}
*/


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
    // Create temp node and exit program if failed.
    node *ptr = malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("error: memory allocation failed\n");
        exit(1);
    }

    // Initialize temp node.
    initialize_node(ptr);

    // Point current trie's child for this letter at new node.
    int letter = tolower(*word) - 'a';
    trie->children[letter] = ptr;

    // Base case: If child is the letter before '\0', mark child as a last letter.
    if (word[1] == '\0')
    {
        trie = trie->children[letter]
        trie->islast = true;
        return;
    }
    // Insert next node.
    insert_to_trie(trie->children[letter], word + 1);

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

    // Create temp node for root and exit program if failed.
    node *temp = malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("error: memory allocation failed\n");
        exit(1);
    }

    // Initialize temp node.
    initialize_node(temp);

    // Assign allocated memory for node to root pointer.
    root = temp;

    // Prepare to assemble words.
    int index = 0;
    char word[LENGTH + 1];
    char c;

    // Assemble words from dictionary.
    while (fread(&c, sizeof(char), 1, source))
    {
        // Assume all lowercase/apostrophes and separated by \n.
        if (c != '\n')
        {
            // Append character to word.
            word[index] = c;
            index++;
        }

        // New line means the word is over.
        else if (index > 0)
        {
            // Terminate current word.
            word[index] = '\0';

            // Insert word to trie.
            insert_to_trie(root, word);

            // Increment global word count.
            word_count++;

            // Prepare for next word.
            index = 0;
        }
    }

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
    // For each child in node,
    for (int i = 0; i < LETTERS; i++)
    {
        // If child is not null,
        if (root->children[i] != NULL)
        {
            // Unload child.
            free(root->children[i]);
        }

        free(root->children[i]);
    }



    // Use valgrind with test input for the program like:
    // valgrind ./speller texts/cat.txt


    // Use free() for any allocated memory in load()



    // Use a temp "next" variable to store each node's next value like
    // in lecture.











    return false;
}

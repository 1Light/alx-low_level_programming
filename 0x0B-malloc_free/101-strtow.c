#include <stdio.h>
#include <stdlib.h>

/**
 * is_separator - check if a character is a separator
 * @c: character to check
 * @separators: string containing separator characters
 * Return: 1 if c is a separator, 0 otherwise
 */
int is_separator(char c, char *separators)
{
    while (*separators)
    {
        if (c == *separators)
            return 1;
        separators++;
    }
    return 0;
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int words = 0;
    int in_word = 0;  // Flag to track if we are inside a word
    char **matrix;
    char *current_word = NULL;

    // First pass: Count the number of words
    for (int i = 0; str[i]; i++)
    {
        if (!is_separator(str[i], " \t\n"))
        {
            if (!in_word)
            {
                in_word = 1;
                words++;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    // Allocate memory for the matrix
    matrix = malloc((words + 1) * sizeof(char *));
    if (matrix == NULL)
        return NULL;

    // Second pass: Split the string into words
    in_word = 0;
    words = 0;
    for (int i = 0; str[i]; i++)
    {
        if (!is_separator(str[i], " \t\n"))
        {
            if (!in_word)
            {
                in_word = 1;
                current_word = str + i;
            }
        }
        else
        {
            if (in_word)
            {
                in_word = 0;
                int length = (str + i) - current_word;
                matrix[words] = malloc(length + 1);
                if (matrix[words] == NULL)
                {
                    // Clean up on allocation failure
                    for (int j = 0; j < words; j++)
                        free(matrix[j]);
                    free(matrix);
                    return NULL;
                }
                for (int j = 0; j < length; j++)
                    matrix[words][j] = current_word[j];
                matrix[words][length] = '\0';
                words++;
            }
        }
    }

    matrix[words] = NULL;
    return matrix;
}

/**
 * main - Test the strtow function
 * Return: Always 0
 */
int main(void)
{
    char *str = "Talk is cheap. Show me the code.";
    char **words = strtow(str);
    if (words)
    {
        for (int i = 0; words[i]; i++)
        {
            printf("[%s]\n", words[i]);
            free(words[i]);
        }
        free(words);
    }
    return (0);
}

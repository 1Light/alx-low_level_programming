#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * split_string - split a string into words
 * @str: string to split
 * @matrix: array to store the split words
 */
void split_string(char *str, char **matrix)
{
	int i, k = 0, c = 0, start, end;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (c)
			{
				end = i;
				matrix[k] = malloc(c + 1);
				if (matrix[k] == NULL)
					return;

				while (start < end)
					matrix[k][c++] = str[start++];
				matrix[k][c] = '\0';
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	int words = count_word(str);

	if (words == 0)
		return (NULL);

	char **matrix = malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	split_string(str, matrix);
	matrix[words] = NULL;

	return (matrix);
}

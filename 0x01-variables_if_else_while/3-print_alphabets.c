#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point 
 *
 * Return: 0
 */

int main(void)
{
	char array[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(array[i]);
	}
	int i = 0;
	while (i < 26)
	{
		putchar(toupper(array[i]));
		i++;
	}
	putchar('\n');
	return (0);
}

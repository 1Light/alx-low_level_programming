#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point 
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j = 0;

	char array[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(array[i]);
	}
	
	while (j < 26)
	{
		putchar(toupper(array[j]));
		j++;
	}
	putchar('\n');
	return (0);
}

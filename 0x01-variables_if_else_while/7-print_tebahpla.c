#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char array[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i >= 0; i--)
	{
		putchar(array[i]);
	}
	putchar('\n');
	return (0);
}

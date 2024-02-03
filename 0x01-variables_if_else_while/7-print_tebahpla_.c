#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char array[27] = "zyxwvutsrqponmlkjihgfedcba\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(array[i]);
	}
	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char array[24] = "abcdfghijklmnoprstuvwxyz\n";

	for (i = 0; i < 24; i++)
	{
		putchar(array[i]);
	}
	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char array[25] = "abcdfghijklmnoprstuvwxyz\n";

	for (i = 0; i < 25; i++)
	{
		putchar(array[i]);
	}
	return (0);
}

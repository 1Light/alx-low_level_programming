#include <stdio.h>

/**
 * main - entry point
 * This is smart and dumb at the same time
 *
 * Return: 0
 */

int main(void)
{
	char array[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(array[i]);
	}
	putchar('\n');
	return (0);
}

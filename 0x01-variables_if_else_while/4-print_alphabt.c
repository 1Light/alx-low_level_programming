#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char array[27] = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 25; i++)
	{
		if (array[i] == 'q' || array[i] == 'e')
		{
			continue;
		}
		else
		{
		putchar(array[i]);
		}
	}
	return (0);
}

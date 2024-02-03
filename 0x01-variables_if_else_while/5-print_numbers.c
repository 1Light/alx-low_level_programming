#include <stdio.h>

/**
 * main - entry point
 *
 * Result: 0
 */

int main(void)
{
	char array[11] = "0123456789\n";
	int i;

	for (i = 0; i < 11; i++)
	{
		printf("%c", array[i]);
	}
	return (0);
}

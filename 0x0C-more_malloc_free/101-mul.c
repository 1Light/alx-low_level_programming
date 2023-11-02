#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_calloc - special calloc but for int arrays
 * @nmemb: number of elements
 * @size: size of each element
 * Return: int *
 */
int *int_calloc(int nmemb, unsigned int size)
{
	int *p, n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (n = 0; n < nmemb; n++)
		p[n] = 0;

	return (p);
}

/**
 * mult - multiplication
 * @product: int array for the result
 * @n1: string num1
 * @n2: string num2
 * @len1: length of num1
 * @len2: length of num2
 * Return: void
 */
void mult(int *product, char *n1, char *n2, int len1, int len2)
{
	int i, j, f1, f2, sum;

	for (i = len1 - 1; i >= 0; i--)
	{
		sum = 0;
		f1 = n1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			f2 = n2[j] - '0';
			sum = product[i + j + 1] + (f1 * f2) + sum;
			product[i + j + 1] = sum % 10;
			sum = sum / 10;
		}

		product[i + j + 1] += sum;
	}

	for (i = 0; product[i] == 0 && i < len1 + len2; i++)
	{}

	if (i == len1 + len2)
		_putchar('0');

	for (; i < len1 + len2; i++)
		_putchar(product[i] + '0');

	_putchar('\n');
}

/**
 * is_valid - check if the number is valid
 * @num: input number as a string
 * Return: 1 if valid, 0 if not
 */
int is_valid(char *num)
{
	int i;

	for (i = 0; num[i]; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * err - print error message and exit
 * @status: exit status
 * Return: void
 */
void err(int status)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(status);
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: argument array
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i, j, len1 = 0, len2 = 0;
	int *res;

	if (argc != 3)
	{
		err(98);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_valid(argv[i]))
			err(98);
		if (i == 1)
		{
			for (j = 0; argv[i][j]; j++)
				len1++;
		}
		if (i == 2)
		{
			for (j = 0; argv[i][j]; j++)
				len2++;
		}
	}

	res = int_calloc(len1 + len2, sizeof(int));
	if (res == NULL)
		err(98);

	mult(res, argv[1], argv[2], len1, len2);

	free(res);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if a string contains only digits
 * @str: the input string
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
unsigned int count = 0;

while (count < strlen(str))
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}

return (1);
}

/**
 * main - Print the sum of arguments that are numbers
 * @argc: Count of arguments
 * @argv: Array of arguments
 *
 * Return: 0 for success, 1 for an error
 */
int main(int argc, char *argv[])
{
int count = 1;
int str_to_int;
int sum = 0;

while (count < argc)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
count++;
}

printf("%d\n", sum);

return (0);
}


#include "main.h"

/**
 *is_positive_number - function to check if a number is positive
 *@string: string to check
 *Return: void
 */

int is_positive_number(char *string)
{
	int i = 0;

	if (!string)
		return (0);

	for (i = 0; i < string[i]; i++)
	{
		if (string[i] < '0' || string[i] > '9')
			return (0);
	}
	return (1);
}

/**
 *_atoi - function to convert a string to a number
 *@string: string to check
 *Return: integer value
 */


int _atoi(char *string)
{
	int i = 0, num = 0;

	for (i = 0; i < string[i]; i++)
	{
		num *= 10;
		num += (string[i] - '0');
	}
	return (num);
}

#include "main.h"

/**
 *_itoa -  convert n to characters in string.
 *@number: int to be converted.
 *Return: string.
 */

char *_itoa(int number)
{
	int iter = 0;
	char buf[20];

	if (number == 0)
		buf[iter++] = '0';
	while (number > 0)
	{
		buf[iter++] = (number % 10) + '0';
		number /= 10;
	}
	buf[iter] = '\0';
	_reverse_str(buf, iter);

	return (_strdup(buf));
}

/**
 *_reverse_str -  reverse string "string" in place.
 *@string: string to be reversed.
 *@length: length of the string.
 *Return: void.
 */

void _reverse_str(char *string, int length)
{
	int s = 0, e = length - 1;
	char temp;

	while (s < e)
	{
		temp = string[s];
		string[s] = string[e];
		string[e] = temp;
		s++;
		e--;
	}
}

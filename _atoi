#include "main.h"

/**
 *_atoi - string to int
 *@s: this is the source to copy
 *Return: copy of original source
 */

int _atoi(char *s)
{
	int res = 0;
	int i;
	int sign = 1;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == ' ')
			continue;
		if (s[i] == '-')
		{
			sign *= -1;
			continue;
		}

		if (s[i] == '+')
		{
			continue;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
		}
		else if (res == 0)
		{
			continue;
		}
		else
		{
			break;
		}
	}

	if (res == 0)
		return (0);
	else
		return (sign * res);
}

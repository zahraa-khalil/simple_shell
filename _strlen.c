#include "main.h"

/**
 *_strlen -  function that returns the length of a string.
 *@s: char to be checked
 *Return: length of string.
 */

int _strlen(char *s)
{
	int length = 0;
	char *s_tmp_ptr = s;

	while (*s_tmp_ptr != '\0')
	{
		length++;
		s_tmp_ptr++;
	}
	return (length);
}

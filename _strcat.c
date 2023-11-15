#include "main.h"

/**
 *_strcat - function that concat. a string to another one.
 *@dest: dest. string
 *@src: src. string
 *Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int length;
	int index;

	length = 0;
	index = 0;
	while ((dest[length]) != '\0')
	{
		length++;
	}

	while (src[index] != '\0')
	{
		dest[length] = src[index];
		length++;
		index++;
	}

	dest[length] = '\0';
	return (dest);
}

#include "main.h"
#include <stdio.h>

/**
 **_strchr - a function that copies memory area.
 *@s: the address of memory that will search inside
 *@c: char to find its location
 *Return: *s.
 */

char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == 0)
		{
			return (NULL);
		}
		s++;
	}
}

#include "main.h"

/**
 *_strstr - Locates a substring.
 *@haystack: The string to be searched.
 *@needle: The substring to be located.
 *
 *Return: If the substring is located - a pointer to the beginning
 *                                      of the located substring.
 *        If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do
			{
				if (needle[index + 1] == '\0')
					return (_strdup(haystack));

				index++;
			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}

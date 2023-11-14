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

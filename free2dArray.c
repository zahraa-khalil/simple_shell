#include "main.h"

/**
 * freeArray - function to free array elements
 * @array_size: array size
 * @array_Of_Words: Array of command strings
 * Return: void
 */
void freeArray(char **array_Of_Words, int array_size)
{
	int i = 0;

	for (i = 0; i < array_size; i++)
	{
		if (array_Of_Words[i] != NULL)
		{
			free(array_Of_Words[i]);
		}
	}
	if (array_Of_Words != NULL)
	{
		free(array_Of_Words);
	}
}

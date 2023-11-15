#include "main.h"

/**
 *_unsetenv - function that sets the environment variable
 *@array_Of_Words: the array of words
 * Return: Nothing
 */
void _unsetenv(char **array_Of_Words)
{
	int length = 0;

	while (array_Of_Words[length] != NULL)
	{
		length++;
	}

	switch (length)
	{
	case 1:
		_freeArrOfWords(array_Of_Words);
		return;
	case 2:
		if (unsetenv(array_Of_Words[1]) != 0)
		{
			write(2, "Error unsetting environment variable\n", 36);
		}
		break;
	default:
		break;
	}

	_freeArrOfWords(array_Of_Words);
}

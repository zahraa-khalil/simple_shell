#include "main.h"

/**
 *_setenv - function that sets the environment variable
 *@array_Of_Words: the array of words
 *@status: the status
 * Return: Nothing
 */
void _setenv(char **array_Of_Words, int *status __attribute__((unused)))
{
	int length = 0;

	while (array_Of_Words[length] != NULL)
	{
		length++;
	}

	switch (length)
	{
	case 1:
		return;
	case 2:
		if (setenv(array_Of_Words[1], "", 1) != 0)
		{
			write(2, "Error setting environment variable\n", 34);
		}
		break;
	case 3:
		if (setenv(array_Of_Words[1], array_Of_Words[2], 1) != 0)
		{
			write(2, "Error setting environment variable\n", 34);
		}

		break;
	default:
		break;
	}

	_freeArrOfWords(array_Of_Words);
}

#include "main.h"

/**
 *_strdup -  Function to dup one string to another string.
 *@source: source string
 *Return: destination string.
 */

char *_strdup(char *source)
{
	size_t i = 0;
	size_t source_length;
	char *des;

	if (source == NULL)
	{
		return (NULL);
	}
	else
	{
		source_length = _strlen(source);
		des = malloc(source_length + 1);

		if (des == NULL)
		{
			perror("malloc");
			/*exit(EXIT_FAILURE); */
			return (NULL);
		}

		while (source[i] != '\0')
		{
			des[i] = source[i];
			i++;
		}

		des[source_length] = '\0';

		return (des);
	}
}

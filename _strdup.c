#include "main.h"

/**
 *_strdup -  Function to dup one string to another string.
 *@source: source string
 *Return: destination string.
 */

char *_strdup(char *source)
{
	char *des = NULL, *source_tmp_ptr = source;
	int source_length = 0, iter = 0;

	if (source == NULL)
	{
		return (NULL);
	}

	while (*source_tmp_ptr != '\0')
	{
		source_length++;
		source_tmp_ptr++;
	}
	des = malloc((sizeof(char)) * (source_length + 1));
	if (des == NULL)
	{
		perror("malloc");
		return (NULL);
	}

	for (iter = 0; iter < source_length; iter++)
	{
		des[iter] = source[iter];
	}
	des[source_length] = '\0';
	return (des);
}

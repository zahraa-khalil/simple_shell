#include "main.h"

/**
 * exit_bul - Exit Status for built-in commands
 * @array_Of_Words: Array of command strings
 * @line: Input recieved from user (to be freed)
 */

void exit_bul(char **array_Of_Words, char *line)
{
	if (line != NULL)
	{
		free(line);
	}
	if (array_Of_Words != NULL)
	{
		free(array_Of_Words);
	}

	exit(0);
}

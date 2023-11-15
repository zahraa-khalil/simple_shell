#include "main.h"

/**
 *_environ -  pointer to an array of strings.
 *Each string in this array represents an environment variable
 *in the form "name=value".
 *@array_Of_Words: the array of strings
 *@status: the status number
 *Return: environment variable name
 */

void _environ(char **array_Of_Words, int *status)
{
	char **env = environ;
	int fd = 1;
	size_t len;

	while (*env != NULL)
	{
		len = _strlen(*env);
		write(fd, *env, len);
		write(fd, "\n", 1);

		env++;
	}
	_freeArrOfWords(array_Of_Words);
	(*status) = 0;
}

#include "main.h"

/**
 *_getenv - function that compares the given name to the
 *environment variable and return the value
 *@string: the name of the environment variable
 *Return: THE value of the environment variable
 */

char *_getenv(char *string)
{
	char *tmpPtr, *firstHalf, *secondHalf, *envir;
	int iter;

	while (environ[iter])
	{
		tmpPtr = _strdup(environ[iter]);
		firstHalf = strtok(tmpPtr, "=");
		if (_strcmp(firstHalf, string) == 0)
		{
			secondHalf = strtok(NULL, "\n");
			envir = _strdup(secondHalf);
			free(tmpPtr), tmpPtr = NULL;
			return (envir);
		}
		free(tmpPtr), tmpPtr = NULL;

		iter++;
	}

	return (NULL);
}

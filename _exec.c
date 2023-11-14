#include "main.h"

/**
 *_exec - function to execute.
 *@full_command: full_command
 * @array_Of_Words: the array of argv
 *Return: 0 on success
 */

int _exec(char *full_command, char **array_Of_Words)
{
	char **env = environ;

	if (execve(full_command, array_Of_Words, env) == -1)
	/*if (execve(array_Of_Words[0], array_Of_Words, env) == -1)*/
	{
		/*perror(argv[0]);*/
		free(full_command), full_command = NULL;
		_freeArrOfWords(array_Of_Words);
		/*exit(127);*/
	}

	return (0);
}



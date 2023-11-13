#include "main.h"

/**
 *_exec - function to execute.
 *@array_Of_Words: the array of argv
 *@argv: the array of arguments
 *Return: 0 on success
 */

int _exec(char **array_Of_Words, char **argv)
{
	char **env = environ;

	/*if (execve(full_Command, array_Of_Words, env) == -1)*/
	if (execve(array_Of_Words[0], array_Of_Words, env) == -1)
	{
		perror(argv[0]);
		_freeArrOfWords(array_Of_Words);
		exit(127);
	}

	return (0);
}



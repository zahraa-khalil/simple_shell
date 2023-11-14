#include "main.h"

/**
 *_checkBuiltIns - function check if the line is exit
 *@array_Of_Words: the array of words to check
 *Return: nothing if the line is exit.
 */

int _checkBuiltIns(char **array_Of_Words)
{
	int i = 0;
	char *builtins[] = {
		"exit", "env", "setenv", "cd", NULL};

	for (i = 0; builtins[i]; i++)
	{
		if (strcmp(array_Of_Words[i], builtins[i]) == 0)
		{
			return (1);
		}
	}
	return (0);
}

/**
 *handleBuiltins - function handle builtins
 *@array_Of_Words: the array of words to check
 * @argv: command line arguments
 * @status: exit status
 * Return: void
 */

void handleBuiltins(char **array_Of_Words, char **argv, int status)
{
	if (_strcmp(array_Of_Words[0], "exit") == 0)
		exit_bul(array_Of_Words, argv, status);

	else if (_strcmp(array_Of_Words[0], "env") == 0)
		_environ();
}

#include "main.h"

/**
 *_checkBuiltIns - function check if the line is exit
 *@array_Of_Words: the array of words to check
 * @argv: command line arguments
 * @status: exit status
 * @index: line number
 *Return: nothing if the line is exit.
 */

int _checkBuiltIns(char **array_Of_Words, char **argv, int *status, int index)
{
	int i = 0;
	char *builtins[] = {
		"exit", "env", "setenv", "cd", NULL};
	for (i = 0; builtins[i]; i++)
	{
		if (strcmp(array_Of_Words[0], builtins[i]) == 0)
		{
			handleBuiltins(array_Of_Words, argv, status, index);

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
 * @index: line number
 * Return: void
 */

void handleBuiltins(char **array_Of_Words, char **argv, int *status, int index)
{
	if (_strcmp(array_Of_Words[0], "exit") == 0)
		exit_bul(array_Of_Words, argv, status, index);

	else if (_strcmp(array_Of_Words[0], "env") == 0)
		_environ();
}

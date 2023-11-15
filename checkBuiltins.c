#include "main.h"

/**
 *_ckBltIns - function check if the line is exit
 *@arOfWs: the array of words to check
 * @av: command line arguments
 * @stus: exit stus
 * @index: line number
 * @arOfWsSmi: list
 *Return: nothing if the line is exit.
 */

int _ckBltIns(char **arOfWsSmi, char **arOfWs, char **av, int *stus, int index)
{
	int i = 0;
	char *builtins[] = {
		"exit", "env", "setenv", "unsetenv", "cd", NULL};
	for (i = 0; builtins[i]; i++)
	{
		if (_strcmp(arOfWs[0], builtins[i]) == 0)
		{
			hdlBltIn(arOfWsSmi, arOfWs, av, stus, index);

			return (1);
		}
	}
	return (0);
}

/**
 *hdlBltIn - function handle builtins
 *@arOfWs: the array of words to check
 * @av: command line arguments
 * @stus: exit stus
 * @index: line number
 * @arOfWsSmi: the array of words
 * Return: void
 */

void hdlBltIn(char **arOfWsSmi, char **arOfWs, char **av, int *stus, int index)
{
	if (_strcmp(arOfWs[0], "exit") == 0)
		exit_b(arOfWsSmi, arOfWs, av, stus, index);

	else if (_strcmp(arOfWs[0], "env") == 0)
		_environ(arOfWs, stus);
	else if (_strcmp(arOfWs[0], "setenv") == 0)
		_setenv(arOfWs, stus);
	else if (_strcmp(arOfWs[0], "unsetenv") == 0)
		_unsetenv(arOfWs);
}

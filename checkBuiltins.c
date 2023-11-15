#include "main.h"

/**
 *_checkBuiltIns - function check if the line is exit
 *@arrOfWs: the array of words to check
 * @av: command line arguments
 * @stus: exit stus
 * @index: line number
 * @arrOfWsSmi: list
 *Return: nothing if the line is exit.
 */

int _checkBuiltIns(char **arrOfWsSmi, char **arrOfWs, char **av, int *stus, int index)
{
	int i = 0;
	char *builtins[] = {
		"exit", "env", "setenv", "unsetenv", "cd", NULL};
	for (i = 0; builtins[i]; i++)
	{
		if (_strcmp(arrOfWs[0], builtins[i]) == 0)
		{
			handleBuiltin(arrOfWsSmi, arrOfWs, av, stus, index);

			return (1);
		}
	}
	return (0);
}

/**
 *handleBuiltin - function handle builtins
 *@arrOfWs: the array of words to check
 * @av: command line arguments
 * @stus: exit stus
 * @index: line number
 * @arrOfWsSmi: the array of words
 * Return: void
 */

void handleBuiltin(char **arrOfWsSmi, char **arrOfWs, char **av, int *stus, int index)
{
	if (_strcmp(arrOfWs[0], "exit") == 0)
		exit_bul(arrOfWsSmi, arrOfWs, av, stus, index);

	else if (_strcmp(arrOfWs[0], "env") == 0)
		_environ(arrOfWs, stus);
	else if (_strcmp(arrOfWs[0], "setenv") == 0)
		_setenv(arrOfWs, stus);
	else if (_strcmp(arrOfWs[0], "unsetenv") == 0)
		_unsetenv(arrOfWs);
}

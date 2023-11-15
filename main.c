#include "main.h"

/**
 *main - Write a program that prints all the arguments, without using ac.
 *@argv: is a NULL terminated array of strings
 *@argc: is the number of items in av
 *Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char **arrOfWs = NULL, **arrOfWsSmi = NULL;
	char *line = NULL, *delim = " \n\t";
	int status = 0, index = 0, iter = 0;

	while (1)
	{
		iter = 0;
		line = reading_line();
		if (line == NULL) /*ctrl+d*/
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);		}
		index++;
		if (_strcmp(line, "\n") == 0)
		{
			free(line), line = NULL;
			continue;	}
		arrOfWsSmi = _check_operators(line);
		free(line), line = NULL;
		while (arrOfWsSmi[iter])
		{
			arrOfWs = _stringTok(arrOfWsSmi[iter], delim);
			if (!arrOfWs)
				break;
			if (_checkBuiltIns(arrOfWsSmi, arrOfWs, argv, &status, index))
				iter++;
			else
			{
				status = _fork(arrOfWs, argv, index);
				iter++;
			}
		}
		free(arrOfWsSmi), arrOfWsSmi = NULL;
	}
	return (0);
}

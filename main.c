#include "main.h"

/**
 *main - Write a program that prints all the arguments, without using ac.
 *@argv: is a NULL terminated array of strings
 *@argc: is the number of items in av
 *Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char **array_Of_Words = NULL, *line = NULL, *delim = " \n\t";
	int status = 0;

	while (1)
	{
		line = reading_line();
		if (line == NULL) /*ctrl+d*/
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}
		array_Of_Words = _stringTok(line, delim);
		if (!array_Of_Words)
		{
			continue;
		}
		if (_checkBuiltIns(array_Of_Words))
			handleBuiltins(array_Of_Words, argv, status);
		else /*execute*/
			status = _fork(array_Of_Words, argv);
		/*status = _exec(array_Of_Words, argv);*/
	}
	return (0);
}
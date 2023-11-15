#include "main.h"

/**
 *main - Write a program that prints all the arguments, without using ac.
 *@argv: is a NULL terminated array of strings
 *@argc: is the number of items in av
 *Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char **array_Of_Words = NULL, **array_Of_Words_semi = NULL, *line = NULL, *delim = " \n\t";
	int status = 0, index = 0, iter = 0;

	while (1)
	{
		iter = 0;
		line = reading_line();
		if (line == NULL) /*ctrl+d*/
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}
		index++;

		array_Of_Words_semi = _check_operators(line);
		free(line), line = NULL;

		while(array_Of_Words_semi[iter])
		{
			array_Of_Words = _stringTok(array_Of_Words_semi[iter], delim);
			if (!array_Of_Words)
			{
				continue;
			}
			/*status = _exec(array_Of_Words, argv);*/
			
			/*_check_operators(array_Of_Words);*/
			/*printf("main line :%s\n", array_Of_Words[0]);*/

			if (_checkBuiltIns(array_Of_Words, argv, &status, index))
			{
				continue;
			}

			status = _fork(array_Of_Words, argv, index);

			/*status = _exec(array_Of_Words, argv);*/
			iter++;
		}
		free(array_Of_Words_semi), array_Of_Words_semi = NULL;
	}
	return (0);
}

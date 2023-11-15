#include "main.h"

/**
 * exit_bul - Exit Status for built-in commands
 * @av: command line arguments
 * @arrOfWs: Array of command strings
 * @stus: exit stus
 * @index: line number
 * @arrOfWsSmi: Array of command strings
 * Return: exit stus
 */

void exit_bul(char **arrOfWsSmi, char **arrOfWs, char **av, int *stus, int index)
{
	/*note : change stus to pointer*/
	int exit_status = (*stus);
	char *index_string;
	char msg[] = ": exit: Illegal number: ";

	if (arrOfWs[1])
	{
		if (is_positive_number(arrOfWs[1]))
		{
			exit_status = _atoi(arrOfWs[1]);
		}
		else
		{
			/*_error_print(av[0], array_Of_Words[0], index);*/

			index_string = _itoa(index);
			write(STDERR_FILENO, av[0], _strlen(av[0]));
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, index_string, _strlen(index_string));
			write(STDERR_FILENO, msg, _strlen(msg));
			write(STDERR_FILENO, arrOfWs[1], _strlen(arrOfWs[1]));
			write(STDERR_FILENO, "\n", 1);
			free(index_string);
			_freeArrOfWords(arrOfWs);
			(*stus) = 2;
			return;
		}
	}
	_freeArrOfWords(arrOfWs);
	free(arrOfWsSmi);
	exit(exit_status);
}

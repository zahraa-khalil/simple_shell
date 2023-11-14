#include "main.h"

/**
 * exit_bul - Exit Status for built-in commands
 * @argv: command line arguments
 * @array_Of_Words: Array of command strings
 * @status: exit status
 * @index: line number
 * Return: exit status
 */

void exit_bul(char **array_Of_Words, char **argv, int *status, int index)
{
	/*note : change status to pointer*/
	int exit_status = (*status);
	char *index_string;
	char msg[] = ": exit: Illegal number: ";

	if (array_Of_Words[1])
	{
		if (is_positive_number(array_Of_Words[1]))
		{
			exit_status = _atoi(array_Of_Words[1]);
		}
		else
		{
			/*_error_print(argv[0], array_Of_Words[0], index);*/

			index_string = _itoa(index);
			write(STDERR_FILENO, argv[0], _strlen(argv[0]));
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, index_string, _strlen(index_string));
			write(STDERR_FILENO, msg, _strlen(msg));
			write(STDERR_FILENO, array_Of_Words[1], _strlen(array_Of_Words[1]));
			write(STDERR_FILENO, "\n", 1);
			free(index_string);
			_freeArrOfWords(array_Of_Words);
			(*status) = 2;
			return;
		}
	}
	_freeArrOfWords(array_Of_Words);
	exit(exit_status);
}

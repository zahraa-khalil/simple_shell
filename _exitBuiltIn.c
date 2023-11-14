#include "main.h"

/**
 * exit_bul - Exit Status for built-in commands
 * @argv: command line arguments
 * @array_Of_Words: Array of command strings
 * @status: exit status
 * Return: exit status
 */

void exit_bul(char **array_Of_Words, char **argv, int status)
{
	/*note : change status to pointer*/
	int exit_status = status;
	char *index, msg[] = ": exit: Illegal number: ";
	int idx = 0;

	if (is_positive_number(array_Of_Words[1]))
	{
		exit_status = _atoi(array_Of_Words[1]);
	}
	else
	{
		index = _itoa(idx);
		write(STDERR_FILENO, argv[0], _strlen(argv[0]));
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, index, _strlen(index));
		write(STDERR_FILENO, msg, _strlen(msg));
		write(STDERR_FILENO, array_Of_Words[1], _strlen(array_Of_Words[1]));
		write(STDERR_FILENO, "\n", 1);
		free(index);
		_freeArrOfWords(array_Of_Words);
		status = 2;
		return;
	}
	_freeArrOfWords(array_Of_Words);
	exit(exit_status);
}
